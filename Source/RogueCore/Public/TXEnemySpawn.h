#pragma once
#include "CoreMinimal.h"
#include "TXEnemySpawn.generated.h"

USTRUCT(BlueprintType)
struct FTXEnemySpawn {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString enemy_name;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString enemy_type;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 enemy_count;
    
    ROGUECORE_API FTXEnemySpawn();
};

