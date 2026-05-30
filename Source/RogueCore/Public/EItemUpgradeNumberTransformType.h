#pragma once
#include "CoreMinimal.h"
#include "EItemUpgradeNumberTransformType.generated.h"

UENUM(BlueprintType)
enum class EItemUpgradeNumberTransformType : uint8 {
    None,
    Absolute,
    PercentageMultiplier,
    PercentageAddition,
    PercentageAdditionInverse,
    PercentageAdditionAbsolute,
    Distance,
};

