#include "ShieldProjectorBeltUnlockComponent.h"

UShieldProjectorBeltUnlockComponent::UShieldProjectorBeltUnlockComponent(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->Shield = nullptr;
    this->duration = 10.00f;
}

void UShieldProjectorBeltUnlockComponent::StopShieldProjector() {
}

void UShieldProjectorBeltUnlockComponent::StartShieldProjector() {
}




