#pragma once
#include "CoreMinimal.h"
#include "ETargetingMethod.generated.h"

UENUM(BlueprintType)
enum class ETargetingMethod : uint8 {
    ByDistance,
    ByAngleFromDirection,
};

