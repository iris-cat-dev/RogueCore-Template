#include "BeamTrackerComponent.h"

UBeamTrackerComponent::UBeamTrackerComponent(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->SourceSetting = EBeamTrackerSetting::Component;
    this->TargetSetting = EBeamTrackerSetting::Component;
    this->UseLocalSpace = false;
}

void UBeamTrackerComponent::SetBeamTargetLocation(const FVector& Location) {
}

void UBeamTrackerComponent::SetBeamSourceLocation(const FVector& Location) {
}

void UBeamTrackerComponent::SetBeamBothLocation(const FVector& Source, const FVector& Target) {
}


