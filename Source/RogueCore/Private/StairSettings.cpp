#include "StairSettings.h"

UStairSettings::UStairSettings() {
    this->TopStairMesh = nullptr;
    this->StairBody = nullptr;
    this->BottomStairMesh = nullptr;
    this->SegmentLenght = 1.00f;
    this->Inclination = 45.00f;
    this->MaxLength = -1.00f;
    this->PreferredLenght = 0.00f;
    this->StairWidth = 0.00f;
}


