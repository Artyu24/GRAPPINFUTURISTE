// Copyright Epic Games, Inc. All Rights Reserved.

#include "GRAPPINFUTURISTEGameMode.h"
#include "GRAPPINFUTURISTEHUD.h"
#include "GRAPPINFUTURISTECharacter.h"
#include "UObject/ConstructorHelpers.h"

AGRAPPINFUTURISTEGameMode::AGRAPPINFUTURISTEGameMode()
	: Super()
{
	// set default pawn class to our Blueprinted character
	static ConstructorHelpers::FClassFinder<APawn> PlayerPawnClassFinder(TEXT("/Game/FirstPersonCPP/Blueprints/FirstPersonCharacter"));
	DefaultPawnClass = PlayerPawnClassFinder.Class;

	// use our custom HUD class
	HUDClass = AGRAPPINFUTURISTEHUD::StaticClass();
}
