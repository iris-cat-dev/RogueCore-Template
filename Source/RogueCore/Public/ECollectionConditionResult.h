#pragma once
#include "CoreMinimal.h"
#include "ECollectionConditionResult.generated.h"

UENUM(BlueprintType)
enum class ECollectionConditionResult : uint8 {
    Allow,
    Deny,
    Failure,
};

