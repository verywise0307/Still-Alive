// Copyright Epic Games, Inc. All Rights Reserved.

#include "shoulder_testCharacter.h"
#include "Camera/CameraComponent.h"
#include "Components/CapsuleComponent.h"
#include "Components/InputComponent.h"
#include "GameFramework/CharacterMovementComponent.h"
#include "GameFramework/Controller.h"
#include "GameFramework/SpringArmComponent.h"
#include "EnhancedInputComponent.h"
#include "EnhancedInputSubsystems.h"
#include "pushingbox.h"
#include "ladder.h"
#include "shoulderviewbox.h"
#include "churuwall.h"

//////////////////////////////////////////////////////////////////////////
// Ashoulder_testCharacter

Ashoulder_testCharacter::Ashoulder_testCharacter()
{
	//횡스크롤 on
	sidescroll = true;

	//밀기 off
	canpush = false;
	ispushing = false;

	//사다리 오르기 off
	canclimb = false;
	climbing = false;
	climbingdown = false;

	//전투 모드 off
	fighting = false;
	weapon = 0;
	pcattack = false;
	swordhit = false;
	weapon_count = 0;

	//웅크리기 off
	iscrouching = false;

	//매달리기 off
	canhang = false;
	hanging = false;

	// Set size for collision capsule
	GetCapsuleComponent()->InitCapsuleSize(42.f, 96.0f);
		
	// Don't rotate when the controller rotates. Let that just affect the camera.
	bUseControllerRotationPitch = false;
	bUseControllerRotationYaw = false;
	bUseControllerRotationRoll = false;

	// Configure character movement
	GetCharacterMovement()->bOrientRotationToMovement = true; // Character moves in the direction of input...	
	GetCharacterMovement()->RotationRate = FRotator(0.0f, 500.0f, 0.0f); // ...at this rotation rate

	// Note: For faster iteration times these variables, and many more, can be tweaked in the Character Blueprint
	// instead of recompiling to adjust them
	GetCharacterMovement()->JumpZVelocity = 700.f;
	GetCharacterMovement()->AirControl = 0.35f;
	GetCharacterMovement()->MaxWalkSpeed = 500.f;
	GetCharacterMovement()->MinAnalogWalkSpeed = 20.f;
	GetCharacterMovement()->BrakingDecelerationWalking = 2000.f;
	GetCharacterMovement()->GravityScale = 1.5f;  // 중력 활성화

	// Create a camera boom (pulls in towards the player if there is a collision)
	CameraBoom = CreateDefaultSubobject<USpringArmComponent>(TEXT("CameraBoom"));
	CameraBoom->SetupAttachment(RootComponent);
	CameraBoom->TargetArmLength = 400.0f; // The camera follows at this distance behind the character	
	CameraBoom->bUsePawnControlRotation = true; // Rotate the arm based on the controller

	// Create a follow camera
	FollowCamera = CreateDefaultSubobject<UCameraComponent>(TEXT("FollowCamera"));
	FollowCamera->SetupAttachment(CameraBoom, USpringArmComponent::SocketName); // Attach the camera to the end of the boom and let the boom adjust to match the controller orientation
	FollowCamera->bUsePawnControlRotation = false; // Camera does not rotate relative to arm

	// Note: The skeletal mesh and anim blueprint references on the Mesh component (inherited from Character) 
	// are set in the derived blueprint asset named ThirdPersonCharacter (to avoid direct content references in C++)
}

void Ashoulder_testCharacter::BeginPlay()
{
	// Call the base class  
	Super::BeginPlay();

	//Add Input Mapping Context
	if (APlayerController* PlayerController = Cast<APlayerController>(Controller))
	{
		if (UEnhancedInputLocalPlayerSubsystem* Subsystem = ULocalPlayer::GetSubsystem<UEnhancedInputLocalPlayerSubsystem>(PlayerController->GetLocalPlayer()))
		{
			Subsystem->AddMappingContext(DefaultMappingContext, 0);
		}
	}

	//오버랩
	if (GetCapsuleComponent())
	{
		GetCapsuleComponent()->OnComponentBeginOverlap.AddDynamic(this, &Ashoulder_testCharacter::OnBeginOverlap);
		GetCapsuleComponent()->OnComponentEndOverlap.AddDynamic(this, &Ashoulder_testCharacter::OnEndOverlap);	
	}
}

void Ashoulder_testCharacter::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

	// 현재 위치 가져오기
	if (sidescroll)
	{
		FVector CurrentLocation = GetActorLocation();

		// X축 위치를 고정
		CurrentLocation.X = 900.0f;

		// 고정된 위치로 설정
		SetActorLocation(CurrentLocation);
	}

}

//////////////////////////////////////////////////////////////////////////
// Input

void Ashoulder_testCharacter::SetupPlayerInputComponent(class UInputComponent* PlayerInputComponent)
{
	// Set up action bindings
	if (UEnhancedInputComponent* EnhancedInputComponent = CastChecked<UEnhancedInputComponent>(PlayerInputComponent)) {
		
		//Jumping
		EnhancedInputComponent->BindAction(JumpAction, ETriggerEvent::Triggered, this, &Ashoulder_testCharacter::JumpCheck);
		EnhancedInputComponent->BindAction(JumpAction, ETriggerEvent::Completed, this, &Ashoulder_testCharacter::StopJumpingCheck);

		//Moving
		EnhancedInputComponent->BindAction(MoveAction, ETriggerEvent::Triggered, this, &Ashoulder_testCharacter::Move);

		//Looking
		EnhancedInputComponent->BindAction(LookAction, ETriggerEvent::Triggered, this, &Ashoulder_testCharacter::Look);

	}

}

void Ashoulder_testCharacter::Move(const FInputActionValue& Value)
{
	// input is a Vector2D
	FVector2D MovementVector = Value.Get<FVector2D>();
	if (Controller != nullptr)
	{
		// find out which way is forward
		const FRotator Rotation = Controller->GetControlRotation();
		const FRotator YawRotation(0, Rotation.Yaw, 0);

		if (!sidescroll)
		{
			// get forward vector
			FVector ForwardDirection = FRotationMatrix(YawRotation).GetUnitAxis(EAxis::X);
			// add movement 
			AddMovementInput(ForwardDirection, MovementVector.Y);
			// get right vector 
			const FVector RightDirection = FRotationMatrix(YawRotation).GetUnitAxis(EAxis::Y);
			AddMovementInput(RightDirection, MovementVector.X);
		}
		else
		{
			// get right vector 
			if (!hanging)
			{
				const FVector RightDirection(0.0f, 1.0f, 0.0f);
				AddMovementInput(RightDirection, MovementVector.X);
			}	
		}

		
	}
}

void Ashoulder_testCharacter::JumpCheck(const FInputActionValue& Value)
{
	if (canclimb) //사다리를 오를 수 있을 때
	{
		// 비행 모드 활성화
		GetCharacterMovement()->SetMovementMode(EMovementMode::MOVE_Flying);
		GetCharacterMovement()->GravityScale = 0.0f;  // 중력 비활성화

		FVector ClimbDirection(0.0f, 0.0f, 1.0f);
		float ClimbSpeed = 200.0f;

		// 수직 속도를 설정하여 캐릭터가 계속해서 오르도록 유지
		FVector CurrentVelocity = GetCharacterMovement()->Velocity;
		CurrentVelocity.Z = ClimbSpeed;  // Z 축만 클라이밍 속도로 설정
		GetCharacterMovement()->Velocity = CurrentVelocity;  // 수직 속도 유지
		//GetCharacterMovement()->Launch(FVector(0.0f, 0.0f, ClimbSpeed));  // 물리적으로 이동. 나중에 벽에 붙는? 액션 만들때 좋을 듯
	}
	else
	{
		Jump();
	}
}

void Ashoulder_testCharacter::StopJumpingCheck(const FInputActionValue& Value)
{
	if (canclimb) //사다리를 오를 수 있을 때
	{
		// 비행 모드 활성화
		GetCharacterMovement()->SetMovementMode(EMovementMode::MOVE_Flying);
		GetCharacterMovement()->GravityScale = 0.0f;  // 중력 비활성화

		FVector ClimbDirection(0.0f, 0.0f, 1.0f);
		float ClimbSpeed = 0.0f;

		// 수직 속도를 설정하여 캐릭터가 계속해서 오르도록 유지
		FVector CurrentVelocity = GetCharacterMovement()->Velocity;
		CurrentVelocity.Z = ClimbSpeed;  // Z 축만 클라이밍 속도로 설정
		GetCharacterMovement()->Velocity = CurrentVelocity;  // 수직 속도 유지
	}
	else
	{
		//GetCharacterMovement()->GravityScale = 1.3f;  // 중력 활성화
		StopJumping();
	}
}


void Ashoulder_testCharacter::Look(const FInputActionValue& Value)
{
	// input is a Vector2D
	FVector2D LookAxisVector = Value.Get<FVector2D>();

	if (Controller != nullptr && !sidescroll)
	{
		// add yaw and pitch input to controller
		AddControllerYawInput(LookAxisVector.X);
		AddControllerPitchInput(LookAxisVector.Y);
	}
}

void Ashoulder_testCharacter::OnBeginOverlap(UPrimitiveComponent* OverlappedComp, AActor* OtherActor, UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const FHitResult& SweepResult)
{
	
	// 밀기 박스 오버랩
	if (Cast<Apushingbox>(OtherActor))
	{
		// 컴포넌트가 정확히 Boxoverlap인지 확인
		if (OtherComp && OtherComp->GetName() == "Boxoverlap")
		{
			canpush = true;
		}
	}

	//사다리 오버랩
	//if (Cast<Aladder>(OtherActor))
	//{
	//	canclimb = true;
	//}

	//츄르벽 오버랩
	if (Cast<Achuruwall>(OtherActor))
	{
		// 컴포넌트가 정확히 playeroverlap인지 확인
		if (OtherComp && OtherComp->GetName() == "playeroverlap")
		{
			canpush = true;
		}
	}
}

void Ashoulder_testCharacter::OnEndOverlap(UPrimitiveComponent* OverlappedComp, AActor* OtherActor, UPrimitiveComponent* OtherComp, int32 OtherBodyIndex)
{
	// Overlap이 끝난 Actor가 pushingbox인지 확인
	if (Cast<Apushingbox>(OtherActor))
	{
		// canpush 값을 false로 설정
		if (OtherComp && OtherComp->GetName() == "Boxoverlap")
		{
			canpush = false;
		}	
	}

	//사다리 오버랩 해제
	//if (OtherActor && Cast<Aladder>(OtherActor))
	//{
	//	canclimb = false;
	//	GetCharacterMovement()->SetMovementMode(EMovementMode::MOVE_Walking); // 걷기 모드 복구
	//	GetCharacterMovement()->GravityScale = 1.5f;  // 중력 활성화
	//}

}




