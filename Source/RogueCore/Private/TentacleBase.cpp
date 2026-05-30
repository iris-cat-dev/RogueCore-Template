#include "TentacleBase.h"

ATentacleBase::ATentacleBase(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->SplineComponent = nullptr;
    this->HeadMovementDuration = 0.00f;
    this->CanSwayCooldown = 0.00f;
    this->NeckBaseTangentLength = 0.00f;
    this->NeckTopTangentLength = 0.00f;
    this->DurationTentacleRetract = 1.00f;
    this->DurationTentacleFoldout = 1.00f;
    this->HeadRoot = nullptr;
    this->HeadRotator = nullptr;
}

void ATentacleBase::SetRestingTransform(const FTransform& restingTransform, bool startAtRest) {
}


void ATentacleBase::MoveHydraHead(FTransform newDesiredTransform, float newCanSwayCooldown, float newHeadMovementDuration, bool UseSpring) {
}

AStabberVineRoot* ATentacleBase::GetStabberVineRoot() const {
    return NULL;
}




