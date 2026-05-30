#include "ClientDamageRapport.h"

FClientDamageRapport::FClientDamageRapport() {
    this->HitComponent = nullptr;
    this->PhysMat = nullptr;
    this->DamageCauser = nullptr;
    this->Instigator = nullptr;
    this->Target = nullptr;
    this->BoneIndex = 0;
    this->BaseDamage = 0.00f;
    this->CritLevel = 0;
    this->Location = FVector::ZeroVector;
}

