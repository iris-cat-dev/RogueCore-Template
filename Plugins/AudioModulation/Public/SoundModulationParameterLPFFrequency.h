#pragma once
#include "CoreMinimal.h"
#include "SoundModulationParameterFilterFrequency.h"
#include "SoundModulationParameterLPFFrequency.generated.h"

UCLASS(Blueprintable, MinimalAPI)
class USoundModulationParameterLPFFrequency : public USoundModulationParameterFilterFrequency {
    GENERATED_BODY()
public:
    USoundModulationParameterLPFFrequency();

};

