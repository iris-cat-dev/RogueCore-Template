#include "AbilityComponent.h"
#include "Net/UnrealNetwork.h"

UAbilityComponent::UAbilityComponent(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->AbilityData = nullptr;
    this->CoolDownTime = 120.00f;
    this->EffectTime = 10.00f;
    this->CooldownTimer = -1.00f;
    this->EffectTimer = -1.00f;
    this->RangeMultiplier = 1.00f;
    this->UseCost = 1;
    this->charges = 0;
    this->MaxCharges = 1;
    this->TempCharges = 0;
    this->AbilityBlockedOn = EAbilityBlockedOn::Unique;
    this->ActivationType = EAbilityActivationType::OnRelease;
    this->DeactivationType = EAbilityDeactivationType::OnDuration;
    this->FullyChargedShout = nullptr;
    this->IsEffectActive = false;
    this->AnyTeamAbilityActive = false;
    this->AnyAbilityOfThisTypeActive = false;
    this->CanActivateWhenDead = false;
}

AAbilityItem* UAbilityComponent::TryGetAbilityItem() const {
    return NULL;
}

void UAbilityComponent::SetRegenBlocked(bool IsBlocked) {
}

void UAbilityComponent::Server_DeactivateAbility_Implementation() {
}

void UAbilityComponent::Server_ActivateAbility_Implementation() {
}






void UAbilityComponent::QueueDeactivation() {
}

void UAbilityComponent::OnRep_IsEffectActive() {
}

bool UAbilityComponent::HasTotalChargePct(float pct) const {
    return false;
}

int32 UAbilityComponent::GetMaxCharges() const {
    return 0;
}

bool UAbilityComponent::GetIsEffectActive() const {
    return false;
}

float UAbilityComponent::GetCoolDownRemainingPct() const {
    return 0.0f;
}

int32 UAbilityComponent::GetCharges() const {
    return 0;
}

APlayerCharacter* UAbilityComponent::GetCharacter() const {
    return NULL;
}

UAbilityData* UAbilityComponent::GetAbilityData() const {
    return NULL;
}

void UAbilityComponent::DecreaseCurrentCooldownBySeconds(const float InSeconds) {
}

void UAbilityComponent::DecreaseCurrentCooldownByPercent(const float InPercent) {
}

void UAbilityComponent::DeactivateAbility() {
}

void UAbilityComponent::ConsumeCharge(int32 Amount) {
}

void UAbilityComponent::Client_DecreaseCurrentCooldownBySeconds_Implementation(const float InSeconds) {
}

void UAbilityComponent::Client_DecreaseCurrentCooldownByPercent_Implementation(const float InPercent) {
}

void UAbilityComponent::AddCharges(int32 Amount) {
}

void UAbilityComponent::ActivateAbility(bool ReleaseToDeactivate) {
}

void UAbilityComponent::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const {
    Super::GetLifetimeReplicatedProps(OutLifetimeProps);
    
    DOREPLIFETIME(UAbilityComponent, IsEffectActive);
    DOREPLIFETIME(UAbilityComponent, AnyTeamAbilityActive);
    DOREPLIFETIME(UAbilityComponent, AnyAbilityOfThisTypeActive);
}


