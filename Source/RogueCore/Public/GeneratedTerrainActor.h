#pragma once
#include "CoreMinimal.h"
#include "GeneratedTerrainActor.generated.h"

USTRUCT(BlueprintType)
struct FGeneratedTerrainActor {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    int32 SpawnedAmount;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    int32 TargetAmount;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    bool Tracked;
    
    ROGUECORE_API FGeneratedTerrainActor();
};

