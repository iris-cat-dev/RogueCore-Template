#include "RadiationBoilsComponent.h"
#include "Net/UnrealNetwork.h"

URadiationBoilsComponent::URadiationBoilsComponent(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->BoilPopEffect = nullptr;
    this->BoilCreatedSound = nullptr;
    this->BoilCreatedSoundDelay = 0.30f;
    this->BoilPopSound = nullptr;
    this->BoilMaxHealth = 30;
    this->BoilsToAddPerStage = 1;
    this->BoilGrowSpeed = 3.00f;
    this->DealDamagePercentOfHPOnPop = 0.10f;
    this->DamageListenerProfile = 0;
}

void URadiationBoilsComponent::OnRep_AttachedBoilInfos(const TArray<FBoilInfo>& InLastInfos) {
}

void URadiationBoilsComponent::OnOwnerDeath(UHealthComponentBase* HealthComponent) {
}

void URadiationBoilsComponent::IncrementBoilStage() {
}

void URadiationBoilsComponent::BoilCreatedSoundTimerFinished() {
}

void URadiationBoilsComponent::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const {
    Super::GetLifetimeReplicatedProps(OutLifetimeProps);
    
    DOREPLIFETIME(URadiationBoilsComponent, AttachedBoilInfos);
    DOREPLIFETIME(URadiationBoilsComponent, StaticMeshComponentPool);
}


