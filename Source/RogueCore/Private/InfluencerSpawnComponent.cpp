#include "InfluencerSpawnComponent.h"

UInfluencerSpawnComponent::UInfluencerSpawnComponent(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->Influencer = nullptr;
    this->Range = 0.00f;
}


