#include "ButtonHoldIndicator.h"

UButtonHoldIndicator::UButtonHoldIndicator() : UUserWidget(FObjectInitializer::Get()) {
    this->SettingsAsset = nullptr;
    this->bOverrideBrushSize = false;
    this->bOverrideHoldDuration = false;
    this->OverrideHoldDuration = 1.00f;
    this->HoldProgress = 0.00f;
    this->bHolding = false;
}

void UButtonHoldIndicator::SetButton(UButton* InButton) {
}

void UButtonHoldIndicator::EndHold() {
}

void UButtonHoldIndicator::ButtonUnhovered() {
}

void UButtonHoldIndicator::ButtonReleased() {
}

void UButtonHoldIndicator::ButtonPressed() {
}

void UButtonHoldIndicator::ButtonHovered() {
}

void UButtonHoldIndicator::BeginHold() {
}


