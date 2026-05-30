#pragma once
#include "CoreMinimal.h"
#include "BXEUnlockInstance.h"
#include "TelemetryWorkbenchWeaponAttribute.h"
#include "TelemetryWorkbenchPicks.generated.h"

class UBXEUnlockBase;

USTRUCT(BlueprintType)
struct FTelemetryWorkbenchPicks {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FTelemetryWorkbenchWeaponAttribute> PickableAttributes;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FBXEUnlockInstance> PickableWeapons;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<UBXEUnlockBase*> PickableAbilityUpgrades;
    
    ROGUECORE_API FTelemetryWorkbenchPicks();
};

