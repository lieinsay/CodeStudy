// Copyright Epic Games, Inc. All Rights Reserved.

#include "CodeStudyGameMode.h"
#include "CodeStudyCharacter.h"
#include "UObject/ConstructorHelpers.h"

ACodeStudyGameMode::ACodeStudyGameMode()
{
	// set default pawn class to our Blueprinted character
	static ConstructorHelpers::FClassFinder<APawn> PlayerPawnBPClass(TEXT("/Game/ThirdPersonCPP/Blueprints/ThirdPersonCharacter"));
	if (PlayerPawnBPClass.Class != NULL)
	{
		DefaultPawnClass = PlayerPawnBPClass.Class;
	}
}
