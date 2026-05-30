#include "Reward.h"

UReward::UReward() {
    this->IsSingleUse = false;
}

bool UReward::IsUnlockedPerClass() const {
    return false;
}

UTexture2D* UReward::GetRewardTypeImage() {
    return NULL;
}

FText UReward::GetRewardText() {
    return FText::GetEmpty();
}


