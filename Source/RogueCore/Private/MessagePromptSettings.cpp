#include "MessagePromptSettings.h"

FMessagePromptSettings::FMessagePromptSettings() {
    this->WidgetClass = nullptr;
    this->ZOrder = 0;
    this->CloseAfterAcknowledge = false;
    this->Title = FText::GetEmpty();
    this->Message = FText::GetEmpty();
}

