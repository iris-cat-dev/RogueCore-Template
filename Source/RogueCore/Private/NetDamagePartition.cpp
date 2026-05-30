#include "NetDamagePartition.h"

FNetDamagePartition::FNetDamagePartition() {
    this->DamageVector = EDamageVector::Ranged;
    this->Type = nullptr;
    this->Amount = 0.00f;
}

