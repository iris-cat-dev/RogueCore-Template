#include "ButtonWidget.h"

UButtonWidget::UButtonWidget() : UUserWidget(FObjectInitializer::Get()) {
    this->DataIndex = 0;
    this->DataObject = nullptr;
    this->DataBool = false;
    this->AnimHoveringPlaybackSpeed = 1.00f;
    this->AnimClickedPlaybackSpeed = 1.00f;
    this->bButtonHovered = false;
    this->bButtonEnabled = true;
    this->MainButton = nullptr;
    this->InnerButtonWidget = nullptr;
    this->AnimHovering = nullptr;
    this->AnimClicked = nullptr;
}

void UButtonWidget::SetInnerButtonWidget(UButtonWidget* InButton) {
}

void UButtonWidget::SetButtonEnabled(bool InIsEnabled) {
}

void UButtonWidget::SetButtonData(int32 InDataIndex, UObject* InDataObject, const FString& InDataString, bool InDataBool) {
}




void UButtonWidget::InnerButtonUnhovered(UButtonWidget* InButton) {
}

void UButtonWidget::InnerButtonHovered(UButtonWidget* InButton) {
}

void UButtonWidget::InnerButtonClicked(UButtonWidget* InButton) {
}

void UButtonWidget::Click() {
}

void UButtonWidget::ButtonUnhovered() {
}

void UButtonWidget::ButtonHovered() {
}

void UButtonWidget::ButtonClicked() {
}


