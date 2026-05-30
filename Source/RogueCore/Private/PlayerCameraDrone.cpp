#include "PlayerCameraDrone.h"

#include "GameFramework/FloatingPawnMovement.h"

APlayerCameraDrone::APlayerCameraDrone(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->Movement = CreateDefaultSubobject<UFloatingPawnMovement>(TEXT("Movement"));
    this->MenuTab = 0;
    this->SplineMeshIsVisible = true;
    this->SplineSpeed = 1000.00f;
    this->CameraRoll = 0.00f;
    this->CameraDoesShake = false;
    this->IsFollowingPlayerRotation = false;
    this->UseFreeRotation = false;
    this->UseDOF = false;
    this->VanitySpawnable = nullptr;
    this->VanityWeaponSpawnable = nullptr;
    this->SelectedVanityClassIndex = 0;
    this->SelectedVanityAnimation = -1;
    this->DroneMarker = nullptr;
    this->Flare = nullptr;
    this->BounceFlare = nullptr;
    this->SplineInstance = nullptr;
    this->Spline = nullptr;
    this->SplineMesh = nullptr;
    this->PlayerFollowed = nullptr;
    this->WeaponTrackActor = nullptr;
}

bool APlayerCameraDrone::ToggleSplineMeshVisibility() {
    return false;
}

void APlayerCameraDrone::SetRotationalPivotToPlayer() {
}

void APlayerCameraDrone::SetFlareLightSettings(float Intensity, float Range, float Color) {
}

bool APlayerCameraDrone::SetCameraShakeAmount(float Value) {
    return false;
}

void APlayerCameraDrone::SetBounceFlareLightSettings(float Intensity, float Range, float Color) {
}

void APlayerCameraDrone::SaveLightConfig() {
}

void APlayerCameraDrone::ResetFollowVariables() {
}

void APlayerCameraDrone::ResetAllLights() {
}

void APlayerCameraDrone::RebindPlayerInputComponent() {
}

void APlayerCameraDrone::OnFlareHit(UPrimitiveComponent* HitComponent, AActor* OtherActor, UPrimitiveComponent* OtherComponent, FVector NormalImpulse, const FHitResult& Hit) {
}

void APlayerCameraDrone::LoadLightConfig() {
}

FVector APlayerCameraDrone::GetFlareLightSettings() {
    return FVector{};
}

FVector APlayerCameraDrone::GetBounceFlareLightSettings() {
    return FVector{};
}


void APlayerCameraDrone::ClearFocusPoint() {
}

void APlayerCameraDrone::All_BeginCountdown_Implementation() {
}


