#include "IntelChallengeForStat.h"

UIntelChallengeForStat::UIntelChallengeForStat() {
    this->RequiredStat = nullptr;
    this->RequiredAmount = 1;
    this->RequiredZone = nullptr;
    this->RequireMutator = false;
}

void UIntelChallengeForStat::OnStatUpdated(UObject* WorldContext, UMissionStat* ChangedStat, float Value, float change) {
}


