#include "TimedActorListComponent.h"

UTimedActorListComponent::UTimedActorListComponent(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->DefaultTimeLeft = 1.00f;
}

bool UTimedActorListComponent::ContainsActor(const AActor* InActor) const {
    return false;
}

void UTimedActorListComponent::AddTimedActor(AActor* InActor, float InTimeLeftOverride) {
}


