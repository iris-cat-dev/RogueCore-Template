#include "ElementType.h"

UElementType::UElementType() {
    this->TransferElement = nullptr;
    this->StackLimit = 1;
    this->StackResistanceMultiplier = 0.60f;
    this->HasReturnToNeutralIntensity = false;
    this->ReturnToNeutralIntensity = EElementSourceIntensity::Intensity2;
    this->ValueChangePerDamagePoint = 0.00f;
    this->OverchargeBuffer = 50.00f;
    this->PawnStatResistance = nullptr;
    this->ElementEffects = nullptr;
    this->Intensities[0] = 2.00f;
    this->Intensities[1] = 2.00f;
    this->Intensities[2] = 2.00f;
    this->IntensityStartDelay = 0.30f;
    this->ElementSettings = nullptr;
}

UElementTypeSettings* UElementType::GetElementSettings() const {
    return NULL;
}


