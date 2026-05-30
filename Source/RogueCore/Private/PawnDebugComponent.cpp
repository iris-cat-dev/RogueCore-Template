#include "PawnDebugComponent.h"

UPawnDebugComponent::UPawnDebugComponent(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->WidgetComponent = nullptr;
    this->HealthComponent = nullptr;
    this->InfoComponent = nullptr;
}

void UPawnDebugComponent::ShowPawnHealth(bool InWidgetVisible) {
}

void UPawnDebugComponent::OnHealthChanged(float InValue) {
}

void UPawnDebugComponent::OnDeath(UHealthComponentBase* InHealthComponent) {
}


