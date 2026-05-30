#include "ContingencyPlanUnlockComponent.h"

UContingencyPlanUnlockComponent::UContingencyPlanUnlockComponent(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->ActivationDelay = 1.00f;
    this->Used = false;
}

void UContingencyPlanUnlockComponent::StartContingencyPlan() {
}

void UContingencyPlanUnlockComponent::SetUsed(bool NewValue) {
}



void UContingencyPlanUnlockComponent::OnOwnerStateChanced(ECharacterState State) {
}

void UContingencyPlanUnlockComponent::OnOwnerRevived() {
}

void UContingencyPlanUnlockComponent::OnOwnerDied(UHealthComponentBase* Health) {
}

void UContingencyPlanUnlockComponent::OnGameStateChanged(AFSDGameState* GameState) {
}

bool UContingencyPlanUnlockComponent::IsEffectActive() const {
    return false;
}

void UContingencyPlanUnlockComponent::EndContingencyPlan() {
}

void UContingencyPlanUnlockComponent::All_Triggered_Implementation() {
}

void UContingencyPlanUnlockComponent::All_OnContingencyStarted_Implementation() {
}

void UContingencyPlanUnlockComponent::All_OnContingencyEnded_Implementation() {
}


