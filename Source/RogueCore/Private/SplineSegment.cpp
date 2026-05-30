#include "SplineSegment.h"

FSplineSegment::FSplineSegment() {
    this->StartLocation = FVector::ZeroVector;
    this->StartTangent = FVector::ZeroVector;
    this->EndLocation = FVector::ZeroVector;
    this->EndTangent = FVector::ZeroVector;
}

