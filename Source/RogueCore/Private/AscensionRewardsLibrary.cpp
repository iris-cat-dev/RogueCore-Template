#include "AscensionRewardsLibrary.h"

UAscensionRewardsLibrary::UAscensionRewardsLibrary() {
}

bool UAscensionRewardsLibrary::HasPendingAscensionRewards(UObject* WorldContext) {
    return false;
}

bool UAscensionRewardsLibrary::ClaimAscensionRewards(UObject* WorldContext, APlayerController* PlayerController, TArray<FClaimableRewardEntry>& OutRewards, bool& OutFirstAscension) {
    return false;
}


