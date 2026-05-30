#include "SeasonLevelWidget.h"

USeasonLevelWidget::USeasonLevelWidget() : UUserWidget(FObjectInitializer::Get()) {
    this->Level = 0;
    this->SeasonLevel = 0;
    this->IsNormalClaimed = false;
    this->IsSpecialClaimed = false;
    this->IsUnLocked = false;
    this->IsLastInRow = false;
}

bool USeasonLevelWidget::TryClaimReward(bool isNormalReward) {
    return false;
}

void USeasonLevelWidget::SetData(int32 inLevel, bool inLastInRow) {
}




