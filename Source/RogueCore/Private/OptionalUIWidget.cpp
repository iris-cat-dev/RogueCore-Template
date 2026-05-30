#include "OptionalUIWidget.h"

UOptionalUIWidget::UOptionalUIWidget() : UUserWidget(FObjectInitializer::Get()) {
    this->Category = nullptr;
    this->VisibleFlag = ESlateVisibility::SelfHitTestInvisible;
    this->HiddenFlag = ESlateVisibility::Collapsed;
}

void UOptionalUIWidget::OnVisibilityChanged(UOptionalUICategory* UICategory, bool IsVisible) {
}


