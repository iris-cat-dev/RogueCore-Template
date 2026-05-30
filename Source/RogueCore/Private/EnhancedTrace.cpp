#include "EnhancedTrace.h"

FEnhancedTrace::FEnhancedTrace() {
    this->Component = nullptr;
    this->Instigator = nullptr;
    this->Origin = FVector::ZeroVector;
    this->Direction = FVector::ZeroVector;
    this->HitPoint = FVector::ZeroVector;
}

