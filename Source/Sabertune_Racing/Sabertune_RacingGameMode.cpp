// Copyright 1998-2017 Epic Games, Inc. All Rights Reserved.

#include "Sabertune_RacingGameMode.h"
#include "Sabertune_RacingPawn.h"
#include "Sabertune_RacingHud.h"

ASabertune_RacingGameMode::ASabertune_RacingGameMode()
{
	DefaultPawnClass = ASabertune_RacingPawn::StaticClass();
	HUDClass = ASabertune_RacingHud::StaticClass();
}
