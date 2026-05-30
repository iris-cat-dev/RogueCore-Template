#pragma once
#include "CoreMinimal.h"
#include "TXPlayerInfo.h"
#include "TXRunStatistics.h"
#include "TXIntelObjectiveClaimed.generated.h"

USTRUCT(BlueprintType)
struct FTXIntelObjectiveClaimed {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString objective_name;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString objective_guid;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FTXRunStatistics run_statistics;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FTXPlayerInfo player_info;
    
    ROGUECORE_API FTXIntelObjectiveClaimed();
};

