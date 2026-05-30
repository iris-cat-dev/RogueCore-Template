#include "PrefetchedDamageBonuses.h"

UPrefetchedDamageBonuses::UPrefetchedDamageBonuses(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->DamageAsset = nullptr;
}

FPrefetchedDamageBonusResult UPrefetchedDamageBonuses::GetResult() const {
    return FPrefetchedDamageBonusResult{};
}


