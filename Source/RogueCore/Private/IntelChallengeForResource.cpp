#include "IntelChallengeForResource.h"

UIntelChallengeForResource::UIntelChallengeForResource() {
    this->RequiredResource = nullptr;
    this->RequiredAmount = 1;
    this->RequiredZone = nullptr;
    this->RequireMutator = false;
    this->AllowCollectionOverMultipleRuns = true;
    this->CanTeammatesDeposit = true;
}

void UIntelChallengeForResource::OnResourceIncreased(UCappedResource* Resource, const float ChangeAmount) {
}

void UIntelChallengeForResource::OnResourceDeposited(UResourceData* Resource, const float change) {
}


