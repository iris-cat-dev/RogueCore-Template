#include "PendingRewards.h"

FPendingRewards::FPendingRewards() {
    this->CreditsReward = 0;
    this->XPReward = 0;
    this->bHasData = false;
    this->bWasRewarded = false;
    this->StartStats = FPendingRewardsStats();
    this->EndStats = FPendingRewardsStats();
}

