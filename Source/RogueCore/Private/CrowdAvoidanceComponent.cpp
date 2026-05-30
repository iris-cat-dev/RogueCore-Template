#include "CrowdAvoidanceComponent.h"

UCrowdAvoidanceComponent::UCrowdAvoidanceComponent(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->AvoidanceRadius = 100.00f;
    this->AvoidanceCount = 0;
    this->CrowdAvoidanceManager = nullptr;
}


