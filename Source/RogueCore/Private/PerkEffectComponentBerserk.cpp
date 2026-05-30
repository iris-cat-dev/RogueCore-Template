#include "PerkEffectComponentBerserk.h"

UPerkEffectComponentBerserk::UPerkEffectComponentBerserk(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->BoostedStat = nullptr;
    this->AmountPerValue = 0.00f;
}

void UPerkEffectComponentBerserk::OnHealthChanged(float Health) {
}


