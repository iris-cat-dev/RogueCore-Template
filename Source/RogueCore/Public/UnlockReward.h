#pragma once
#include "CoreMinimal.h"
#include "Reward.h"
#include "UnlockReward.generated.h"

UCLASS(Abstract, Blueprintable, EditInlineNew)
class UUnlockReward : public UReward {
    GENERATED_BODY()
public:
    UUnlockReward();

};

