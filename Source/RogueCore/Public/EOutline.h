#pragma once
#include "CoreMinimal.h"
#include "EOutline.generated.h"

UENUM(BlueprintType)
enum class EOutline : uint8 {
    OL_NONE,
    OL_FRIENDLY = 2,
    OL_NEUTRAL,
    OL_ENEMY,
    OL_ITEM,
    OL_UPGRADESTATION,
    OL_CRIT_DART,
};

