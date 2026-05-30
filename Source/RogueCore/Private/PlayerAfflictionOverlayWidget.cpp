#include "PlayerAfflictionOverlayWidget.h"

UPlayerAfflictionOverlayWidget::UPlayerAfflictionOverlayWidget() : UUserWidget(FObjectInitializer::Get()) {
    this->bOverlayActive = false;
    this->Overlay = nullptr;
}



void UPlayerAfflictionOverlayWidget::EndOverlay() {
}

void UPlayerAfflictionOverlayWidget::BeginOverlay(UPlayerAfflictionOverlay* InOverlay) {
}


