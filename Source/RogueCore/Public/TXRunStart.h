#pragma once
#include "CoreMinimal.h"
#include "TXPlayerDetails.h"
#include "TXPlayerInfo.h"
#include "TXRunInfo.h"
#include "TXRunStart.generated.h"

USTRUCT(BlueprintType)
struct FTXRunStart {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool is_cooper_enabled;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FTXRunInfo run_info;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FTXPlayerInfo player_info;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FTXPlayerDetails player_details;
    
    ROGUECORE_API FTXRunStart();
};

