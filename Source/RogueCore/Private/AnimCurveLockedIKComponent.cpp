#include "AnimCurveLockedIKComponent.h"

UAnimCurveLockedIKComponent::UAnimCurveLockedIKComponent(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->Debug = false;
    this->OwnerMesh = nullptr;
}


