#pragma once
#include "CoreMinimal.h"
#include "SoundControlModulationInput.h"
#include "SoundControlModulationPatch.generated.h"

class USoundModulationParameter;

USTRUCT(BlueprintType)
struct FSoundControlModulationPatch {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bBypass;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    USoundModulationParameter* OutputParameter;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FSoundControlModulationInput> Inputs;
    
    AUDIOMODULATION_API FSoundControlModulationPatch();
};

