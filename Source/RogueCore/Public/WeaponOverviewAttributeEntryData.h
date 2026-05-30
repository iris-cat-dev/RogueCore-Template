#pragma once
#include "CoreMinimal.h"
#include "EWeaponOverviewModifierType.h"
#include "EWeaponOverviewUnitType.h"
#include "WeaponOverviewAttributeEntryData.generated.h"

USTRUCT(BlueprintType)
struct ROGUECORE_API FWeaponOverviewAttributeEntryData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float Amount;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EWeaponOverviewUnitType Unit;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EWeaponOverviewModifierType ModifierType;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool IsHidden;
    
    FWeaponOverviewAttributeEntryData();
};

