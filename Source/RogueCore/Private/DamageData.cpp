#include "DamageData.h"

FDamageData::FDamageData() {
    this->DamageVector = EDamageVector::Ranged;
    this->DamageClass = nullptr;
    this->DamageModifier = 0.00f;
    this->ArmorPenetration = 0.00f;
    this->Instigator = nullptr;
    this->DamageCauser = nullptr;
    this->ElementParams = FElementParams();
}

