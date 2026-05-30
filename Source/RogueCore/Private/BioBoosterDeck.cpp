#include "BioBoosterDeck.h"

UBioBoosterDeck::UBioBoosterDeck() {
    this->BelongsToClass = nullptr;
    this->Icon = nullptr;
}

TArray<FRewardDispenserReward> UBioBoosterDeck::GetRandomRewardUnlocks(int32 InCount, UWorld* Context, FRandomStream& InRandomStream) {
    return TArray<FRewardDispenserReward>();
}

UPlayerCharacterID* UBioBoosterDeck::GetBelongsToClass() const {
    return NULL;
}


