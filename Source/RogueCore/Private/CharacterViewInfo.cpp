#include "CharacterViewInfo.h"

FCharacterViewInfo::FCharacterViewInfo() {
    this->CharacterClass = nullptr;
    this->SurvivedInPod = false;
    this->VictoryPose = nullptr;
    this->EquippedVanity = FEquippedVanity();
}

