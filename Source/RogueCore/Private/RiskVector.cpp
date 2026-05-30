#include "RiskVector.h"

URiskVector::URiskVector() {
    this->OptionalExtraObjective = nullptr;
    this->DoubleWarning = true;
    this->ShowInUserInterface = true;
    this->Icon = nullptr;
    this->CampaignIcon = nullptr;
    this->Header = nullptr;
    this->VoteOptionActionType = EVoteOptionActionType::NEGATIVE;
    this->bVoteRepeatable = false;
    this->bRunPersistent = true;
}

FText URiskVector::GetRichDescription() const {
    return FText::GetEmpty();
}


