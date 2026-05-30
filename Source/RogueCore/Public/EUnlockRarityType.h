#pragma once
#include "CoreMinimal.h"
#include "EUnlockRarityType.generated.h"

UENUM(BlueprintType)
enum class EUnlockRarityType : uint8 {
    Undefined,
    Common,
    Uncommon,
    Rare,
    Epic,
    Legendary,
};

