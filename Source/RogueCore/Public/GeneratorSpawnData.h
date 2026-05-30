#pragma once
#include "CoreMinimal.h"
#include "GeneratorSpawnData.generated.h"

USTRUCT(BlueprintType)
struct FGeneratorSpawnData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float MinDistance;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float MaxDistance;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 GeneratorsToSpawn;
    
    ROGUECORE_API FGeneratorSpawnData();
};

