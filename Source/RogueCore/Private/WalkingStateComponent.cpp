#include "WalkingStateComponent.h"

UWalkingStateComponent::UWalkingStateComponent(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->SlidingEnabled = true;
    this->ShowDebug = false;
    this->SlideAngle = 70.00f;
    this->SlideAcceleration = 4.00f;
    this->MaxSlideSpeed = 750.00f;
    this->MaxClimbDistance = 50.00f;
    this->AudioSliding = nullptr;
    this->IceSliding = nullptr;
    this->AudioComponentSliding = nullptr;
    this->AudioComponentIceSliding = nullptr;
}

void UWalkingStateComponent::TrackGrindCallback(APlayerCharacter* User, EInputKeys Key) {
}

void UWalkingStateComponent::Server_StartTrackMovement_Implementation(UTrackBuilderMovement* InMovement) {
}

void UWalkingStateComponent::Server_SetIsSliding_Implementation(bool isSliding) {
}

void UWalkingStateComponent::JumpPress(APlayerCharacter* InPlayer) {
}


