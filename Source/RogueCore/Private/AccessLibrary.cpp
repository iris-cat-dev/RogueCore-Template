#include "AccessLibrary.h"

UAccessLibrary::UAccessLibrary() {
}

void UAccessLibrary::RemoveTemporaryAccessConditionToActor(AActor* Actor, UAccessCondition* Condition) {
}

void UAccessLibrary::RemovePermanentAccessConditionFromLocalPlayer(UObject* WorldContext, UAccessCondition* Condition) {
}

UAccessCondition* UAccessLibrary::FindAccessConditionReward(const TArray<UReward*>& Rewards) {
    return NULL;
}

bool UAccessLibrary::DoesActorHaveAccessCondition(const AActor* Actor, const UAccessCondition* Condition) {
    return false;
}

void UAccessLibrary::AddTemporaryAccessConditionToActor(AActor* Actor, UAccessCondition* Condition) {
}

void UAccessLibrary::AddPermanentAccessConditionToLocalPlayer(UObject* WorldContext, UAccessCondition* Condition) {
}


