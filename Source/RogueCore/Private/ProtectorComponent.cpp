#include "ProtectorComponent.h"
#include "Net/UnrealNetwork.h"

UProtectorComponent::UProtectorComponent(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->ActiveStatusEffect = nullptr;
    this->ChargesToAdd = 3;
    this->Active = false;
}

void UProtectorComponent::OnTempChargesChanged(int32 Amount) {
}

void UProtectorComponent::OnRep_Active() {
}

void UProtectorComponent::OnHealthChanged(float Health) {
}

void UProtectorComponent::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const {
    Super::GetLifetimeReplicatedProps(OutLifetimeProps);
    
    DOREPLIFETIME(UProtectorComponent, Active);
}


