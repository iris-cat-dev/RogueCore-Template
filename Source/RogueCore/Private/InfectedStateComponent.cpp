#include "InfectedStateComponent.h"

UInfectedStateComponent::UInfectedStateComponent(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->StateId = 18;
    this->AudioFreeOfInfection = nullptr;
    this->InfectedPhysicalMaterial = nullptr;
    this->DwarfFleshMaterial = nullptr;
    this->InfectedAffliction = nullptr;
    this->InfectedMontage = nullptr;
    this->InfectedAndBreakingFreeMontage = nullptr;
    this->BreakingFreeMontageDuration = 0.75f;
    this->HoldToBreakTime = 0.25f;
}

void UInfectedStateComponent::Server_Breakout_Implementation() {
}



