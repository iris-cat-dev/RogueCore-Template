#pragma once
#include "CoreMinimal.h"
#include "TelemetryForEnemySpawn.generated.h"

USTRUCT(BlueprintType)
struct FTelemetryForEnemySpawn {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString EnemyName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString EnemyType;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 EnemyCount;
    
    ROGUECORE_API FTelemetryForEnemySpawn();
};

