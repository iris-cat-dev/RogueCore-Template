#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=AudioExtensions -ObjectName=SoundModulatorBase -FallbackName=SoundModulatorBase
#include "SoundModulationGenerator.generated.h"

UCLASS(Abstract, Blueprintable, EditInlineNew, MinimalAPI)
class USoundModulationGenerator : public USoundModulatorBase {
    GENERATED_BODY()
public:
    USoundModulationGenerator();

};

