#pragma once
#include "CoreMinimal.h"
#include "SoundModulationParameter.h"
#include "SoundModulationParameterFrequencyBase.generated.h"

UCLASS(Abstract, Blueprintable, MinimalAPI)
class USoundModulationParameterFrequencyBase : public USoundModulationParameter {
    GENERATED_BODY()
public:
    USoundModulationParameterFrequencyBase();

};

