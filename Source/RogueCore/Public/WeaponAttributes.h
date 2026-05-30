#pragma once
#include "CoreMinimal.h"
#include "EItemCategory.h"
#include "WeaponAttributes.generated.h"

class UItemUpgrade;

USTRUCT(BlueprintType)
struct FWeaponAttributes {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EItemCategory Slot;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<UItemUpgrade*> Attributes;
    
    ROGUECORE_API FWeaponAttributes();
};

