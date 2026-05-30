#pragma once
#include "CoreMinimal.h"
#include "TXRunEndRating.generated.h"

USTRUCT(BlueprintType)
struct FTXRunEndRating {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString run_id;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 run_depth;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString rating;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString picked_question_option;
    
    ROGUECORE_API FTXRunEndRating();
};

