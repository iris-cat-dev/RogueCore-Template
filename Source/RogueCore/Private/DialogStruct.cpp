#include "DialogStruct.h"

FDialogStruct::FDialogStruct() {
    this->Enabled = false;
    this->Restriction = EDialogRestriction::None;
    this->Weight = 0.00f;
    this->Text = FText::GetEmpty();
    this->Audio = nullptr;
    this->Audio_Voice02 = nullptr;
}

