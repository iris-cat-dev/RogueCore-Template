#include "DiscordRewardNotification.h"

FDiscordRewardNotification::FDiscordRewardNotification() {
    this->Icon = nullptr;
    this->Text = FText::GetEmpty();
    this->IconColor = FLinearColor::White;
    this->ID = FString();
}

