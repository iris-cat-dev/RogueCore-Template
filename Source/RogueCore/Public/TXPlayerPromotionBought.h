#pragma once
#include "CoreMinimal.h"
#include "TXPlayerInfo.h"
#include "TXPlayerPromotionBought.generated.h"

USTRUCT(BlueprintType)
struct FTXPlayerPromotionBought {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 promotion_level;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString promoted_class;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FTXPlayerInfo player_info;
    
    ROGUECORE_API FTXPlayerPromotionBought();
};

