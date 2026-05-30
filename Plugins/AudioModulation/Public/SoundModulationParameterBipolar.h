#pragma once
#include "CoreMinimal.h"
#include "SoundModulationParameter.h"
#include "SoundModulationParameterBipolar.generated.h"

UCLASS(Blueprintable, MinimalAPI)
class USoundModulationParameterBipolar : public USoundModulationParameter {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float UnitRange;
    
    USoundModulationParameterBipolar();

};

