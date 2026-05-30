#include "RandLinePoint.h"

FRandLinePoint::FRandLinePoint() {
    this->Location = FVector3f::ZeroVector;
    this->Range = FRandRange();
    this->NoiseRange = FRandRange();
    this->SkewFactor = FRandRange();
    this->FillAmount = FRandRange();
}

