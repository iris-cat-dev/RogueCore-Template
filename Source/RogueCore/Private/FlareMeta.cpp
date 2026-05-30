#include "FlareMeta.h"

FFlareMeta::FFlareMeta() {
    this->Inhibit = 0.00f;
    this->Radius = 0.00f;
    this->InvRadius = 0.00f;
    this->Moving = false;
    this->Actor = nullptr;
    this->Pos = FVector::ZeroVector;
}

