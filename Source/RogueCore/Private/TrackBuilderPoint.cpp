#include "TrackBuilderPoint.h"

FTrackBuilderPoint::FTrackBuilderPoint() {
    this->IsInitialized = false;
    this->PlacementState = ETrackBuildPlacementState::NotBeingPlaced;
    this->bPointValid = false;
    this->Location = FVector::ZeroVector;
    this->EulerRotation = FVector::ZeroVector;
    this->ConnectPoint = nullptr;
}

