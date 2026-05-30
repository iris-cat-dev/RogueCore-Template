#pragma once
#include "CoreMinimal.h"
#include "MessageFeed.generated.h"

USTRUCT(BlueprintType)
struct FMessageFeed {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString DateText;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString MessageText;
    
    ROGUECORE_API FMessageFeed();
};

