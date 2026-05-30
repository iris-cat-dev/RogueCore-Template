#pragma once
#include "CoreMinimal.h"
#include "TXNegotiationEndWorkbenchAbilityUpgradeOption.generated.h"

USTRUCT(BlueprintType)
struct FTXNegotiationEndWorkbenchAbilityUpgradeOption {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString Name;
    
    ROGUECORE_API FTXNegotiationEndWorkbenchAbilityUpgradeOption();
};

