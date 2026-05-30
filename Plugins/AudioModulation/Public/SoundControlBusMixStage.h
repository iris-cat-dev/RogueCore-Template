#pragma once
#include "CoreMinimal.h"
#include "SoundModulationMixValue.h"
#include "SoundControlBusMixStage.generated.h"

class USoundControlBus;

USTRUCT(BlueprintType)
struct FSoundControlBusMixStage {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    USoundControlBus* Bus;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FSoundModulationMixValue Value;
    
    AUDIOMODULATION_API FSoundControlBusMixStage();
};

