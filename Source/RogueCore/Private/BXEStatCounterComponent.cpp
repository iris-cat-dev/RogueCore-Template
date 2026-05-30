#include "BXEStatCounterComponent.h"

UBXEStatCounterComponent::UBXEStatCounterComponent(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->HealthText = FText::FromString(TEXT("Health: {value}"));
    this->ShieldText = FText::FromString(TEXT("Shield: {value}"));
    this->Character = nullptr;
}

FText UBXEStatCounterComponent::GetStatsTextForUI() const {
    return FText::GetEmpty();
}


