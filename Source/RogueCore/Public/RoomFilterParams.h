#pragma once
#include "CoreMinimal.h"
#include "ETerrainPlacementRoomFilter.h"
#include "RoomFilterParams.generated.h"

USTRUCT(BlueprintType)
struct FRoomFilterParams {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ETerrainPlacementRoomFilter RoomFilter;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<int32> RoomIndicesFilter;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float LimitHeightFromRoomRadius;
    
    ROGUECORE_API FRoomFilterParams();
};

