#include "DebrisItemComponent.h"

UDebrisItemComponent::UDebrisItemComponent(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->Debris = nullptr;
    this->ItemPass = EDebrisItemPass::Main;
    this->InfluenceRange = 0.00f;
    this->DebugDrawInfluencerInEditor = false;
    this->MinDistanceToImportantLocations = -1.00f;
    this->UseAmount = false;
    this->AmountSearchMultiplier = 25;
    this->ObjectiveAmountSearchMultiplier = 100;
}


