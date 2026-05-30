#include "ProjectileHomingTargetComponent.h"
#include "Net/UnrealNetwork.h"

UProjectileHomingTargetComponent::UProjectileHomingTargetComponent(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->TargetingMethod = ETargetingMethod::ByDistance;
    this->Radius = -1.00f;
    this->MaxAngleFromForwardDegrees = 90.00f;
    this->PerformOcclusionCheck = false;
    this->LockonDelay = 0.00f;
    this->IsComponentDisabled = false;
    this->OnlyIncludePawnsWithAttitude = 0;
}

void UProjectileHomingTargetComponent::OnTargetDeath(UHealthComponentBase* Health) {
}

void UProjectileHomingTargetComponent::OnRep_TargetComponent() {
}

void UProjectileHomingTargetComponent::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const {
    Super::GetLifetimeReplicatedProps(OutLifetimeProps);
    
    DOREPLIFETIME(UProjectileHomingTargetComponent, TargetComponent);
}


