#include "ProjectileImpact.h"

FProjectileImpact::FProjectileImpact() {
    this->BoneIndex = 0;
    this->bBlockingHit = false;
    this->Location = FVector::ZeroVector;
    this->Normal = FVector::ZeroVector;
    this->Component = nullptr;
    this->PhysMat = nullptr;
}

