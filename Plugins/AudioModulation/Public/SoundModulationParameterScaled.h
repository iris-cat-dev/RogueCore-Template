#pragma once
#include "CoreMinimal.h"
#include "SoundModulationParameter.h"
#include "SoundModulationParameterScaled.generated.h"

UCLASS(Blueprintable, MinimalAPI)
class USoundModulationParameterScaled : public USoundModulationParameter {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float UnitMin;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float UnitMax;
    
    USoundModulationParameterScaled();

};

