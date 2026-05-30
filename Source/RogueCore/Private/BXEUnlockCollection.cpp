#include "BXEUnlockCollection.h"

UBXEUnlockCollection::UBXEUnlockCollection() {
    this->RarityWeightType = ERarityWeightType::Default;
    this->NegotiationCompleteStat = nullptr;
    this->AddDroneUnlocks = false;
}

void UBXEUnlockCollection::GetSkipRewards(TArray<UBXEUnlockBase*>& OutSkipRewards) const {
}

void UBXEUnlockCollection::GetAllUnlocks(TSet<UBXEUnlockBase*>& OutAllUnlocks) const {
}


