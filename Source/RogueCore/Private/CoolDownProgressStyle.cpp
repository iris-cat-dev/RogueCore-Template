#include "CoolDownProgressStyle.h"

FCoolDownProgressStyle::FCoolDownProgressStyle() {
    this->Icon = nullptr;
    this->WidgetOverride = nullptr;
    this->IconTint = FLinearColor::White;
    this->Name = FText::GetEmpty();
    this->AudioCoolDownFinished = nullptr;
}

