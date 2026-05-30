#include "MultiHitscanHit.h"

FMultiHitscanHit::FMultiHitscanHit() {
    this->TargetComponentIndex = 0;
    this->PhysicalMaterialIndex = 0;
    this->BoneIndex = 0;
    this->PlayImpactSound = false;
    this->SpawnDecal = false;
    this->CritRoll = 0.00f;
    this->HitLocation = FVector::ZeroVector;
    this->ImpactNormal = FVector::ZeroVector;
}

