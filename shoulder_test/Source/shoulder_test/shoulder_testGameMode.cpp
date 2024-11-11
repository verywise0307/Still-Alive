// Copyright Epic Games, Inc. All Rights Reserved.

#include "shoulder_testGameMode.h"
#include "shoulder_testCharacter.h"
#include "UObject/ConstructorHelpers.h"

Ashoulder_testGameMode::Ashoulder_testGameMode()
{
	// set default pawn class to our Blueprinted character
	static ConstructorHelpers::FClassFinder<APawn> PlayerPawnBPClass(TEXT("/Game/ThirdPerson/Blueprints/BP_ThirdPersonCharacter"));
	if (PlayerPawnBPClass.Class != NULL)
	{
		DefaultPawnClass = PlayerPawnBPClass.Class;
	}
}
