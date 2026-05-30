#pragma once
#include "CoreMinimal.h"
#include "ItemUpgradeSelection.h"
#include "ReplicatedItemUpgrades.generated.h"

USTRUCT(BlueprintType)
struct FReplicatedItemUpgrades {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FItemUpgradeSelection> ItemUpgradeSelections;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FItemUpgradeSelection PickAxeUpgradeSelection;
    
    ROGUECORE_API FReplicatedItemUpgrades();
};

