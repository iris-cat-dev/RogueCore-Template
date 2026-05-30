#include "GrabberComponent.h"
#include "Net/UnrealNetwork.h"

UGrabberComponent::UGrabberComponent(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->GrabLoopSoundInstance = nullptr;
    this->BeginGrabedSound = nullptr;
    this->GrabedLoopSound = nullptr;
    this->EndGrabedSound = nullptr;
    this->BeginGrabbedShout = nullptr;
    this->EndGrabbedShout = nullptr;
    this->AttentionGrabbedShout = nullptr;
    this->CurrentlyGrabbed = nullptr;
    this->GrabFollowInterpolationSpeed = 12.50f;
    this->GrabTime = 0.00f;
    this->CarryCooldown = 12.00f;
    this->RevivedGravePeriod = 5.00f;
    this->PlayerOutlineOnGrab = EOutline::OL_NONE;
    this->CameraMode = EGrabbedStateCameraMode::FirstPerson;
    this->TrackPlayerCollision = false;
    this->ManualGrabTime = false;
    this->CanPlayerShoot = false;
    this->HeightenSensesImmune = false;
    this->CanGrabbedTargetDieWhileGrabbed = true;
    this->NeedsPathToTarget = true;
}

void UGrabberComponent::Timer_ReleaseTarget() {
}

void UGrabberComponent::ReleaseTarget() {
}

void UGrabberComponent::OnRep_CurrentlyGrabbed(AActor* oldCurrentlyGrabbed) {
}

void UGrabberComponent::OnPrimWake(UPrimitiveComponent* WakingComponent, FName BoneName) {
}

bool UGrabberComponent::IsGrabbedTargetValid() const {
    return false;
}

bool UGrabberComponent::HasGrabbed() const {
    return false;
}

bool UGrabberComponent::GrabTarget(AActor* aGrabTarget) {
    return false;
}

AActor* UGrabberComponent::GetGrabbedActor() {
    return NULL;
}

bool UGrabberComponent::CanGrabTarget(AActor* aTarget, const bool AllowDowned) const {
    return false;
}

void UGrabberComponent::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const {
    Super::GetLifetimeReplicatedProps(OutLifetimeProps);
    
    DOREPLIFETIME(UGrabberComponent, CurrentlyGrabbed);
}


