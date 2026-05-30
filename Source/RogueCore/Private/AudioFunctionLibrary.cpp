#include "AudioFunctionLibrary.h"

UAudioFunctionLibrary::UAudioFunctionLibrary() {
}

UAudioComponent* UAudioFunctionLibrary::SpawnSoundAttachedWithConditionalOverride(USoundBase* Sound, USceneComponent* AttachToComponent, const EAudioCharacterOverrideType OverrideType, APlayerCharacter* OverrideCharacter, USoundAttenuation* OverrideAttenuation, USoundClass* OverrideSoundClass, USoundMix* OverrideSoundClassMix, USoundControlBusMix* OverrideControlBusMix, const FName AttachPointName, const FVector Location, const FRotator Rotation, const TEnumAsByte<EAttachLocation::Type> LocationType, const bool StopWhenAttachedToDestroyed, const float VolumeMultiplier, const float PitchMultiplier, const float StartTime, USoundConcurrency* ConcurrencySettings, const bool AutoDestroy) {
    return NULL;
}

UAudioComponent* UAudioFunctionLibrary::SpawnSoundAtLocationWithConditionalOverride(UObject* WorldContext, USoundBase* Sound, const FVector Location, const EAudioCharacterOverrideType OverrideType, APlayerCharacter* OverrideCharacter, USoundAttenuation* OverrideAttenuation, USoundClass* OverrideSoundClass, USoundMix* OverrideSoundClassMix, USoundControlBusMix* OverrideControlBusMix, const float VolumeMultiplier, const float PitchMultiplier, const float StartTime, USoundConcurrency* ConcurrencySettings, bool AutoDestroy) {
    return NULL;
}

float UAudioFunctionLibrary::SetSoundClassVolume(USoundClass* SoundClass, float Volume) {
    return 0.0f;
}

void UAudioFunctionLibrary::PushTimedSoundMix(UObject* ContextObject, USoundMix* mix, float duration) {
}

void UAudioFunctionLibrary::PushSoundMixWithConditionalOverride(USoundMix* SoundClassMix, USoundControlBusMix* ControlBusMix, const EAudioCharacterOverrideType OverrideType, APlayerCharacter* OverrideCharacter, USoundMix* OverrideSoundClassMix, USoundControlBusMix* OverrideControlBusMix) {
}

void UAudioFunctionLibrary::OverrideSoundSettings(UAudioComponent* AudioComponent, const EAudioCharacterOverrideType OverrideType, APlayerCharacter* OverrideCharacter, USoundAttenuation* OverrideAttenuation, USoundClass* OverrideSoundClass) {
}

bool UAudioFunctionLibrary::IsAudioOverrideActive(const EAudioCharacterOverrideType OverrideType, const APlayerCharacter* OverrideCharacter) {
    return false;
}

float UAudioFunctionLibrary::GetSoundClassVolume(USoundClass* SoundClass) {
    return 0.0f;
}

bool UAudioFunctionLibrary::BranchAudioOverrideActive(const EAudioCharacterOverrideType OverrideType, const APlayerCharacter* OverrideCharacter) {
    return false;
}


