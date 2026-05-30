#include "ThrowParameters.h"

FThrowParameters::FThrowParameters() {
    this->ThrownActorClass = nullptr;
    this->ThrownActorOwner = nullptr;
    this->ThrowingCharacter = nullptr;
    this->ThrowAngle = 0.00f;
    this->ThrowerVelocityMultiplier = 0.00f;
    this->ThrowOrigin = FVector::ZeroVector;
}

