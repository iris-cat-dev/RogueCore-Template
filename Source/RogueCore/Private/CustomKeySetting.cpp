#include "CustomKeySetting.h"

FCustomKeySetting::FCustomKeySetting() {
    this->ActionGroup = 0;
    this->ActionAxis = EKeyBindingAxis::None;
    this->SaveID = FName();
    this->Description = FText::GetEmpty();
}

