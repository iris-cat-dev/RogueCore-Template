#include "ChallengeInfo.h"

FChallengeInfo::FChallengeInfo() {
    this->Icon = nullptr;
    this->IconOutlined = nullptr;
    this->CurrentWins = 0;
    this->NumberOfWins = 0;
    this->XPCompleteGain = 0;
    this->TokenGain = 0;
    this->bIsSpecial = false;
    this->Text = FText::GetEmpty();
    this->Color = FLinearColor::White;
    this->Stat1Image = nullptr;
    this->Stat2Image = nullptr;
}

