#include "SpinDeathComponent.h"
#include "Net/UnrealNetwork.h"

USpinDeathComponent::USpinDeathComponent(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->bAutoActivate = true;
    this->MeshToMove = nullptr;
    this->DeathSpinTime = 4.00f;
    this->DeathRotationSpeed = 200.00f;
    this->NewPointMax = 0.50f;
    this->NewPointMin = 1.50f;
    this->DeathSpeed = 6000.00f;
    this->DeathAcceleration = 6000.00f;
    this->Owner_DeepPathfinder = nullptr;
    this->HasDied = false;
}

void USpinDeathComponent::SetMeshToMove(UMeshComponent* InMesh) {
}

void USpinDeathComponent::OnRep_HasDied() {
}

void USpinDeathComponent::OnOwnerDeath(UHealthComponent* HealthComponent, float damageAmount, const FDamageData& DamageData, const TArray<UDamageTag*>& Tags) {
}

void USpinDeathComponent::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const {
    Super::GetLifetimeReplicatedProps(OutLifetimeProps);
    
    DOREPLIFETIME(USpinDeathComponent, HasDied);
}


