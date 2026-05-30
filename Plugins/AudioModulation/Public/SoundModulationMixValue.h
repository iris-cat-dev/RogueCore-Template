#pragma once
#include "CoreMinimal.h"
#include "SoundModulationMixValue.generated.h"

USTRUCT(BlueprintType)
struct FSoundModulationMixValue {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float TargetValue;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float AttackTime;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float ReleaseTime;
    
    AUDIOMODULATION_API FSoundModulationMixValue();
};

