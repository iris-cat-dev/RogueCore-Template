#include "ItemLogicUnlockComponent.h"
#include "Net/UnrealNetwork.h"

UItemLogicUnlockComponent::UItemLogicUnlockComponent(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->Item = nullptr;
}


void UItemLogicUnlockComponent::OnRep_Stacks() {
}

float UItemLogicUnlockComponent::GetTotalUpgradeValueMultiplied() const {
    return 0.0f;
}

float UItemLogicUnlockComponent::GetTotalUpgradeValue() const {
    return 0.0f;
}

int32 UItemLogicUnlockComponent::GetModifierValue_Implementation(float InAmount) const {
    return 0;
}

void UItemLogicUnlockComponent::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const {
    Super::GetLifetimeReplicatedProps(OutLifetimeProps);
    
    DOREPLIFETIME(UItemLogicUnlockComponent, Stacks);
}


