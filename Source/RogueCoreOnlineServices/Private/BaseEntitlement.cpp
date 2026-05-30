#include "BaseEntitlement.h"

UBaseEntitlement::UBaseEntitlement() {
    this->IsOneTimeUse = false;
    this->bFakeUnlockedStateInEditor = false;
    this->bEditorUnlockedState = true;
    this->RestrictedToPlatform = nullptr;
}

bool UBaseEntitlement::IsUnLocked() const {
    return false;
}

void UBaseEntitlement::CheckIfUnlockConditionIsMet(UEntitlementSubsystem* EntitlementSubsystem) {
}


