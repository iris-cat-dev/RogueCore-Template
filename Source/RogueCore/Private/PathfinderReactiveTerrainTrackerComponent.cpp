#include "PathfinderReactiveTerrainTrackerComponent.h"

UPathfinderReactiveTerrainTrackerComponent::UPathfinderReactiveTerrainTrackerComponent(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->CurrentPhysicalMaterial = nullptr;
    this->StatusEffectsComponent = nullptr;
}


