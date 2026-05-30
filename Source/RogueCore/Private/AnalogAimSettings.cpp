#include "AnalogAimSettings.h"

FAnalogAimSettings::FAnalogAimSettings() {
    this->SensitivityCurve = nullptr;
    this->LookAtStickyness = 0.00f;
    this->StickynessRecoverySpeed = 0.00f;
    this->StickynessMaxSensitivity = 0.00f;
    this->AimRate = FVector2D::ZeroVector;
    this->ThirdPersonLookRate = FVector2D::ZeroVector;
}

