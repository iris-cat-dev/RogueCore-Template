#include "DrillOperationData.h"

FDrillOperationData::FDrillOperationData() {
    this->OperationNumber = 0;
    this->CarveNoise = 0.00f;
    this->HitPos = FVector::ZeroVector;
    this->Dir = FVector::ZeroVector;
    this->CarveSize = FVector::ZeroVector;
}

