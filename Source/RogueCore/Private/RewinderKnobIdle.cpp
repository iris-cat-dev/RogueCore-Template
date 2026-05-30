#include "RewinderKnobIdle.h"

FRewinderKnobIdle::FRewinderKnobIdle() {
    this->Animation = nullptr;
    this->Enabled = false;
    this->SpinDegrees = FRuntimeFloatCurve();
}

