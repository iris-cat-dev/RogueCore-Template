#pragma once
#include "CoreMinimal.h"
#include "BXEWeightedWeaponUpgrades.generated.h"

class UItemUpgrade;

USTRUCT(BlueprintType)
struct FBXEWeightedWeaponUpgrades {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftObjectPtr<UItemUpgrade> upgrade;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float Weight;
    
    ROGUECORE_API FBXEWeightedWeaponUpgrades();
};

