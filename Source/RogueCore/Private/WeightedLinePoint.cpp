#include "WeightedLinePoint.h"

FWeightedLinePoint::FWeightedLinePoint() {
    this->Range = 0.00f;
    this->NoiseRange = 0.00f;
    this->SkewFactor = 0.00f;
    this->FillAmount = 0.00f;
    this->Location = FVector3f::ZeroVector;
}

