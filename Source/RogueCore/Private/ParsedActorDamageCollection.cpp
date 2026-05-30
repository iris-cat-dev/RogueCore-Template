#include "ParsedActorDamageCollection.h"

FParsedActorDamageCollection::FParsedActorDamageCollection() {
    this->Icon = nullptr;
    this->WeakPointHitsDealt = 0;
    this->CriticalHitsDealt = 0;
    this->Name = FString();
    this->TotalDamageDealt = FDamageValues();
    this->TotalDamageTaken = FDamageValues();
}

