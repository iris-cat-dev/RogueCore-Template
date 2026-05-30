#include "TipsTableRow.h"

FTipsTableRow::FTipsTableRow() {
    this->TimeToDisplay = 0.00f;
    this->Header = FText::GetEmpty();
    this->Description = FText::GetEmpty();
    this->InputText = FText::GetEmpty();
    this->InputTextControllerOverride = FText::GetEmpty();
}

