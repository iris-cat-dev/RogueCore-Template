#include "AbilityData.h"

UAbilityData::UAbilityData() {
    this->ID = nullptr;
    this->AbilityWidgetOverride = nullptr;
    this->PreviewImage = nullptr;
    this->AbilityFailedShout = nullptr;
    this->AbilityUpgrades = nullptr;
}

TArray<UBXEUnlockBase*> UAbilityData::GetOwnedAbilityUpgrades(AFSDPlayerState* InPlayerState) const {
    return TArray<UBXEUnlockBase*>();
}


