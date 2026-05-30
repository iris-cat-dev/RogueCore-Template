#include "WindowWidget.h"

UWindowWidget::UWindowWidget() : UUserWidget(FObjectInitializer::Get()) {
    this->bHandleCloseCommand = true;
    this->LimitFrameRateWhenOpen = false;
    this->ResolutionDownscaleMode = EWindowResolutionDownscaleMode::None;
}






bool UWindowWidget::ReceiveCanCloseWindow_Implementation(FName InActionName, FKey InKey, bool InIsMouseEvent) {
    return false;
}




void UWindowWidget::ConsumeCommand() {
}

void UWindowWidget::CloseThisWindow() {
}

void UWindowWidget::CallOnShown() {
}


