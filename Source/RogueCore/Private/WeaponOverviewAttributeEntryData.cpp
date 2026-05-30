#include "WeaponOverviewAttributeEntryData.h"

FWeaponOverviewAttributeEntryData::FWeaponOverviewAttributeEntryData() {
    this->Amount = 0.00f;
    this->Unit = EWeaponOverviewUnitType::Numerical;
    this->ModifierType = EWeaponOverviewModifierType::Additive;
    this->IsHidden = false;
}

