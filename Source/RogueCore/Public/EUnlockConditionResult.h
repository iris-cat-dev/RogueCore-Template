#pragma once
#include "CoreMinimal.h"
#include "EUnlockConditionResult.generated.h"

UENUM(BlueprintType)
enum class EUnlockConditionResult : uint8 {
    Allow,
    Deny,
    Failure,
};

