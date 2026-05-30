#include "IKEffectorData.h"

FIKEffectorData::FIKEffectorData() {
    this->Strength = 0.00f;
    this->Transform = FTransform::Identity;
    this->bone = FName();
}

