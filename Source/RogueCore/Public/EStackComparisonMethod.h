#pragma once
#include "CoreMinimal.h"
#include "EStackComparisonMethod.generated.h"

UENUM(BlueprintType)
enum class EStackComparisonMethod : uint8 {
    Equals,
    LessThan,
    GreaterThan,
    LessThanOrEqual,
    GreaterThanOrEqual,
};

