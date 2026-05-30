#include "MolotovComponent.h"

UMolotovComponent::UMolotovComponent(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->Positioning = nullptr;
    this->BurningFlamesClass = nullptr;
    this->Radius = 500.00f;
}

void UMolotovComponent::Trigger() {
}


