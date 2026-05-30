#pragma once
#include "CoreMinimal.h"
#include "FSDVoiceDeviceHandle.h"
#include "FSDVoiceChatSettings.generated.h"

class USoundClass;

USTRUCT(BlueprintType)
struct ROGUECOREONLINESERVICES_API FFSDVoiceChatSettings {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    FFSDVoiceDeviceHandle OutputVoiceDevice;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    FFSDVoiceDeviceHandle InputVoiceDevice;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    float volumeVoiceChatOutput;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    float volumeVoiceChatInput;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool UseDefaultAudioOutputDevice;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool UseDefaultAudioInputDevice;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bUsePushToTalk;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bUseVoiceChat;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    USoundClass* soundClassVoice;
    
    FFSDVoiceChatSettings();
};

