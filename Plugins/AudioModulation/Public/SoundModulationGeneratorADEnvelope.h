#pragma once
#include "CoreMinimal.h"
#include "SoundModulationADEnvelopeParams.h"
#include "SoundModulationGenerator.h"
#include "SoundModulationGeneratorADEnvelope.generated.h"

UCLASS(Blueprintable, EditInlineNew, MinimalAPI)
class USoundModulationGeneratorADEnvelope : public USoundModulationGenerator {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FSoundModulationADEnvelopeParams Params;
    
    USoundModulationGeneratorADEnvelope();

};

