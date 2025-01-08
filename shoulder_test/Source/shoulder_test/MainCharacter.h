// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Character.h"
#include "InputActionValue.h"
#include "MainCharacter.generated.h"


UCLASS()
class SHOULDER_TEST_API AMainCharacter : public ACharacter
{
	GENERATED_BODY()

	/** Camera boom positioning the camera behind the character */
	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = Camera, meta = (AllowPrivateAccess = "true"))
	class USpringArmComponent* CameraBoom;

	/** Follow camera */
	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = Camera, meta = (AllowPrivateAccess = "true"))
	class UCameraComponent* FollowCamera;

	/** MappingContext */
	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = Input, meta = (AllowPrivateAccess = "true"))
	class UInputMappingContext* DefaultMappingContext;

	/** Jump Input Action */
	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = Input, meta = (AllowPrivateAccess = "true"))
	class UInputAction* JumpAction;

	/** Move Input Action */
	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = Input, meta = (AllowPrivateAccess = "true"))
	class UInputAction* MoveAction;

	/** Look Input Action */
	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = Input, meta = (AllowPrivateAccess = "true"))
	class UInputAction* LookAction;

public:
	// Sets default values for this character's properties
	AMainCharacter();

protected:

	/** Called for movement input */
	void Move(const FInputActionValue& Value);


	/** Called for looking input */
	void Look(const FInputActionValue& Value);

	/** Called for jumping input */
	void JumpCheck(const FInputActionValue& Value);

	/** Called for jumping input */
	void StopJumpingCheck(const FInputActionValue& Value);

protected:
	// APawn interface
	virtual void SetupPlayerInputComponent(class UInputComponent* PlayerInputComponent) override;

	// To add mapping context
	virtual void BeginPlay();

	// Tick 활성화
	virtual void Tick(float DeltaTime) override;


public:	
	/** Returns CameraBoom subobject **/
	FORCEINLINE class USpringArmComponent* GetCameraBoom() const { return CameraBoom; }
	/** Returns FollowCamera subobject **/
	FORCEINLINE class UCameraComponent* GetFollowCamera() const { return FollowCamera; }

	//횡스크롤 숄더뷰 변환
	UPROPERTY(BlueprintReadWrite, Category = "variable")
		bool sidescroll;

	UFUNCTION()
		void OnBeginOverlap(UPrimitiveComponent* OverlappedComp, AActor* OtherActor, UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const FHitResult& SweepResult);

	UFUNCTION()
		void OnEndOverlap(UPrimitiveComponent* OverlappedComp, AActor* OtherActor, UPrimitiveComponent* OtherComp, int32 OtherBodyIndex);

	//밀기 활성화
	UPROPERTY(BlueprintReadWrite, Category = "variable")
		bool canpush;

	UPROPERTY(BlueprintReadWrite, Category = "variable")
		bool pushkey;

	UPROPERTY(BlueprintReadWrite, Category = "variable")
		bool ispushing;

	//사다리 액션 활성화
	UPROPERTY(BlueprintReadWrite, Category = "variable")
		bool canclimb;

	UPROPERTY(BlueprintReadWrite, Category = "variable")
		bool climbing;

	//무기 액션 활성화
	UPROPERTY(BlueprintReadWrite, Category = "variable")
		bool fighting;

	UPROPERTY(BlueprintReadWrite, Category = "variable")
		int weapon;

	UPROPERTY(BlueprintReadWrite, Category = "variable")
		bool pcattack;

	UPROPERTY(BlueprintReadWrite, Category = "variable")
		bool swordhit;

};
