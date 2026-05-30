#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=BlueprintFunctionLibrary -FallbackName=BlueprintFunctionLibrary
#include "ERunDepth.h"
#include "GeneratedRunForBiome.h"
#include "GeneratedRunsForBiome.h"
#include "RunCreationParameters.h"
#include "PlanetGenerationLibrary.generated.h"

UCLASS(Blueprintable)
class ROGUECORE_API UPlanetGenerationLibrary : public UBlueprintFunctionLibrary {
    GENERATED_BODY()
public:
    UPlanetGenerationLibrary();

    UFUNCTION(BlueprintCallable, BlueprintPure)
    static FGeneratedRunsForBiome GetRunsAtDepth(const FGeneratedRunsForBiome& GeneratedRuns, const ERunDepth Depth);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static FRunCreationParameters CreateRunCreationParameters(const FGeneratedRunForBiome& GeneratedRun);
    
};

