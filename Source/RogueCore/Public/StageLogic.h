#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Object -FallbackName=Object
#include "StageLogic.generated.h"

UCLASS(Blueprintable)
class UStageLogic : public UObject {
    GENERATED_BODY()
public:
    UStageLogic();

protected:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void StartLogic();
    
};

