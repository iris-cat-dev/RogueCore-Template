#pragma once
#include "CoreMinimal.h"
#include "TXNegotiationEndUpgradeOption.h"
#include "TXPlayerInfo.h"
#include "TXPlayerUnlocks.h"
#include "TXRunInfo.h"
#include "TXNegotiationEndUpgrade.generated.h"

USTRUCT(BlueprintType)
struct FTXNegotiationEndUpgrade {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 negotiation_id;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString negotiation_pool;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FTXNegotiationEndUpgradeOption> Options;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString selected_option;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FTXPlayerUnlocks player_unlocks;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FTXRunInfo run_info;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FTXPlayerInfo player_info;
    
    ROGUECORE_API FTXNegotiationEndUpgrade();
};

