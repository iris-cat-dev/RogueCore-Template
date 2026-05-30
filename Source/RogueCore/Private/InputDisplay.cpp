#include "InputDisplay.h"

FInputDisplay::FInputDisplay() {
    this->Interaction = EInputInteraction::Press;
    this->Icon = nullptr;
    this->IconTintable = false;
    this->InputText = FText::GetEmpty();
    this->TextTint = FLinearColor::White;
}

