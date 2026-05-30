#include "PloverAttachmentComponent.h"
#include "Net/UnrealNetwork.h"

UPloverAttachmentComponent::UPloverAttachmentComponent(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->AttachTarget = nullptr;
    this->AttachementSettings = nullptr;
    this->TargetAttachDistance = 0.00f;
    this->InterpSpeed = 10.00f;
}

void UPloverAttachmentComponent::OnRep_AttachTarget() {
}

bool UPloverAttachmentComponent::GetAttachLocation(AFSDPawn* Target) {
    return false;
}

bool UPloverAttachmentComponent::AttachToTarget(AFSDPawn* Target) {
    return false;
}

void UPloverAttachmentComponent::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const {
    Super::GetLifetimeReplicatedProps(OutLifetimeProps);
    
    DOREPLIFETIME(UPloverAttachmentComponent, AttachTarget);
}


