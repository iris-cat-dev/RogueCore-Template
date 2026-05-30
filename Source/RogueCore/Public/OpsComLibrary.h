#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=BlueprintFunctionLibrary -FallbackName=BlueprintFunctionLibrary
#include "OpsComLibrary.generated.h"

class UObject;

UCLASS(Blueprintable)
class UOpsComLibrary : public UBlueprintFunctionLibrary {
    GENERATED_BODY()
public:
    UOpsComLibrary();

    UFUNCTION(BlueprintCallable, BlueprintPure, meta=(WorldContext="WorldContext"))
    static int32 GetAmountOfClaimableOpsComTasksForLocalPlayer(const UObject* WorldContext);
    
};

