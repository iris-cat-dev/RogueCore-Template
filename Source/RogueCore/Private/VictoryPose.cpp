#include "VictoryPose.h"

UVictoryPose::UVictoryPose() {
    this->Aquisition = nullptr;
}

void UVictoryPose::Unlock(UObject* WorldContextObject, UPlayerCharacterID* characterID) const {
}

void UVictoryPose::ResetUnlock(UObject* WorldContextObject, UPlayerCharacterID* characterID) {
}

bool UVictoryPose::IsUnlockedNotFromStart(UObject* WorldContextObject, UPlayerCharacterID* characterID) const {
    return false;
}

bool UVictoryPose::IsUnLocked(UObject* WorldContextObject, UPlayerCharacterID* characterID) const {
    return false;
}

void UVictoryPose::Equip(UObject* WorldContextObject, UPlayerCharacterID* characterID) const {
}


