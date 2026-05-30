#pragma once
#include "CoreMinimal.h"
#include "EMultiConditionComparison.generated.h"

UENUM(BlueprintType)
enum class EMultiConditionComparison : uint8 {
    Or,
    And,
};

