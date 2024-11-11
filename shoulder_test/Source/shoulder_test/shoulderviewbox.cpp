// Fill out your copyright notice in the Description page of Project Settings.


#include "shoulderviewbox.h"
#include "Components/BoxComponent.h"
#include "shoulder_testCharacter.h"

// Sets default values
Ashoulderviewbox::Ashoulderviewbox()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

	// 이액터가매프레임Tick()을호출하도록설정한다. 
	// 필요하지않은경우Tick을 꺼 성능을 향상시킬 수 있다.

	RootScene = CreateDefaultSubobject<USceneComponent>(TEXT("Root"));
	RootComponent = RootScene;
	CollisionBox = CreateDefaultSubobject<UBoxComponent>(TEXT("Collision Box"));

	CollisionBox->SetupAttachment(RootComponent);

	CollisionBox->SetBoxExtent(FVector(60.0f, 60.0f, 60.0f));

	CollisionBox->SetRelativeLocation(FVector(0.0f, 0.0f, 120.0f));

	CollisionBox->OnComponentBeginOverlap.AddDynamic(this,&Ashoulderviewbox::OnBeginOverlap);

}

// Called when the game starts or when spawned
void Ashoulderviewbox::BeginPlay()
{
	Super::BeginPlay();
	
}

// Called every frame
void Ashoulderviewbox::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

//캐릭터가 닿았을 경우 뷰 전환
void Ashoulderviewbox::OnBeginOverlap(UPrimitiveComponent* OverlappedComp, AActor* OtherActor, UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const FHitResult& SweepResult)
{
	if (Cast<Ashoulder_testCharacter>(OtherActor))
	{
		Cast<Ashoulder_testCharacter>(OtherActor)->sidescroll = false;
	}
}

