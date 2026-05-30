#include "ShallowPathfinderMovement.h"

UShallowPathfinderMovement::UShallowPathfinderMovement(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->MovementSpeed = 100.00f;
    this->AvoidanceRadius = 100.00f;
    this->CoherenceRadius = 1000.00f;
    this->CrowdManager = nullptr;
}


