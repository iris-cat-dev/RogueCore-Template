#pragma once
#include "CoreMinimal.h"
#include "ETagConditionType.generated.h"

UENUM(BlueprintType)
enum class ETagConditionType : uint8 {
    HasAll,
    HasAny,
    HasNone,
};

