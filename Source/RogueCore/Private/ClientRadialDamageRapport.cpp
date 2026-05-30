#include "ClientRadialDamageRapport.h"

FClientRadialDamageRapport::FClientRadialDamageRapport() {
    this->DamageCauser = nullptr;
    this->Instigator = nullptr;
    this->BaseDamage = 0.00f;
    this->RadialRadius = 0.00f;
    this->CritLevel = 0;
    this->Notify = false;
    this->Location = FVector::ZeroVector;
}

