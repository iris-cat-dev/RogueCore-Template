#pragma once
#include "CoreMinimal.h"
#include "EnemySpawnedDelegateDelegate.h"
#include "SpawnQueueItem.generated.h"

class APawn;
class UEnemyDescriptor;

USTRUCT(BlueprintType)
struct FSpawnQueueItem {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TSoftClassPtr<APawn> EnemyClass;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UEnemyDescriptor* Enemy;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FEnemySpawnedDelegate Callback;
    
    ROGUECORE_API FSpawnQueueItem();
};

