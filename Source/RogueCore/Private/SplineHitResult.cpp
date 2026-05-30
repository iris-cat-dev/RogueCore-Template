#include "SplineHitResult.h"

FSplineHitResult::FSplineHitResult() {
    this->SplineDistance = 0.00f;
    this->HitResult = FHitResult();
    this->SplineTangent = FVector::ZeroVector;
}

