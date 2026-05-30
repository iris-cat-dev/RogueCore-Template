#include "RageUnlockComponent.h"
#include "Net/UnrealNetwork.h"

URageUnlockComponent::URageUnlockComponent(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->MeterGainedPerDamageTaken = 0.50f;
    this->RageMeterPercent = 0.00f;
    this->duration = 10.00f;
    this->RageOn = false;
}

void URageUnlockComponent::StopRage() {
}

void URageUnlockComponent::StartRage() {
}

void URageUnlockComponent::SetRage(bool rage) {
}

void URageUnlockComponent::RecieveMeter(UPlayerHealthComponent* PHealth, float RawDamage, float actualDamage, const FDamageData& DamageData, bool anyHealthLost) {
}

void URageUnlockComponent::OnRep_RageOn() {
}

void URageUnlockComponent::OnRep_RageMeter() {
}



bool URageUnlockComponent::IsRageActive() const {
    return false;
}

float URageUnlockComponent::GetRageProgress() const {
    return 0.0f;
}

void URageUnlockComponent::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const {
    Super::GetLifetimeReplicatedProps(OutLifetimeProps);
    
    DOREPLIFETIME(URageUnlockComponent, RageMeterPercent);
    DOREPLIFETIME(URageUnlockComponent, RageOn);
}


