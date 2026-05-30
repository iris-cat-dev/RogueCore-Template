#pragma once
#include "CoreMinimal.h"
#include "UpgradeFilterData.generated.h"

class UItemUpgrade;

USTRUCT(BlueprintType)
struct FUpgradeFilterData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UItemUpgrade* UpgradeToApply;
    
    ROGUECORE_API FUpgradeFilterData();
};

