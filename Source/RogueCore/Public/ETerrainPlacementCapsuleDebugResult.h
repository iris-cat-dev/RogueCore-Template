#pragma once
#include "CoreMinimal.h"
#include "ETerrainPlacementCapsuleDebugResult.generated.h"

UENUM(BlueprintType)
enum class ETerrainPlacementCapsuleDebugResult : uint8 {
    NotTestet,
    Passed,
    Failed,
};

