#pragma once
#include "CoreMinimal.h"
#include "FSDVoiceDeviceHandle.generated.h"

USTRUCT(BlueprintType)
struct ROGUECOREONLINESERVICES_API FFSDVoiceDeviceHandle {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString DisplayName;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString ID;
    
public:
    FFSDVoiceDeviceHandle();
};

