#include "CharacterBuildData.h"

FCharacterBuildData::FCharacterBuildData() {
    this->PlayerId = 0;
    this->PlayerName = FString();
    this->PlayerCharacterID = FGuid();
    this->ServerBuildData = FCharacterServerBuildData();
}

