#include "PillarGenerationComponent.h"

UPillarGenerationComponent::UPillarGenerationComponent(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->Points.AddDefaulted(2);
    this->visible = true;
    this->PillarSettings = nullptr;
}


