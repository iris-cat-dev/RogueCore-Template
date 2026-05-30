#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=AudioExtensions -ObjectName=SoundModulatorBase -FallbackName=SoundModulatorBase
#include "SoundControlBus.generated.h"

class USoundModulationGenerator;
class USoundModulationParameter;

UCLASS(Blueprintable, EditInlineNew, MinimalAPI)
class USoundControlBus : public USoundModulatorBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bBypass;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString address;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<USoundModulationGenerator*> Generators;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    USoundModulationParameter* Parameter;
    
    USoundControlBus();

};

