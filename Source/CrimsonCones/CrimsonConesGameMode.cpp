// Copyright Epic Games, Inc. All Rights Reserved.

#include "CrimsonConesGameMode.h"
#include "CrimsonConesCharacter.h"
#include "UObject/ConstructorHelpers.h"

ACrimsonConesGameMode::ACrimsonConesGameMode()
{
	// set default pawn class to our Blueprinted character
	static ConstructorHelpers::FClassFinder<APawn> PlayerPawnBPClass(TEXT("/Game/ThirdPerson/Blueprints/BP_ThirdPersonCharacter"));
	if (PlayerPawnBPClass.Class != NULL)
	{
		DefaultPawnClass = PlayerPawnBPClass.Class;
	}
}
