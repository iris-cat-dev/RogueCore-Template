#include "ElementEventType.h"

UElementEventType::UElementEventType() {
    this->OnActivateSoundCue = nullptr;
    this->OnDeactivateSoundCue = nullptr;
    this->OnActivateParticleSystem = nullptr;
    this->OnDeactivateParticleSystem = nullptr;
    this->DamageBonus = 0.00f;
    this->PlayerOverrideSetup = false;
}


