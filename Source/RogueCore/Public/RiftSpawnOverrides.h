#pragma once
#include "CoreMinimal.h"
#include "RiftSpawnOverrides.generated.h"

USTRUCT(BlueprintType)
struct FRiftSpawnOverrides {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float SpawnDistance;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float OptimalSpawnDistance;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 SpawnCount;
    
    ROGUECORE_API FRiftSpawnOverrides();
};

