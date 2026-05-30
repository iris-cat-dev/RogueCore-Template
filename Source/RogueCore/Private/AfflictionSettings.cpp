#include "AfflictionSettings.h"

UAfflictionSettings::UAfflictionSettings() {
    this->HeavyStaggerMinTime = 1.00f;
    this->MediumStaggerMinTime = 0.50f;
    this->HeavyStaggerAffliction = nullptr;
    this->MediumStaggerAffliction = nullptr;
    this->ShortStaggerAffliction = nullptr;
    this->BurningParticles.AddDefaulted(5);
    this->EletrocutedParticles.AddDefaulted(5);
    this->ExplodingParticles.AddDefaulted(5);
    this->ExplodingSounds.AddDefaulted(5);
}


