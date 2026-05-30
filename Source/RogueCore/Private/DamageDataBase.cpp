#include "DamageDataBase.h"

FDamageDataBase::FDamageDataBase() {
    this->PhysMaterial = nullptr;
    this->BoneIndex = 0;
    this->DamageImpulseOverride = nullptr;
    this->IsRadial = false;
    this->CritLevel = 0;
    this->Component = nullptr;
    this->HitLocation = FVector::ZeroVector;
}

