#pragma once
#include "CoreMinimal.h"
#include "ECoreTentacleState.generated.h"

UENUM(BlueprintType)
enum class ECoreTentacleState : uint8 {
    Idle,
    Search,
    MeleeAttack,
    RangedAttack,
    GrabAttack,
    GrabShake,
};

