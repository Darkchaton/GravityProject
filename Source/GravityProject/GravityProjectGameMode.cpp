// Copyright Epic Games, Inc. All Rights Reserved.

#include "GravityProjectGameMode.h"
#include "GravityProjectCharacter.h"
#include "UObject/ConstructorHelpers.h"

AGravityProjectGameMode::AGravityProjectGameMode()
{
	// set default pawn class to our Blueprinted character
	static ConstructorHelpers::FClassFinder<APawn> PlayerPawnBPClass(TEXT("/Game/ThirdPerson/Blueprints/BP_ThirdPersonCharacter"));
	if (PlayerPawnBPClass.Class != NULL)
	{
		DefaultPawnClass = PlayerPawnBPClass.Class;
	}
}
