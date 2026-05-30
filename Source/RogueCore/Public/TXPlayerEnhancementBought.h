#pragma once
#include "CoreMinimal.h"
#include "TXPlayerInfo.h"
#include "TXPlayerEnhancementBought.generated.h"

USTRUCT(BlueprintType)
struct FTXPlayerEnhancementBought {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString enhancement;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FTXPlayerInfo player_info;
    
    ROGUECORE_API FTXPlayerEnhancementBought();
};

