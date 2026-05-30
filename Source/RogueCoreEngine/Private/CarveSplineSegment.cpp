#include "CarveSplineSegment.h"

FCarveSplineSegment::FCarveSplineSegment() {
    this->Radius = 0.00f;
    this->SplineStart = FVector3f::ZeroVector;
    this->SplineStartTangent = FVector3f::ZeroVector;
    this->SplineEnd = FVector3f::ZeroVector;
    this->SplineEndTangent = FVector3f::ZeroVector;
}

