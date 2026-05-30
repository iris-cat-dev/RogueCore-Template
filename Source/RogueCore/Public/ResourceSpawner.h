#pragma once
#include "CoreMinimal.h"
#include "RandFloatInterval.h"
#include "ResourceSpawner.generated.h"

class UGenericMutator;
class UResourceData;

USTRUCT(BlueprintType)
struct ROGUECORE_API FResourceSpawner {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UResourceData* Resource;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FRandFloatInterval AmountToSpawn;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UGenericMutator* SpawnChanceMutator;
    
public:
    FResourceSpawner();
};

