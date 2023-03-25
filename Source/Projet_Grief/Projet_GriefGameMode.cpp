// Copyright Epic Games, Inc. All Rights Reserved.

#include "Projet_GriefGameMode.h"
#include "Projet_GriefCharacter.h"
#include "UObject/ConstructorHelpers.h"

AProjet_GriefGameMode::AProjet_GriefGameMode()
{
	// set default pawn class to our Blueprinted character
	static ConstructorHelpers::FClassFinder<APawn> PlayerPawnBPClass(TEXT("/Game/ThirdPerson/Blueprints/BP_ThirdPersonCharacter"));
	if (PlayerPawnBPClass.Class != NULL)
	{
		DefaultPawnClass = PlayerPawnBPClass.Class;
	}
}
