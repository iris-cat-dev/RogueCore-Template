#include "GDAudio.h"

FGDAudio::FGDAudio() {
    this->ReverbActor = nullptr;
    this->DynamicReverbClass = nullptr;
    this->SmallCaveRadius = 0.00f;
    this->MediumCaveRadius = 0.00f;
    this->LargeCaveRadius = 0.00f;
    this->FirstPersonPriority = 0.00f;
    this->ThirdPersonPriority = 0.00f;
    this->FirstPersonSingleFireSoundClass = nullptr;
    this->FirstPersonAutomaticFireSoundClass = nullptr;
    this->ThirdPersonSingleFireSoundClass = nullptr;
    this->ThirdPersonAutomaticFireSoundClass = nullptr;
    this->OmegaNoDuckingSoundClass = nullptr;
    this->FirstPersonHitscanAttenuationOverride = nullptr;
}

