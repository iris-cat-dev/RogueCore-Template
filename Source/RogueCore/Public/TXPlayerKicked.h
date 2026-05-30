#pragma once
#include "CoreMinimal.h"
#include "TXPlayerKicked.generated.h"

USTRUCT(BlueprintType)
struct FTXPlayerKicked {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString kick_reason;
    
    ROGUECORE_API FTXPlayerKicked();
};

