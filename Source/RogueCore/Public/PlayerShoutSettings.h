#pragma once
#include "CoreMinimal.h"
#include "PlayerShoutSettings.generated.h"

class USoundAttenuation;

USTRUCT(BlueprintType)
struct FPlayerShoutSettings {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    USoundAttenuation* DefaultAudioOnlyAttenuation;
    
    ROGUECORE_API FPlayerShoutSettings();
};

