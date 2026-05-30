#pragma once
#include "CoreMinimal.h"
#include "TXNegotiationEndRiskVectorOption.generated.h"

USTRUCT(BlueprintType)
struct FTXNegotiationEndRiskVectorOption {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString positive;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString negative;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 vote_amount;
    
    ROGUECORE_API FTXNegotiationEndRiskVectorOption();
};

