#pragma once
#include "CoreMinimal.h"
#include "SoundModulationParameterSettings.generated.h"

USTRUCT(BlueprintType)
struct FSoundModulationParameterSettings {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float ValueNormalized;
    
    AUDIOMODULATION_API FSoundModulationParameterSettings();
};

