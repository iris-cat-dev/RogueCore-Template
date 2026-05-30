#pragma once
#include "CoreMinimal.h"
#include "SoundModulationGenerator.h"
#include "SoundModulationLFOParams.h"
#include "SoundModulationGeneratorLFO.generated.h"

UCLASS(Blueprintable, EditInlineNew, MinimalAPI)
class USoundModulationGeneratorLFO : public USoundModulationGenerator {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FSoundModulationLFOParams Params;
    
    USoundModulationGeneratorLFO();

};

