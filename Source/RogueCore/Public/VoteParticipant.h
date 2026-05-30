#pragma once
#include "CoreMinimal.h"
#include "VoteParticipant.generated.h"

class AFSDPlayerState;

USTRUCT(BlueprintType)
struct FVoteParticipant {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TWeakObjectPtr<AFSDPlayerState> PlayerState;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 VoteIndex;
    
    ROGUECORE_API FVoteParticipant();
};

