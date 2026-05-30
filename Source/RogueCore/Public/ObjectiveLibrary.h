#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=BlueprintFunctionLibrary -FallbackName=BlueprintFunctionLibrary
#include "UsableAccessDeniedInformation.h"
#include "ObjectiveLibrary.generated.h"

class UObject;

UCLASS(Blueprintable)
class UObjectiveLibrary : public UBlueprintFunctionLibrary {
    GENERATED_BODY()
public:
    UObjectiveLibrary();

    UFUNCTION(BlueprintCallable, BlueprintPure, meta=(WorldContext="WorldContext"))
    static FUsableAccessDeniedInformation GetRequiredObjectivesNotCompleteInformation(const UObject* WorldContext);
    
    UFUNCTION(BlueprintCallable, BlueprintPure, meta=(WorldContext="WorldContext"))
    static bool AreRequiredObjectivesComplete(const UObject* WorldContext);
    
};

