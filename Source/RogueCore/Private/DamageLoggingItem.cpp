#include "DamageLoggingItem.h"

FDamageLoggingItem::FDamageLoggingItem() {
    this->TotalDamage = 0.00f;
    this->Damage = 0.00f;
    this->Timestamp = 0.00f;
    this->CritLevel = 0;
    this->WeakpointHit = false;
    this->Instigator = FString();
    this->Causer = FString();
    this->CauserOwner = FString();
    this->Target = FString();
}

