#pragma once
#include "CoreMinimal.h"
#include "TXPlayerInfo.h"
#include "TXRunStatistics.h"
#include "TXIntelChallengeClaimed.generated.h"

USTRUCT(BlueprintType)
struct FTXIntelChallengeClaimed {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString challenge_name;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString challenge_guid;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FTXRunStatistics run_statistics;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FTXPlayerInfo player_info;
    
    ROGUECORE_API FTXIntelChallengeClaimed();
};

