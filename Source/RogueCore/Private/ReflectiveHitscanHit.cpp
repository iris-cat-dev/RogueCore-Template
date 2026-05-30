#include "ReflectiveHitscanHit.h"

FReflectiveHitscanHit::FReflectiveHitscanHit() {
    this->Component = nullptr;
    this->BoneIndex = 0;
    this->PhysMat = nullptr;
    this->BoneName = FName();
    this->HitLocation = FVector::ZeroVector;
    this->ImpactNormal = FVector::ZeroVector;
}

