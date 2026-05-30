#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=AudioExtensions -ObjectName=SoundModulatorBase -FallbackName=SoundModulatorBase
#include "SoundControlModulationPatch.h"
#include "SoundModulationPatch.generated.h"

UCLASS(Blueprintable, EditInlineNew, MinimalAPI)
class USoundModulationPatch : public USoundModulatorBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FSoundControlModulationPatch PatchSettings;
    
    USoundModulationPatch();

};

