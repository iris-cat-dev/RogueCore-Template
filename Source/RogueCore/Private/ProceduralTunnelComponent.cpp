#include "ProceduralTunnelComponent.h"

UProceduralTunnelComponent::UProceduralTunnelComponent(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->TunnelParameters = nullptr;
    this->MaxAngleFromLastPointToEntrance = 50.00f;
    this->CreateDirt = true;
    this->DoInvalidDirtQuery = true;
    this->DirtInfluencer = nullptr;
    this->DirtInfluencerRange = 100.00f;
    this->MaxDirtRangeToSurface = 300.00f;
}


