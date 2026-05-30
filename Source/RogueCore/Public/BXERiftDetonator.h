#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=Actor -FallbackName=Actor
#include "BXERiftDetonator.generated.h"

UCLASS(Blueprintable)
class ABXERiftDetonator : public AActor {
    GENERATED_BODY()
public:
    ABXERiftDetonator(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnWiresMerged();
    
};

