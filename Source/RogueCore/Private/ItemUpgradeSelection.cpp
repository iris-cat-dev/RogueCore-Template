#include "ItemUpgradeSelection.h"

FItemUpgradeSelection::FItemUpgradeSelection() {
    this->OverclockingUnlocked = false;
    this->WeaponID = FGuid();
    this->EquippedOverclock = FGuid();
    this->EquippedSkinColor = FGuid();
    this->EquippedSkinMesh = FGuid();
}

