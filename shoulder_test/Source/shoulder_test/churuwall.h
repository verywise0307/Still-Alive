// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "churuwall.generated.h"

UCLASS()
class SHOULDER_TEST_API Achuruwall : public AActor
{
	GENERATED_BODY()
	
public:	
	// Sets default values for this actor's properties
	Achuruwall();

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;

};
