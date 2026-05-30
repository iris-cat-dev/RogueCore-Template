#include "ExplosiveShotsComponent.h"

UExplosiveShotsComponent::UExplosiveShotsComponent(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->Sound = nullptr;
    this->effect = nullptr;
}

void UExplosiveShotsComponent::All_ShowEffects_Implementation(const FVector_NetQuantize& Location) {
}


