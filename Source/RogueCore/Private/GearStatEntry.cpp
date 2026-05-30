#include "GearStatEntry.h"

FGearStatEntry::FGearStatEntry() {
    this->PreviewStatus = EItemPreviewStatus::Normal;
    this->Text = FText::GetEmpty();
    this->Value = FText::GetEmpty();
    this->BaseValue = FText::GetEmpty();
    this->UpgradeValue = FText::GetEmpty();
}

