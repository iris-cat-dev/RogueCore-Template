#include "SoundAfflictionEffect.h"

USoundAfflictionEffect::USoundAfflictionEffect() {
    this->BeginSound = nullptr;
    this->EndSound = nullptr;
    this->Attach = false;
    this->FadeOnLoopEndDuration = 0.25f;
}


