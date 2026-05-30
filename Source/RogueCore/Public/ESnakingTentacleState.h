#pragma once
#include "CoreMinimal.h"
#include "ESnakingTentacleState.generated.h"

UENUM(BlueprintType)
enum class ESnakingTentacleState : uint8 {
    Idle,
    Reaching,
    Retracting,
    Anticipating,
    Attacking,
    CoolingDown,
    Retreating,
    Burrowing,
    Rising,
    BigRetreating,
    JailingTarget,
    Buried,
};

