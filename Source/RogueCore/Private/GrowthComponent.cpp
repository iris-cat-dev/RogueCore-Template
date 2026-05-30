#include "GrowthComponent.h"

UGrowthComponent::UGrowthComponent(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->ScaleComponent = nullptr;
}

void UGrowthComponent::StopGrow() {
}

void UGrowthComponent::StartGrow(USceneComponent* aComponentToScale, FRuntimeFloatCurve aCurve) {
}


