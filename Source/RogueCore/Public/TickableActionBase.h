#pragma once
#include "CoreMinimal.h"
#include "Kismet/BlueprintAsyncActionBase.h"
#include "TickableActionBase.generated.h"

UCLASS(Blueprintable)
class UTickableActionBase : public UBlueprintAsyncActionBase {
    GENERATED_BODY()
public:
    DECLARE_DYNAMIC_MULTICAST_DELEGATE(FOnCompleted);
    
    UTickableActionBase();

};

