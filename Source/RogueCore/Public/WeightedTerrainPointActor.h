#pragma once
#include "CoreMinimal.h"
#include "StaticSpawnPointSelection.h"
#include "Templates/SubclassOf.h"
#include "WeightedTerrainPointActor.generated.h"

class AActor;

USTRUCT(BlueprintType)
struct FWeightedTerrainPointActor {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftClassPtr<AActor> SpawnActor;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FStaticSpawnPointSelection Selection;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float Weight;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 MaximumAmountToSpawn;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool OnlySpawnOnLastStage;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TSubclassOf<AActor> LoadedActorClass;
    
    ROGUECORE_API FWeightedTerrainPointActor();
};

