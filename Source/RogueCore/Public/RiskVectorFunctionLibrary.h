#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=BlueprintFunctionLibrary -FallbackName=BlueprintFunctionLibrary
#include "RiskVectorFunctionLibrary.generated.h"

class URiskVector;

UCLASS(Blueprintable)
class URiskVectorFunctionLibrary : public UBlueprintFunctionLibrary {
    GENERATED_BODY()
public:
    URiskVectorFunctionLibrary();

    UFUNCTION(BlueprintCallable)
    static TArray<URiskVector*> SortRiskVectors(const TArray<URiskVector*>& InRiskVectors);
    
};

