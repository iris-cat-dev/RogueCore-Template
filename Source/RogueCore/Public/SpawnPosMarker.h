#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=Actor -FallbackName=Actor
#include "SpawnPosMarker.generated.h"

UCLASS(Blueprintable)
class ASpawnPosMarker : public AActor {
    GENERATED_BODY()
public:
    ASpawnPosMarker(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void SetVisibility(bool visible);
    
};

