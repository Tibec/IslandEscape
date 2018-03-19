// Copyright 1998-2017 Epic Games, Inc. All Rights Reserved.

#include "IslandEscapeGameMode.h"
#include "IslandEscapeCharacter.h"
#include "UObject/ConstructorHelpers.h"

AIslandEscapeGameMode::AIslandEscapeGameMode()
{
	// set default pawn class to our Blueprinted character
	static ConstructorHelpers::FClassFinder<APawn> PlayerPawnBPClass(TEXT("/Game/SideScrollerCPP/Blueprints/SideScrollerCharacter"));
	if (PlayerPawnBPClass.Class != NULL)
	{
		DefaultPawnClass = PlayerPawnBPClass.Class;
	}
}
