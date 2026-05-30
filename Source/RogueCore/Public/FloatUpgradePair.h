#pragma once
#include "CoreMinimal.h"
#include "FloatUpgradePair.generated.h"

class UMiscUpgradeKey;

USTRUCT(BlueprintType)
struct FFloatUpgradePair {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UMiscUpgradeKey* Key;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float Value;
    
    ROGUECORE_API FFloatUpgradePair();
};

