#include "AccessRequirementComponent.h"

UAccessRequirementComponent::UAccessRequirementComponent(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->AccessCondition = nullptr;
}

UAccessCondition* UAccessRequirementComponent::GetAccessCondition() const {
    return NULL;
}


