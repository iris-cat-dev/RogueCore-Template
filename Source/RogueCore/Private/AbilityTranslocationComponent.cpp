#include "AbilityTranslocationComponent.h"
#include "Net/UnrealNetwork.h"

UAbilityTranslocationComponent::UAbilityTranslocationComponent(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->EntityToSwap = nullptr;
    this->ConeWidth = 50.00f;
    this->ConeRange = 1000.00f;
}

void UAbilityTranslocationComponent::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const {
    Super::GetLifetimeReplicatedProps(OutLifetimeProps);
    
    DOREPLIFETIME(UAbilityTranslocationComponent, EntityToSwap);
}


