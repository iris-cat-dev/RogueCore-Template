#include "FSDGameModeSpaceRig.h"

AFSDGameModeSpaceRig::AFSDGameModeSpaceRig(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->AmountOfPlayersSpawnedInMedbay = 0;
    this->StartedSession = false;
}

ASpacerigStart* AFSDGameModeSpaceRig::GetFreeSpawnOfType(ESpacerigStartType aType, AFSDPlayerController* aController) {
    return NULL;
}


