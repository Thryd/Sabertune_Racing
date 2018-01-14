// Copyright 1998-2017 Epic Games, Inc. All Rights Reserved.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/HUD.h"
#include "Sabertune_RacingHud.generated.h"

UCLASS(config = Game)
class ASabertune_RacingHud : public AHUD
{
	GENERATED_BODY()

public:
	ASabertune_RacingHud();

	/** Font used to render the vehicle info */
	UPROPERTY()
	UFont* HUDFont;

	// Begin AHUD interface
	virtual void DrawHUD() override;
	// End AHUD interface

};
