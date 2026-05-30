#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=Actor -FallbackName=Actor
#include "LostPack.generated.h"

UCLASS(Blueprintable)
class ROGUECORE_API ALostPack : public AActor {
    GENERATED_BODY()
public:
    ALostPack(const FObjectInitializer& ObjectInitializer);

};

