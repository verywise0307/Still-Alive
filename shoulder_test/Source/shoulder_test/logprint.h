// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Engine/GameInstance.h"
#include "logprint.generated.h"

/**
 * 
 */
UCLASS()
class SHOULDER_TEST_API Ulogprint : public UGameInstance
{
	GENERATED_BODY()
	
public:
	virtual void Shutdown() override;
};
