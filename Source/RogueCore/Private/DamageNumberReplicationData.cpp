#include "DamageNumberReplicationData.h"

FDamageNumberReplicationData::FDamageNumberReplicationData() {
    this->DamageType = nullptr;
    this->Causer = nullptr;
    this->Material = nullptr;
    this->Vector = EDamageVector::Ranged;
    this->CritLevel = 0;
    this->Location = FVector::ZeroVector;
}

