#include "BXEUnlockPool.h"

UBXEUnlockPool::UBXEUnlockPool() {
    this->SkipReward = nullptr;
}

TArray<UBXEUnlockBase*> UBXEUnlockPool::GetUnlocks() {
    return TArray<UBXEUnlockBase*>();
}

TArray<FUnlockWithRarityIdentifier> UBXEUnlockPool::GetRaritySortedUnlocks() {
    return TArray<FUnlockWithRarityIdentifier>();
}


