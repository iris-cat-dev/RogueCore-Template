#include "BXEActorCloseLogicUnlock.h"

UBXEActorCloseLogicUnlock::UBXEActorCloseLogicUnlock(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->RequiredActorCount = 1;
    this->UpdateTime = 0.24f;
    this->CacheUpdateTime = 0.50f;
    this->ShouldDebugPrint = true;
}

bool UBXEActorCloseLogicUnlock::ShouldCountActor_Implementation(AActor* Actor) const {
    return false;
}



bool UBXEActorCloseLogicUnlock::IsAnyActorInRange() const {
    return false;
}

float UBXEActorCloseLogicUnlock::GetTotalModifierValueAdditive() const {
    return 0.0f;
}

TArray<AActor*> UBXEActorCloseLogicUnlock::GetRelevantActors_Implementation() const {
    return TArray<AActor*>();
}

int32 UBXEActorCloseLogicUnlock::GetNumActorsInRange() const {
    return 0;
}

float UBXEActorCloseLogicUnlock::GetMaxRadius_Implementation() const {
    return 0.0f;
}

float UBXEActorCloseLogicUnlock::GetClampedInRangeModifierValue() const {
    return 0.0f;
}

TArray<AActor*> UBXEActorCloseLogicUnlock::GetActorsInRange() const {
    return TArray<AActor*>();
}


