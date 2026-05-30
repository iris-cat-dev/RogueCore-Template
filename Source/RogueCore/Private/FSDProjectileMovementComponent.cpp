#include "FSDProjectileMovementComponent.h"

UFSDProjectileMovementComponent::UFSDProjectileMovementComponent(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->bShouldPenetrate = false;
    this->HomingToCenter = false;
    this->InvertIgnoreCollisionAgainst = false;
    this->AccelerationCurve = nullptr;
    this->AccelerationMultiplier = 1.00f;
    this->MaxPropulsionTime = 0.00f;
    this->GravityScale = 1.00f;
    this->bCancelPenetration = false;
}


