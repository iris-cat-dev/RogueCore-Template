#include "SubHealthDamageTracker.h"

USubHealthDamageTracker::USubHealthDamageTracker(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->TiggerOnPercentage = 0.33f;
    this->Health = nullptr;
}

void USubHealthDamageTracker::ResetTrackedDamage() {
}

void USubHealthDamageTracker::OnDamageTaken(float Amount) {
}


