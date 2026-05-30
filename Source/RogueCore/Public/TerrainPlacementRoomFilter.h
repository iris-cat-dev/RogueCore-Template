#pragma once
#include "CoreMinimal.h"
#include "ETerrainPlacementRoomFilter.h"
#include "TerrainPlacementRoomFilter.generated.h"

USTRUCT(BlueprintType)
struct FTerrainPlacementRoomFilter {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ETerrainPlacementRoomFilter Type;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<int32> Rooms;
    
    ROGUECORE_API FTerrainPlacementRoomFilter();
};

