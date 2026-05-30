#pragma once
#include "CoreMinimal.h"
#include "TXNegotiationEndRiskVectorOption.h"
#include "TXPlayerInfo.h"
#include "TXRunInfo.h"
#include "TXNegotiationEndRiskVector.generated.h"

USTRUCT(BlueprintType)
struct FTXNegotiationEndRiskVector {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 vote_id;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FTXNegotiationEndRiskVectorOption> Options;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 winner_index;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 player_vote_index;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FTXRunInfo run_info;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FTXPlayerInfo player_info;
    
    ROGUECORE_API FTXNegotiationEndRiskVector();
};

