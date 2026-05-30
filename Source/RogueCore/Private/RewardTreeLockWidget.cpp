#include "RewardTreeLockWidget.h"

URewardTreeLockWidget::URewardTreeLockWidget() : UUserWidget(FObjectInitializer::Get()) {
    this->EnhancementRewardTree = nullptr;
    this->LockIndex = -1;
    this->RequiredNodesToBuy = 0;
    this->MeritPointCost = 0;
}

bool URewardTreeLockWidget::IsLocked(const UObject* WorldContextObject) const {
    return false;
}

int32 URewardTreeLockWidget::GetRequiredNodesToBuy() const {
    return 0;
}

int32 URewardTreeLockWidget::GetMeritPointCost() const {
    return 0;
}


