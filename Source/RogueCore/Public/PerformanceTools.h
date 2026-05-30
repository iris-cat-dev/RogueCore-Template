#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=BlueprintFunctionLibrary -FallbackName=BlueprintFunctionLibrary
#include "PerformanceTools.generated.h"

class AActor;

UCLASS(Blueprintable)
class UPerformanceTools : public UBlueprintFunctionLibrary {
    GENERATED_BODY()
public:
    UPerformanceTools();

    UFUNCTION(BlueprintCallable)
    static void SetStaticMobilityOnComponents(AActor* act);
    
    UFUNCTION(BlueprintCallable)
    static void SetMaxDrawDistancesOnComponents(AActor* act);
    
};

