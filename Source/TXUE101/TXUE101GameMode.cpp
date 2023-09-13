// Copyright Epic Games, Inc. All Rights Reserved.

#include "TXUE101GameMode.h"
#include "TXUE101HUD.h"
#include "TXUE101Character.h"
#include "UObject/ConstructorHelpers.h"

ATXUE101GameMode::ATXUE101GameMode()
	: Super()
{
	// set default pawn class to our Blueprinted character
	static ConstructorHelpers::FClassFinder<APawn> PlayerPawnClassFinder(TEXT("/Game/FirstPersonCPP/Blueprints/FirstPersonCharacter"));
	DefaultPawnClass = PlayerPawnClassFinder.Class;

	// use our custom HUD class
	HUDClass = ATXUE101HUD::StaticClass();
}
