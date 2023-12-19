// Copyright Epic Games, Inc. All Rights Reserved.

#include "MYOrpgGameMode.h"
#include "MYOrpgCharacter.h"
#include "UObject/ConstructorHelpers.h"

AMYOrpgGameMode::AMYOrpgGameMode()
{
	// set default pawn class to our Blueprinted character
	static ConstructorHelpers::FClassFinder<APawn> PlayerPawnBPClass(TEXT("/Game/ThirdPersonCPP/Blueprints/ThirdPersonCharacter"));
	if (PlayerPawnBPClass.Class != NULL)
	{
		DefaultPawnClass = PlayerPawnBPClass.Class;
	}
}
