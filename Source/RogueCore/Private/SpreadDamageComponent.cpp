#include "SpreadDamageComponent.h"

USpreadDamageComponent::USpreadDamageComponent(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->Range = 500.00f;
    this->SpreadDamageMultiplier = 1.00f;
}

void USpreadDamageComponent::DamagedActor(AActor* Target, float Amount) {
}


