#include "HasStatusEffect.h"

UHasStatusEffect::UHasStatusEffect() {
    this->StatusEffect = nullptr;
    this->Mode = EStatusEffectStackMode::HasAnyStacks;
    this->count = 0;
}


