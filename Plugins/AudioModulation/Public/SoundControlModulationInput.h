#pragma once
#include "CoreMinimal.h"
#include "SoundModulationTransform.h"
#include "SoundControlModulationInput.generated.h"

class USoundControlBus;

USTRUCT(BlueprintType)
struct FSoundControlModulationInput {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    uint8 bSampleAndHold: 1;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FSoundModulationTransform Transform;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    USoundControlBus* Bus;
    
    AUDIOMODULATION_API FSoundControlModulationInput();
};

