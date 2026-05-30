#include "BXEStartingWeapon.h"

UBXEStartingWeapon::UBXEStartingWeapon() {
    this->UnlockAsset = nullptr;
    this->UnlockChallenge = nullptr;
    this->LoadedItemID = nullptr;
}

FText UBXEStartingWeapon::GetWeaponName() const {
    return FText::GetEmpty();
}

FText UBXEStartingWeapon::GetWeaponDescription() const {
    return FText::GetEmpty();
}

FText UBXEStartingWeapon::GetUnlockChallengeText(const UObject* WorldContext) const {
    return FText::GetEmpty();
}

UBXEChallenge* UBXEStartingWeapon::GetUnlockChallenge() const {
    return NULL;
}

UBXEUnlockItem* UBXEStartingWeapon::GetUnlockAsset() const {
    return NULL;
}

UItemID* UBXEStartingWeapon::GetItemID() const {
    return NULL;
}

UItemData* UBXEStartingWeapon::GetItemData() const {
    return NULL;
}

bool UBXEStartingWeapon::Equip(const UObject* WorldContext) {
    return false;
}


