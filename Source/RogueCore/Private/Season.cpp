#include "Season.h"

USeason::USeason() {
    this->SeasonNumber = 0;
    this->TreeOfVanity = nullptr;
    this->SeasonDLC = nullptr;
    this->NumberOfScripChallenges = 0;
    this->SeasonWaveInMissionChance = 0.00f;
    this->SeasonWarning = nullptr;
}

void USeason::AddUnassignedReward(int32 Index, UReward* Reward) {
}

void USeason::AddLevel(int32 Index, UReward* Reward, UReward* specialReward) {
}


