#include "PricingTierEntry.h"

FPricingTierEntry::FPricingTierEntry() {
    this->CreditCost = FIRandRange();
    this->Material1 = FIRandRange();
    this->Material2 = FIRandRange();
    this->Material3 = FIRandRange();
}

