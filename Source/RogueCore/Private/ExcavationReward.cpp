#include "ExcavationReward.h"

FExcavationReward::FExcavationReward() {
    this->RewardClass = nullptr;
    this->PercentChance = 0.00f;
    this->ShouldBeRemovedAfterPick = false;
    this->ResourceAmount = 0.00f;
    this->Title = FName();
    this->Image = nullptr;
    this->OmegaShoutOnSelected = nullptr;
}

