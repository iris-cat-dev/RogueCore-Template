#pragma once
#include "CoreMinimal.h"
#include "EDamageVector.generated.h"

UENUM(BlueprintType)
enum class EDamageVector : uint8 {
    Ranged,
    Melee,
    Explosion,
    DamageOverTime,
};

