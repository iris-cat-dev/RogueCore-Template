#pragma once
#include "CoreMinimal.h"
#include "TXPlayerInfo.h"
#include "TXPlayerDeath.generated.h"

USTRUCT(BlueprintType)
struct FTXPlayerDeath {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString death_cause;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 seconds_since_last_damage_taken;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 seconds_since_last_revive;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FTXPlayerInfo player_info;
    
    ROGUECORE_API FTXPlayerDeath();
};

