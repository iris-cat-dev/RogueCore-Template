#include "ClaimableRewardView.h"

FClaimableRewardView::FClaimableRewardView() {
    this->MissionControlSpeak = nullptr;
    this->MoveInRewardsDelay = 0.00f;
    this->BackgroundWidgetClass = nullptr;
    this->FanfareAudio = nullptr;
    this->ClaimButtonText = FText::GetEmpty();
}

