#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=BlueprintFunctionLibrary -FallbackName=BlueprintFunctionLibrary
#include "FSDVoiceDeviceHandle.h"
#include "FSDVoiceChatSettingsHelpers.generated.h"

UCLASS(Blueprintable)
class ROGUECOREONLINESERVICES_API UFSDVoiceChatSettingsHelpers : public UBlueprintFunctionLibrary {
    GENERATED_BODY()
public:
    UFSDVoiceChatSettingsHelpers();

    UFUNCTION(BlueprintCallable, BlueprintPure)
    static bool SetVoiceChatInputMuted(bool bIsMuted);
    
    UFUNCTION(BlueprintCallable)
    static void SetUseDefaultAudioOutputDevice();
    
    UFUNCTION(BlueprintCallable)
    static void SetUseDefaultAudioInputDevice();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static bool HasAudioOutputDeviceChanged(const FFSDVoiceDeviceHandle& newAudioDevice);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static bool HasAudioInputDeviceChanged(const FFSDVoiceDeviceHandle& newAudioDevice);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static bool GetCurrentAudioOutputDevice(FFSDVoiceDeviceHandle& AudioDevice);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static float GetCurrentAudioInputDeviceAmplitude(int32 localUserId);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static bool GetCurrentAudioInputDevice(FFSDVoiceDeviceHandle& AudioDevice);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static bool GetAvailableAudioOutputDevices(TArray<FFSDVoiceDeviceHandle>& AudioDevices);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static bool GetAvailableAudioInputDevices(TArray<FFSDVoiceDeviceHandle>& AudioDevices);
    
};

