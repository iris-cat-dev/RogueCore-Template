#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Rotator -FallbackName=Rotator
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Vector -FallbackName=Vector
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=BlueprintFunctionLibrary -FallbackName=BlueprintFunctionLibrary
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=EAttachLocation -FallbackName=EAttachLocation
#include "EAudioCharacterOverrideType.h"
#include "AudioFunctionLibrary.generated.h"

class APlayerCharacter;
class UAudioComponent;
class UObject;
class USceneComponent;
class USoundAttenuation;
class USoundBase;
class USoundClass;
class USoundConcurrency;
class USoundControlBusMix;
class USoundMix;

UCLASS(Blueprintable)
class UAudioFunctionLibrary : public UBlueprintFunctionLibrary {
    GENERATED_BODY()
public:
    UAudioFunctionLibrary();

    UFUNCTION(BlueprintCallable)
    static UAudioComponent* SpawnSoundAttachedWithConditionalOverride(USoundBase* Sound, USceneComponent* AttachToComponent, const EAudioCharacterOverrideType OverrideType, APlayerCharacter* OverrideCharacter, USoundAttenuation* OverrideAttenuation, USoundClass* OverrideSoundClass, USoundMix* OverrideSoundClassMix, USoundControlBusMix* OverrideControlBusMix, const FName AttachPointName, const FVector Location, const FRotator Rotation, const TEnumAsByte<EAttachLocation::Type> LocationType, const bool StopWhenAttachedToDestroyed, const float VolumeMultiplier, const float PitchMultiplier, const float StartTime, USoundConcurrency* ConcurrencySettings, const bool AutoDestroy);
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContext"))
    static UAudioComponent* SpawnSoundAtLocationWithConditionalOverride(UObject* WorldContext, USoundBase* Sound, const FVector Location, const EAudioCharacterOverrideType OverrideType, APlayerCharacter* OverrideCharacter, USoundAttenuation* OverrideAttenuation, USoundClass* OverrideSoundClass, USoundMix* OverrideSoundClassMix, USoundControlBusMix* OverrideControlBusMix, const float VolumeMultiplier, const float PitchMultiplier, const float StartTime, USoundConcurrency* ConcurrencySettings, bool AutoDestroy);
    
    UFUNCTION(BlueprintCallable)
    static float SetSoundClassVolume(USoundClass* SoundClass, float Volume);
    
    UFUNCTION(BlueprintCallable)
    static void PushTimedSoundMix(UObject* ContextObject, USoundMix* mix, float duration);
    
    UFUNCTION(BlueprintCallable)
    static void PushSoundMixWithConditionalOverride(USoundMix* SoundClassMix, USoundControlBusMix* ControlBusMix, const EAudioCharacterOverrideType OverrideType, APlayerCharacter* OverrideCharacter, USoundMix* OverrideSoundClassMix, USoundControlBusMix* OverrideControlBusMix);
    
    UFUNCTION(BlueprintCallable)
    static void OverrideSoundSettings(UAudioComponent* AudioComponent, const EAudioCharacterOverrideType OverrideType, APlayerCharacter* OverrideCharacter, USoundAttenuation* OverrideAttenuation, USoundClass* OverrideSoundClass);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static bool IsAudioOverrideActive(const EAudioCharacterOverrideType OverrideType, const APlayerCharacter* OverrideCharacter);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static float GetSoundClassVolume(USoundClass* SoundClass);
    
    UFUNCTION(BlueprintCallable)
    static bool BranchAudioOverrideActive(const EAudioCharacterOverrideType OverrideType, const APlayerCharacter* OverrideCharacter);
    
};

