#include "ShowroomController.h"

UShowroomController::UShowroomController(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->Stage = nullptr;
    this->IsZoomedIn = false;
    this->ZoomInProgress = false;
    this->ShowroomItemInstance = nullptr;
    this->RotationDividerInDegrees = 10.00f;
    this->RotationAveragingWindowInSeconds = 0.20f;
    this->SpeedNotifierAudioComponent = nullptr;
    this->SmoothedRotationSpeed = 0.00f;
}

void UShowroomController::ZoomShowroom(float Distance, bool instantZoom) {
}

void UShowroomController::ToggleZoom() {
}

void UShowroomController::SetSpeedAudioNotifier(UAudioComponent* AudioComponent, const FName AudioParameterName) {
}

void UShowroomController::SetShowroomRotation(const FRotator NewRotation) {
}

void UShowroomController::SetLightChannels(AActor* Actor) {
}

void UShowroomController::RotateShowroom(float pitch, float Yaw) {
}

void UShowroomController::ResetShowroomRotation() {
}

FRotator UShowroomController::GetShowroomRotation() {
    return FRotator{};
}

UShowroomController* UShowroomController::DisplayShowroomItem(UObject* WorldContextObject, TSoftClassPtr<AShowroomItem> showroomItemActor) {
    return NULL;
}


