#include "BeamSweepAttackComponent.h"

UBeamSweepAttackComponent::UBeamSweepAttackComponent(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->HotRockMaterial = nullptr;
    this->SweepDuration = 1.00f;
    this->SweepAngle = 20.00f;
    this->InflictedStatusEffect = nullptr;
    this->CarveFrequency = 10.00f;
    this->IsAttacking = false;
    this->TraceChannel = TraceTypeQuery1;
    this->TargetedActor = nullptr;
}

void UBeamSweepAttackComponent::StopAttackMulticast_Implementation() {
}

void UBeamSweepAttackComponent::StartAttackMulticast_Implementation(FVector sweepStartDirection, FVector sweepEndDirection) {
}


