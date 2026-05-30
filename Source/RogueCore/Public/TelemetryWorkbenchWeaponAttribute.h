#pragma once
#include "CoreMinimal.h"
#include "TelemetryWorkbenchWeaponAttribute.generated.h"

class UBXEAttributeUnlock;
class UBXEUnlockBase;

USTRUCT(BlueprintType)
struct FTelemetryWorkbenchWeaponAttribute {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UBXEUnlockBase* Weapon;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UBXEAttributeUnlock* Attribute;
    
    ROGUECORE_API FTelemetryWorkbenchWeaponAttribute();
};

