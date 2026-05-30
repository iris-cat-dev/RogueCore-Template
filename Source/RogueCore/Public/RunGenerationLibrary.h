#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=BlueprintFunctionLibrary -FallbackName=BlueprintFunctionLibrary
#include "GeneratedRunProperties.h"
#include "RunCreationParameters.h"
#include "StageSeedParameters.h"
#include "RunGenerationLibrary.generated.h"

UCLASS(Blueprintable)
class ROGUECORE_API URunGenerationLibrary : public UBlueprintFunctionLibrary {
    GENERATED_BODY()
public:
    URunGenerationLibrary();

    UFUNCTION(BlueprintCallable, BlueprintPure)
    static FRunCreationParameters CreateRunParametersFromSeed(const FStageSeedParameters& SeedParameters);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static FGeneratedRunProperties ComputeRunProperties(const FRunCreationParameters& Parameters);
    
};

