#pragma once
#include "CoreMinimal.h"
#include "TXEnemySpawn.h"
#include "TXEnemySpawns.generated.h"

USTRUCT(BlueprintType)
struct FTXEnemySpawns {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FTXEnemySpawn> success;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FTXEnemySpawn> failures;
    
    ROGUECORE_API FTXEnemySpawns();
};

