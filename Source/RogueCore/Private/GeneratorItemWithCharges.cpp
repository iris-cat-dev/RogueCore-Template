#include "GeneratorItemWithCharges.h"
#include "CapacityHoldingItemAggregator.h"
#include "Net/UnrealNetwork.h"

AGeneratorItemWithCharges::AGeneratorItemWithCharges(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->ChargeCapacity = CreateDefaultSubobject<UCapacityHoldingItemAggregator>(TEXT("ChargeCapacity"));
    this->CarryCapacity = CreateDefaultSubobject<UCapacityHoldingItemAggregator>(TEXT("Capacity"));
    this->RechargeDuration = 2.00f;
    this->UnchargedCount = 0;
    this->RechargeProgress = 0.00f;
    this->SupplyStatusWeight = 1.00f;
    this->ShoutRecarged = nullptr;
}




void AGeneratorItemWithCharges::OnRep_UnchargedCount(int32 OldCount) {
}

bool AGeneratorItemWithCharges::GetIsRecharging() const {
    return false;
}

void AGeneratorItemWithCharges::GeneratorReturned() {
}

void AGeneratorItemWithCharges::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const {
    Super::GetLifetimeReplicatedProps(OutLifetimeProps);
    
    DOREPLIFETIME(AGeneratorItemWithCharges, UnchargedCount);
}


