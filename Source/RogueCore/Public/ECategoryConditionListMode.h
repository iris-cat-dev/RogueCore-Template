#pragma once
#include "CoreMinimal.h"
#include "ECategoryConditionListMode.generated.h"

UENUM(BlueprintType)
enum class ECategoryConditionListMode : uint8 {
    Whitelist,
    Blacklist,
};

