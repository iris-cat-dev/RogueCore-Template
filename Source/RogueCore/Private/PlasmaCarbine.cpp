#include "PlasmaCarbine.h"

APlasmaCarbine::APlasmaCarbine(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->RateOfFireBoostOnFullShield = 1.00f;
    this->RemoveShieldOnOverheat = false;
    this->RemoveShieldOnReload = false;
    this->HeatEffectsThreshold = 50.00f;
    this->FP_CharacterOverheatEndMontage = nullptr;
    this->TP_CharacterOverheatEndMontage = nullptr;
    this->WPN_ItemOverheatEndMontage = nullptr;
    this->FP_CharacterReloadEndMontage = nullptr;
    this->TP_CharacterReloadEndMontage = nullptr;
    this->WPN_ItemReloadEndMontage = nullptr;
    this->OverheatCharacterEndMontage = nullptr;
    this->OverheatItemEndMontage = nullptr;
}

void APlasmaCarbine::ApplyShieldDamage_Implementation() {
}


