#pragma once
#include "CoreMinimal.h"
#include "ETargetStateDamageBonusType.generated.h"

UENUM(BlueprintType)
enum class ETargetStateDamageBonusType : uint8 {
    Fleeing,
    Staggered,
    ElementEventActive,
};

