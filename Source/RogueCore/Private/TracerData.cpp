#include "TracerData.h"

FTracerData::FTracerData() {
    this->MainParticle = nullptr;
    this->TrailParticle = nullptr;
    this->Speed = 0.00f;
    this->WhizbySound = nullptr;
    this->WhizBySoundCooldown = 0.00f;
    this->Offset = 0.00f;
    this->MinDistance = 0.00f;
}

