#pragma once
#include "CoreMinimal.h"
#include "EVoteOptionActionType.generated.h"

UENUM(BlueprintType)
enum class EVoteOptionActionType : uint8 {
    NEGATIVE,
    POSITIVE,
};

