#include "BXELogicUnlockComponent.h"
#include "Net/UnrealNetwork.h"

UBXELogicUnlockComponent::UBXELogicUnlockComponent(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->Character = nullptr;
    this->DamageListenerProfile = 0;
    this->TriggerBlueprintEvents = true;
}




void UBXELogicUnlockComponent::OnRep_Stacks() {
}

float UBXELogicUnlockComponent::GetTotalUpgradeValueMultiplied() const {
    return 0.0f;
}

float UBXELogicUnlockComponent::GetTotalUpgradeValue() const {
    return 0.0f;
}

float UBXELogicUnlockComponent::GetClampedUpgradeValue(float Previous) const {
    return 0.0f;
}

void UBXELogicUnlockComponent::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const {
    Super::GetLifetimeReplicatedProps(OutLifetimeProps);
    
    DOREPLIFETIME(UBXELogicUnlockComponent, Stacks);
}


