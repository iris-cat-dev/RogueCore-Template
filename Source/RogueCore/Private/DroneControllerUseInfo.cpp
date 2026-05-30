#include "DroneControllerUseInfo.h"

FDroneControllerUseInfo::FDroneControllerUseInfo() {
    this->CameraLocation = FVector::ZeroVector;
    this->ViewAngle = FRotator::ZeroRotator;
    this->Target = nullptr;
    this->HitLocation = FVector::ZeroVector;
}

