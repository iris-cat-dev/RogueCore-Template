#pragma once
#include "CoreMinimal.h"
#include "VoteOptionInstance.generated.h"

class UVoteOptionAction;

USTRUCT(BlueprintType)
struct FVoteOptionInstance {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TArray<UVoteOptionAction*> VoteOptionActions;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    int32 Votes;
    
    ROGUECORE_API FVoteOptionInstance();
};

