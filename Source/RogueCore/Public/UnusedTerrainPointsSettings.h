#pragma once
#include "CoreMinimal.h"
#include "UnusedTerrainPointsSettings.generated.h"

USTRUCT(BlueprintType)
struct FUnusedTerrainPointsSettings {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 PointsPerOwner;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool AddTerrainPlacementBlockers;
    
    ROGUECORE_API FUnusedTerrainPointsSettings();
};

