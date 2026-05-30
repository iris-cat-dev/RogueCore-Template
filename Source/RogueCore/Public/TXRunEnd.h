#pragma once
#include "CoreMinimal.h"
#include "TXPlayerDetails.h"
#include "TXPlayerInfo.h"
#include "TXPlayerStatistics.h"
#include "TXPlayerUnlocks.h"
#include "TXRunEndLoot.h"
#include "TXRunInfo.h"
#include "TXRunEnd.generated.h"

USTRUCT(BlueprintType)
struct FTXRunEnd {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString Result;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FTXRunEndLoot run_loot;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FTXRunInfo run_info;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FTXPlayerInfo player_info;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FTXPlayerDetails player_details;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FTXPlayerUnlocks player_unlocks;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FTXPlayerStatistics player_statistics;
    
    ROGUECORE_API FTXRunEnd();
};

