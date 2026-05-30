#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=Actor -FallbackName=Actor
#include "DirtQueryResult.h"
#include "DirtDecoration.generated.h"

UCLASS(Blueprintable)
class ADirtDecoration : public AActor {
    GENERATED_BODY()
public:
    ADirtDecoration(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void ReceiveDirtQueryResult(const FDirtQueryResult& InQueryResult);
    
};

