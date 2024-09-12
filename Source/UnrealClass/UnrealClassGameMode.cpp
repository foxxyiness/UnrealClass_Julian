// Copyright Epic Games, Inc. All Rights Reserved.

#include "UnrealClassGameMode.h"
#include "UnrealClassCharacter.h"
#include "UObject/ConstructorHelpers.h"

AUnrealClassGameMode::AUnrealClassGameMode()
{
	// set default pawn class to our Blueprinted character
	static ConstructorHelpers::FClassFinder<APawn> PlayerPawnBPClass(TEXT("/Game/ThirdPerson/Blueprints/BP_ThirdPersonCharacter"));
	if (PlayerPawnBPClass.Class != NULL)
	{
		DefaultPawnClass = PlayerPawnBPClass.Class;
	}
}
