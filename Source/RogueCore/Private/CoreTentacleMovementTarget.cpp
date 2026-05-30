#include "CoreTentacleMovementTarget.h"

FCoreTentacleMovementTarget::FCoreTentacleMovementTarget() {
    this->MovementTimeInSeconds = 0.00f;
    this->SwayCooldownInSeconds = 0.00f;
    this->MoveTo = FVector::ZeroVector;
    this->LookAt = FVector::ZeroVector;
    this->MoveToActor = nullptr;
    this->LookAtActor = nullptr;
}

