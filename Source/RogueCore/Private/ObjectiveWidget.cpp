#include "ObjectiveWidget.h"

UObjectiveWidget::UObjectiveWidget() : UUserWidget(FObjectInitializer::Get()) {
    this->MissionObjective = nullptr;
    this->bIsPrimaryObjective = false;
    this->ObjectiveCounterIcon = nullptr;
    this->bObjectiveCompleted = false;
}

void UObjectiveWidget::SetText(const FText& InText, const FText& InCounterText, UTexture2D* InCounterIcon, bool InObjectiveCompleted) {
}

void UObjectiveWidget::SetSimpleText(const FText& InText, bool InObjectiveCompleted) {
}

void UObjectiveWidget::SetObjective(UObjective* InObjective, bool InIsPrimaryObjective) {
}



void UObjectiveWidget::OnObjectiveUpdated(UObjective* InObjective) {
}


