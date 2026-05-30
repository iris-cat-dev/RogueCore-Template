#pragma once
#include "CoreMinimal.h"
#include "TXPlayerUnlock.h"
#include "TXPlayerUnlocks.generated.h"

USTRUCT(BlueprintType)
struct FTXPlayerUnlocks {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FTXPlayerUnlock> Unlocks;
    
    ROGUECORE_API FTXPlayerUnlocks();
};

