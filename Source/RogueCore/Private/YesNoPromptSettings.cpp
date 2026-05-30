#include "YesNoPromptSettings.h"

FYesNoPromptSettings::FYesNoPromptSettings() {
    this->WidgetClass = nullptr;
    this->ZOrder = 0;
    this->AutoCloseAllWindows = false;
    this->Title = FText::GetEmpty();
    this->Message = FText::GetEmpty();
}

