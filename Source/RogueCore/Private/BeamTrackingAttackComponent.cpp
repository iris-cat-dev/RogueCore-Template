#include "BeamTrackingAttackComponent.h"
#include "Net/UnrealNetwork.h"

UBeamTrackingAttackComponent::UBeamTrackingAttackComponent(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->TelegraphDuration = 1.00f;
    this->AttackDuration = 1.00f;
    this->TrackingSpeed = 5.00f;
    this->HotRockMaterial = nullptr;
    this->CarveFrequency = 10.00f;
    this->TraceChannel = TraceTypeQuery1;
    this->IsAttacking = false;
    this->ActorClassFilter = nullptr;
    this->InflictedStatusEffect = nullptr;
    this->IsTelegraphFinished = false;
    this->TargetedActor = nullptr;
}

void UBeamTrackingAttackComponent::StopAttackMulticast_Implementation() {
}

void UBeamTrackingAttackComponent::StartAttackMulticast_Implementation(FVector Direction, AActor* NewTargetedActor) {
}

void UBeamTrackingAttackComponent::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const {
    Super::GetLifetimeReplicatedProps(OutLifetimeProps);
    
    DOREPLIFETIME(UBeamTrackingAttackComponent, IsAttacking);
}


