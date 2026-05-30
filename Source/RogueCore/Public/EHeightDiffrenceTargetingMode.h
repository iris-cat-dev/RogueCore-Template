#pragma once
#include "CoreMinimal.h"
#include "EHeightDiffrenceTargetingMode.generated.h"

UENUM(BlueprintType)
enum class EHeightDiffrenceTargetingMode : uint8 {
    Above,
    Below,
    Either,
};

