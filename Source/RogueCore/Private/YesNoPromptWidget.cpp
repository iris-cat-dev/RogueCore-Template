#include "YesNoPromptWidget.h"

UYesNoPromptWidget::UYesNoPromptWidget() {
    this->bDestroyOnClick = false;
    this->bCloseAllWindows = true;
    this->DelayBeforeInputIsAccepted = 0.00f;
}

void UYesNoPromptWidget::Show(FText Title, FText Message, const UYesNoPromptWidget::FOnYesNoClickedDelegate& OnYesNoClicked) {
}



void UYesNoPromptWidget::Clicked(bool YesClicked) {
}


