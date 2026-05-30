#pragma once
#include "CoreMinimal.h"
#include "TXGameSessionEnd.generated.h"

USTRUCT(BlueprintType)
struct FTXGameSessionEnd {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 seconds_in_session;
    
    ROGUECORE_API FTXGameSessionEnd();
};

