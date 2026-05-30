#include "PerkComponent.h"
#include "Net/UnrealNetwork.h"

UPerkComponent::UPerkComponent(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->CanActivatePerks = false;
}

void UPerkComponent::SetUseCount(const UPerkAsset* Perk, const int32 NewUseCount) {
}

void UPerkComponent::SetPerksActive(const bool NewActive) {
}

void UPerkComponent::SetPerkBlocked(const UPerkAsset* Perk, const bool IsBlocked) {
}

void UPerkComponent::SetMaximumUses(const UPerkAsset* Perk, const int32 NewMaximumUses) {
}

void UPerkComponent::SetEnhancements(const TArray<UPerkAsset*>& NewEnhancements) {
}

void UPerkComponent::SetCooldown(const UPerkAsset* Perk, const float NewCooldown) {
}

void UPerkComponent::SetClassPerks(const TArray<UPerkAsset*>& NewClassPerks) {
}

void UPerkComponent::Server_SetUseCount_Implementation(const UPerkAsset* Perk, const int32 NewUseCount) {
}

void UPerkComponent::Server_SetPerkBlocked_Implementation(const UPerkAsset* Perk, const bool IsBlocked) {
}

void UPerkComponent::Server_SetMaximumUses_Implementation(const UPerkAsset* Perk, const int32 NewMaxUses) {
}

void UPerkComponent::Server_SetCooldown_Implementation(const UPerkAsset* Perk, const float NewCooldown) {
}

void UPerkComponent::Server_ResetPerkStates_Implementation() {
}

void UPerkComponent::Server_ResetPerkState_Implementation(const UPerkAsset* Perk) {
}

void UPerkComponent::Server_IncrementUseCount_Implementation(const UPerkAsset* Perk) {
}

void UPerkComponent::ResetPerkStates() {
}

void UPerkComponent::ResetPerkState(const UPerkAsset* Perk) {
}

void UPerkComponent::OnActivePerksReplicated(const TArray<FPerkState>& OldActivePerks) {
}

void UPerkComponent::MarkPerkUsed(const UPerkAsset* Perk) {
}

int32 UPerkComponent::GetUseCount(const UPerkAsset* Perk) const {
    return 0;
}

int32 UPerkComponent::GetRemainingUses(const UPerkAsset* Perk) const {
    return 0;
}

int32 UPerkComponent::GetMaximumUses(const UPerkAsset* Perk) const {
    return 0;
}

TArray<UPerkAsset*> UPerkComponent::GetEnhancements() const {
    return TArray<UPerkAsset*>();
}

TArray<UPerkAsset*> UPerkComponent::GetCustomPerks() const {
    return TArray<UPerkAsset*>();
}

float UPerkComponent::GetCoolDownProgress(const UPerkAsset* Perk) const {
    return 0.0f;
}

float UPerkComponent::GetCooldown(const UPerkAsset* Perk) const {
    return 0.0f;
}

TArray<UPerkAsset*> UPerkComponent::GetClassPerks() const {
    return TArray<UPerkAsset*>();
}

TArray<UPerkAsset*> UPerkComponent::GetActivePerks() const {
    return TArray<UPerkAsset*>();
}

bool UPerkComponent::ContainsPerk(const UPerkAsset* Perk) const {
    return false;
}

bool UPerkComponent::CanUsePerk(const UPerkAsset* Perk) const {
    return false;
}

void UPerkComponent::AddCustomPerk(UPerkAsset* NewCustomPerk) {
}

void UPerkComponent::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const {
    Super::GetLifetimeReplicatedProps(OutLifetimeProps);
    
    DOREPLIFETIME(UPerkComponent, ClassPerks);
    DOREPLIFETIME(UPerkComponent, Enhancements);
    DOREPLIFETIME(UPerkComponent, CustomPerks);
    DOREPLIFETIME(UPerkComponent, ActivePerks);
}


