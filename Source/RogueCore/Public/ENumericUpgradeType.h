#pragma once
#include "CoreMinimal.h"
#include "ENumericUpgradeType.generated.h"

UENUM(BlueprintType)
enum class ENumericUpgradeType : uint8 {
    ClipSizeFlat,
    ClipSizeMultiplier,
    ReserveCountFlat,
    ReserveCountMultiplier,
    TEst,
    Num,
};

