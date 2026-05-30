#include "GeneratorItemWithAmmo.h"
#include "CapacityHoldingItemAggregator.h"

AGeneratorItemWithAmmo::AGeneratorItemWithAmmo(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->HeldAmmoCapacity = CreateDefaultSubobject<UCapacityHoldingItemAggregator>(TEXT("HeldAmmoCapacity"));
    this->MaxAmmoCapacity = CreateDefaultSubobject<UCapacityHoldingItemAggregator>(TEXT("MaxAmmoCapacity"));
    this->SupplyStatusWeight = 1.00f;
}


