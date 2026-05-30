#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=Actor -FallbackName=Actor
#include "RewardDispenserBase.generated.h"

UCLASS(Blueprintable)
class ARewardDispenserBase : public AActor {
    GENERATED_BODY()
public:
    ARewardDispenserBase(const FObjectInitializer& ObjectInitializer);

};

