// Copyright Epic Games, Inc. All Rights Reserved.

#include "MyinventoryGameMode.h"
#include "MyinventoryCharacter.h"
#include "UObject/ConstructorHelpers.h"

AMyinventoryGameMode::AMyinventoryGameMode()
{
	// set default pawn class to our Blueprinted character
	static ConstructorHelpers::FClassFinder<APawn> PlayerPawnBPClass(TEXT("/Game/ThirdPersonCPP/Blueprints/ThirdPersonCharacter"));
	if (PlayerPawnBPClass.Class != NULL)
	{
		DefaultPawnClass = PlayerPawnBPClass.Class;
	}
}
