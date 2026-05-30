#pragma once
#include "CoreMinimal.h"
#include "SoundModulationParameterFilterFrequency.h"
#include "SoundModulationParameterHPFFrequency.generated.h"

UCLASS(Blueprintable, MinimalAPI)
class USoundModulationParameterHPFFrequency : public USoundModulationParameterFilterFrequency {
    GENERATED_BODY()
public:
    USoundModulationParameterHPFFrequency();

};

