#include "ClipBasedDamageBonus.h"

UClipBasedDamageBonus::UClipBasedDamageBonus() {
    this->DamageClass = nullptr;
    this->BuffAmount = 1.00f;
    this->Type = EDamageBonusType::Add;
    this->InvertBonus = false;
}


