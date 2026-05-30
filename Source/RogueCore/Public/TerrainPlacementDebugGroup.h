#pragma once
#include "CoreMinimal.h"
#include "EDebrisColliderType.h"
#include "TerrainPlacementDebugGroup.generated.h"

USTRUCT(BlueprintType)
struct FTerrainPlacementDebugGroup {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString Name;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EDebrisColliderType CapsuleType;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 Good;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 Bad;
    
    ROGUECORE_API FTerrainPlacementDebugGroup();
};

