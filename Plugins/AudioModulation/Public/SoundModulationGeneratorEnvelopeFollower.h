#pragma once
#include "CoreMinimal.h"
#include "EnvelopeFollowerGeneratorParams.h"
#include "SoundModulationGenerator.h"
#include "SoundModulationGeneratorEnvelopeFollower.generated.h"

UCLASS(Blueprintable, EditInlineNew, MinimalAPI)
class USoundModulationGeneratorEnvelopeFollower : public USoundModulationGenerator {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FEnvelopeFollowerGeneratorParams Params;
    
    USoundModulationGeneratorEnvelopeFollower();

};

