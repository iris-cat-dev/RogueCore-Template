#include "HealingStatusEffectItem.h"

UHealingStatusEffectItem::UHealingStatusEffectItem() {
    this->HealPercentage = true;
    this->NoDamageTimeRequired = 0.00f;
    this->PawnAffliction = nullptr;
    this->IgnoreCanTakeDamage = false;
}


