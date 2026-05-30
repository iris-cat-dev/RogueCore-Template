#include "CapacityHoldingItemAggregator.h"
#include "Net/UnrealNetwork.h"

UCapacityHoldingItemAggregator::UCapacityHoldingItemAggregator(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->MaxAmmo = 10;
    this->AmmoCount = 0;
    this->UseRejoin = true;
    this->IsAmmoReserve = false;
    this->Upgradable = false;
}

void UCapacityHoldingItemAggregator::UseAmmo(int32 count) {
}

void UCapacityHoldingItemAggregator::SetMaxAmmo(int32 InMaxAmmo, bool InChangeCurrentAmount) {
}

void UCapacityHoldingItemAggregator::SetAmmo(int32 Amount) {
}

void UCapacityHoldingItemAggregator::Resupply(float percentage) {
}

void UCapacityHoldingItemAggregator::OnRep_MaxAmmo() {
}

void UCapacityHoldingItemAggregator::OnRep_AmmoCount() {
}

void UCapacityHoldingItemAggregator::AddAmmo(int32 Amount) {
}

void UCapacityHoldingItemAggregator::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const {
    Super::GetLifetimeReplicatedProps(OutLifetimeProps);
    
    DOREPLIFETIME(UCapacityHoldingItemAggregator, MaxAmmo);
    DOREPLIFETIME(UCapacityHoldingItemAggregator, AmmoCount);
}


