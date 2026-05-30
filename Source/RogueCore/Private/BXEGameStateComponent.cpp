#include "BXEGameStateComponent.h"
#include "Net/UnrealNetwork.h"

UBXEGameStateComponent::UBXEGameStateComponent(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
}

void UBXEGameStateComponent::SignalNewDifficultyStartingSoon_Implementation() const {
}

void UBXEGameStateComponent::SignalNewDifficulty_Implementation(int32 DifficultyIndex) const {
}

void UBXEGameStateComponent::OnRep_RunStatistics() {
}

void UBXEGameStateComponent::OnRep_RunState() {
}

void UBXEGameStateComponent::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const {
    Super::GetLifetimeReplicatedProps(OutLifetimeProps);
    
    DOREPLIFETIME(UBXEGameStateComponent, RunState);
    DOREPLIFETIME(UBXEGameStateComponent, RunStatistics);
}


