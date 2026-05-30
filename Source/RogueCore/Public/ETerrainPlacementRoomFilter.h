#pragma once
#include "CoreMinimal.h"
#include "ETerrainPlacementRoomFilter.generated.h"

UENUM(BlueprintType)
enum class ETerrainPlacementRoomFilter : uint8 {
    None,
    WhiteList,
    BlackList,
};

