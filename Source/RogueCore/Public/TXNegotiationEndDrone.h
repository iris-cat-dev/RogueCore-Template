#pragma once
#include "CoreMinimal.h"
#include "TXNegotiationEndDroneUpgradeOption.h"
#include "TXPlayerInfo.h"
#include "TXRunInfo.h"
#include "TXNegotiationEndDrone.generated.h"

USTRUCT(BlueprintType)
struct FTXNegotiationEndDrone {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FTXNegotiationEndDroneUpgradeOption> Options;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString selected_option;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FTXRunInfo run_info;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FTXPlayerInfo player_info;
    
    ROGUECORE_API FTXNegotiationEndDrone();
};

