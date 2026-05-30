#pragma once
#include "CoreMinimal.h"
#include "ERarityConditionResult.generated.h"

UENUM(BlueprintType)
enum class ERarityConditionResult : uint8 {
    Allow,
    Deny,
    Failure,
};

