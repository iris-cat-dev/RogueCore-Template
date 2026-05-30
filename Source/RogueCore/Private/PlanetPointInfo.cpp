#include "PlanetPointInfo.h"

FPlanetPointInfo::FPlanetPointInfo() {
    this->Point = nullptr;
    this->Visibility = EPointVisibility::Visible;
    this->ScreenLocation = FVector2D::ZeroVector;
}

