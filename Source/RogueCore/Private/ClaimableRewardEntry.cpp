#include "ClaimableRewardEntry.h"

FClaimableRewardEntry::FClaimableRewardEntry() {
    this->Rewards = nullptr;
    this->Title = FText::GetEmpty();
    this->Text = FText::GetEmpty();
    this->Image = nullptr;
    this->EntryWidgetOverride = nullptr;
}

