#include "InfectionMasterComponent.h"
#include "Net/UnrealNetwork.h"

UInfectionMasterComponent::UInfectionMasterComponent(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->WeakpointPopSTE = nullptr;
    this->WeakpointPopSTERange = 300.00f;
    this->InfectionPoints = 3;
    this->ExtraInfectionPointsWithMorePlayers = false;
    this->SpikeScale = 1.00f;
    this->InfectionScale = 1.00f;
    this->KillWhenAllPointsDestroyed = false;
    this->ScaleDownOnDeathTime = 3.00f;
    this->BaseMat = nullptr;
    this->GlowMat = nullptr;
    this->HealthComponent = nullptr;
    this->RandomSeed = 0;
}

void UInfectionMasterComponent::OnRep_RandomSeed() {
}

void UInfectionMasterComponent::OnDeath(UHealthComponentBase* Enemy) {
}

void UInfectionMasterComponent::InfectionPointDestroyed(FName Name) {
}

void UInfectionMasterComponent::DealWeakpointDamage(const FName& SocketName) {
}

void UInfectionMasterComponent::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const {
    Super::GetLifetimeReplicatedProps(OutLifetimeProps);
    
    DOREPLIFETIME(UInfectionMasterComponent, InfectionPoints);
    DOREPLIFETIME(UInfectionMasterComponent, RandomSeed);
}


