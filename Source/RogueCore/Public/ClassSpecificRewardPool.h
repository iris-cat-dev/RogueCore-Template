#pragma once
#include "CoreMinimal.h"
#include "RewardPool.h"
#include "ClassSpecificRewardPool.generated.h"

UCLASS(Blueprintable, EditInlineNew)
class UClassSpecificRewardPool : public URewardPool {
    GENERATED_BODY()
public:
    UClassSpecificRewardPool();

};

