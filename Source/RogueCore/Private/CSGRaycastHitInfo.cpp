#include "CSGRaycastHitInfo.h"

FCSGRaycastHitInfo::FCSGRaycastHitInfo() {
    this->Material = 0;
    this->position = FVector::ZeroVector;
    this->Normal = FVector::ZeroVector;
}

