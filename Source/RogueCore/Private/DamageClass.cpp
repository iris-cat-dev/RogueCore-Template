#include "DamageClass.h"

UDamageClass::UDamageClass() {
    this->ResistanceStat = nullptr;
    this->IndicatorImage = nullptr;
    this->DamageShout = nullptr;
    this->DefaultDamageImpulse = nullptr;
    this->ElementType = nullptr;
    this->RagdollScale = 1.00f;
    this->BypassesShield = false;
    this->IgnoreDifficultyScaling = false;
    this->AffectedByFriendlyFire = true;
    this->IgnoresWeakpointBonus = false;
    this->IgnoresArmorModifiers = false;
    this->AffectedByCriticalHits = true;
    this->DisallowDamageNumbers = false;
}


