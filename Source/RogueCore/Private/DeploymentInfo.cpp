#include "DeploymentInfo.h"

FDeploymentInfo::FDeploymentInfo() {
    this->Icon = nullptr;
    this->IconOutlined = nullptr;
    this->CurrentWins = 0;
    this->RequiredNumberOfWins = 0;
    this->MeritReward = 0;
    this->Text = FText::GetEmpty();
    this->Color = FLinearColor::White;
    this->Stat1Image = nullptr;
    this->Stat2Image = nullptr;
}

