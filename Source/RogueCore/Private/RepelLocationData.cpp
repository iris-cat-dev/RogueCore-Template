#include "RepelLocationData.h"

FRepelLocationData::FRepelLocationData() {
    this->Radius = 0.00f;
    this->HalfHeight = 0.00f;
    this->MinStrength = 0.00f;
    this->MaxStrength = 0.00f;
    this->SourceLocation = FVector::ZeroVector;
    this->ExtraVelocity = FVector::ZeroVector;
}

