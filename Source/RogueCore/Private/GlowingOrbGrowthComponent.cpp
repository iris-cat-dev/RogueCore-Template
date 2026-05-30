#include "GlowingOrbGrowthComponent.h"
#include "Net/UnrealNetwork.h"

UGlowingOrbGrowthComponent::UGlowingOrbGrowthComponent(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->ConnectedParticle = nullptr;
    this->DamageMultiplier = 1.00f;
    this->GrowthProgress = 0.00f;
}

void UGlowingOrbGrowthComponent::OnRep_Growth() {
}

void UGlowingOrbGrowthComponent::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const {
    Super::GetLifetimeReplicatedProps(OutLifetimeProps);
    
    DOREPLIFETIME(UGlowingOrbGrowthComponent, GrowthProgress);
}


