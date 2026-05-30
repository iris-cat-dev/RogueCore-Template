#pragma once
#include "CoreMinimal.h"
#include "SoundModulationParameter.h"
#include "SoundModulationParameterVolume.generated.h"

UCLASS(Blueprintable, MinimalAPI)
class USoundModulationParameterVolume : public USoundModulationParameter {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float MinVolume;
    
    USoundModulationParameterVolume();

};

