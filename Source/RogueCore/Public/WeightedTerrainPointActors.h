#pragma once
#include "CoreMinimal.h"
#include "WeightedTerrainPointActor.h"
#include "WeightedTerrainPointActors.generated.h"

USTRUCT(BlueprintType)
struct FWeightedTerrainPointActors {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FWeightedTerrainPointActor> SpawnActors;
    
    ROGUECORE_API FWeightedTerrainPointActors();
};

