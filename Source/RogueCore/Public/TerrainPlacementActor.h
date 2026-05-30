#pragma once
#include "CoreMinimal.h"
#include "TerrainPlacementActor.generated.h"

class AActor;

USTRUCT(BlueprintType)
struct FTerrainPlacementActor {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftClassPtr<AActor> ActorClass;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 AmountOfActors;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool AddTerrainPlacementBlockers;
    
    ROGUECORE_API FTerrainPlacementActor();
};

