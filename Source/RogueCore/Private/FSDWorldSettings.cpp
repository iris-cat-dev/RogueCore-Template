#include "FSDWorldSettings.h"

AFSDWorldSettings::AFSDWorldSettings(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->DebugInventoryList = nullptr;
    this->DefaultCharacterClass = nullptr;
    this->ClientCharacterClass = nullptr;
    this->bSpawnInGameActors = true;
    this->bIsTutorialWorld = false;
}


