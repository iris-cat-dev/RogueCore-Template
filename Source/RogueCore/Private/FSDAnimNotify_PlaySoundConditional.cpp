#include "FSDAnimNotify_PlaySoundConditional.h"

UFSDAnimNotify_PlaySoundConditional::UFSDAnimNotify_PlaySoundConditional() {
    this->OverrideType = EAudioCharacterOverrideType::IsNotLocalPlayer;
    this->OverrideAttenuation = nullptr;
    this->OverrideSoundClass = nullptr;
}


