#include "MessagePromptWidget.h"

UMessagePromptWidget::UMessagePromptWidget() {
    this->CanCloseFromKeyInput = true;
    this->DelayBeforeInputIsAccepted = 0.00f;
}

void UMessagePromptWidget::Show(const FText NewTitle, const FText NewMessage) {
}



void UMessagePromptWidget::Acknowledge() {
}


