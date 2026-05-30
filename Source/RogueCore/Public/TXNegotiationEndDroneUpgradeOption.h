#pragma once
#include "CoreMinimal.h"
#include "TXNegotiationEndDroneUpgradeOption.generated.h"

USTRUCT(BlueprintType)
struct FTXNegotiationEndDroneUpgradeOption {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString Name;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString Rarity;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool is_selectable;
    
    ROGUECORE_API FTXNegotiationEndDroneUpgradeOption();
};

