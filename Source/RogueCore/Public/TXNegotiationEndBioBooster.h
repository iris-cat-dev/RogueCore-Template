#pragma once
#include "CoreMinimal.h"
#include "TXPlayerInfo.h"
#include "TXPlayerUnlocks.h"
#include "TXRunInfo.h"
#include "TXNegotiationEndBioBooster.generated.h"

USTRUCT(BlueprintType)
struct FTXNegotiationEndBioBooster {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FString> pickable_options;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString picked_option;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FTXPlayerUnlocks player_unlocks;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FTXRunInfo run_info;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FTXPlayerInfo player_info;
    
    ROGUECORE_API FTXNegotiationEndBioBooster();
};

