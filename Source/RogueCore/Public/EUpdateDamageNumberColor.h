#pragma once
#include "CoreMinimal.h"
#include "EUpdateDamageNumberColor.generated.h"

UENUM(BlueprintType)
enum class EUpdateDamageNumberColor : uint8 {
    ENormal,
    ENever,
    EAlways,
    EAlwaysNormalHit,
};

