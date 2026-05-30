#pragma once
#include "CoreMinimal.h"
#include "ERewardTreeNodeState.generated.h"

UENUM(BlueprintType)
enum class ERewardTreeNodeState : uint8 {
    Bought,
    CanBuy,
    Locked,
};

