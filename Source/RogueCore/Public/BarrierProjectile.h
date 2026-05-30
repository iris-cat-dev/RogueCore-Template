#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=Actor -FallbackName=Actor
#include "BarrierProjectile.generated.h"

UCLASS(Blueprintable)
class ROGUECORE_API ABarrierProjectile : public AActor {
    GENERATED_BODY()
public:
    ABarrierProjectile(const FObjectInitializer& ObjectInitializer);

};

