// Copyright Epic Games, Inc. All Rights Reserved.

#include "PongGameMode.h"
#include "PongCharacter.h"
#include "UObject/ConstructorHelpers.h"

APongGameMode::APongGameMode()
	: Super()
{
	// set default pawn class to our Blueprinted character
	static ConstructorHelpers::FClassFinder<APawn> PlayerPawnClassFinder(TEXT("/Game/FirstPerson/Blueprints/BP_FirstPersonCharacter"));
	DefaultPawnClass = PlayerPawnClassFinder.Class;

}
