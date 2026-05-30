#pragma once
#include "CoreMinimal.h"
#include "BiomeEnemyEntry.generated.h"

class UEnemyDescriptor;

USTRUCT(BlueprintType)
struct FBiomeEnemyEntry {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UEnemyDescriptor* Enemy;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool IsDistruptive;
    
    ROGUECORE_API FBiomeEnemyEntry();
};

