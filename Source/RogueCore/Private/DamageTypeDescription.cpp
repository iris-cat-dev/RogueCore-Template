#include "DamageTypeDescription.h"

FDamageTypeDescription::FDamageTypeDescription() {
    this->Type = EDamageType::Fire;
    this->LinkedUnlock = nullptr;
    this->IconScale = 0.00f;
    this->Name = FText::GetEmpty();
    this->RichDescription = FText::GetEmpty();
    this->RichTag = FName();
    this->Icon = FDamageTypeIconWithColor();
}

