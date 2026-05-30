#pragma once
#include "CoreMinimal.h"
#include "SoundModulationParameterFrequencyBase.h"
#include "SoundModulationParameterFrequency.generated.h"

UCLASS(Blueprintable, MinimalAPI)
class USoundModulationParameterFrequency : public USoundModulationParameterFrequencyBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float UnitMin;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float UnitMax;
    
    USoundModulationParameterFrequency();

};

