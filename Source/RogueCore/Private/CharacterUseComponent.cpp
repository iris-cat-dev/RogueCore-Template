#include "CharacterUseComponent.h"
#include "Net/UnrealNetwork.h"

UCharacterUseComponent::UCharacterUseComponent(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->UseDistance = 150.00f;
    this->LastBeginUseUsable = nullptr;
    this->HoveringUsable = nullptr;
}

void UCharacterUseComponent::Server_SetState_Implementation(const FCharacterUseState& NewState) {
}

void UCharacterUseComponent::Server_OnUsedBy_Implementation(UUsableComponent* usable, APlayerCharacter* User, EInputKeys Key) {
}

void UCharacterUseComponent::RemoveCustomUsableComponent(UUsableComponentBase* usable) {
}

void UCharacterUseComponent::OnRep_State(const FCharacterUseState& oldState) {
}

void UCharacterUseComponent::NotifyUsableUsed_Implementation(UUsableComponentBase* usable) {
}

bool UCharacterUseComponent::IsLookingAtUsable() const {
    return false;
}

bool UCharacterUseComponent::IsLookingAtDepositable() const {
    return false;
}

float UCharacterUseComponent::GetUseProgress() const {
    return 0.0f;
}

AActor* UCharacterUseComponent::GetLookingAtActor() const {
    return NULL;
}

bool UCharacterUseComponent::GetIsUsing() {
    return false;
}

bool UCharacterUseComponent::GetIsDepositing() {
    return false;
}

UUsableComponentBase* UCharacterUseComponent::GetHoveringUsable() const {
    return NULL;
}

UUsableComponentBase* UCharacterUseComponent::GetActiveUsable() const {
    return NULL;
}

void UCharacterUseComponent::Client_OnUsedBy_Implementation(UUsableComponent* InUsable, EInputKeys Key) {
}

void UCharacterUseComponent::All_UseEnded_Implementation(const FCharacterUseState& oldState) {
}

void UCharacterUseComponent::AddCustomUsableComponent(UUsableComponentBase* usable, ECustomUsableType eType) {
}

void UCharacterUseComponent::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const {
    Super::GetLifetimeReplicatedProps(OutLifetimeProps);
    
    DOREPLIFETIME(UCharacterUseComponent, State);
}


