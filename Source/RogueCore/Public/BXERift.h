#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=Actor -FallbackName=Actor
#include "BXERift.generated.h"

UCLASS(Blueprintable)
class ABXERift : public AActor {
    GENERATED_BODY()
public:
    ABXERift(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void SpawnDetonatorFailSafe();
    
};

