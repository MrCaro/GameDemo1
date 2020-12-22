// Copyright Epic Games, Inc. All Rights Reserved.

#include "DemoGame1GameMode.h"
#include "DemoGame1Character.h"
#include "UObject/ConstructorHelpers.h"

ADemoGame1GameMode::ADemoGame1GameMode()
{
	// set default pawn class to our Blueprinted character
	/*static ConstructorHelpers::FClassFinder<APawn> PlayerPawnBPClass(TEXT("Class'/Script/DemoGame1.FirstPawn'"));
	if (PlayerPawnBPClass.Class != NULL)
	{
		DefaultPawnClass = PlayerPawnBPClass.Class;
	}*/
}
