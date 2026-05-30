#include "CSGOption.h"

FCSGOption::FCSGOption() {
    this->IntValue = 0;
    this->FloatValue = 0.00f;
    this->Key = FName();
    this->VectorValue = FVector::ZeroVector;
}

