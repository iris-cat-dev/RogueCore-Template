#include "FirstPersonStaticMeshComponent.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=EFirstPersonPrimitiveType -FallbackName=EFirstPersonPrimitiveType

UFirstPersonStaticMeshComponent::UFirstPersonStaticMeshComponent(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->DepthPriorityGroup = SDPG_Foreground;
    this->CastShadow = false;
    this->FirstPersonPrimitiveType = EFirstPersonPrimitiveType::FirstPerson;
    this->EnabledFPFOV = true;
}

void UFirstPersonStaticMeshComponent::SetEnabledFPFOV(bool FOV) {
}

bool UFirstPersonStaticMeshComponent::GeEnabledFPFOV() const {
    return false;
}


