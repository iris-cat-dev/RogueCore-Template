#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Object -FallbackName=Object
#include "SoundModulationParameterSettings.h"
#include "SoundModulationParameter.generated.h"

UCLASS(Blueprintable, MinimalAPI)
class USoundModulationParameter : public UObject {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FSoundModulationParameterSettings Settings;
    
    USoundModulationParameter();

};

