#pragma once
#include "CoreMinimal.h"
#include "SoundModulationParameter.h"
#include "SoundModulationParameterAdditive.generated.h"

UCLASS(Blueprintable, MinimalAPI)
class USoundModulationParameterAdditive : public USoundModulationParameter {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float UnitMin;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float UnitMax;
    
    USoundModulationParameterAdditive();

};

