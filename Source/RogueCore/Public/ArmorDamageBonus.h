#pragma once
#include "CoreMinimal.h"
#include "DamageBonusBase.h"
#include "ArmorDamageBonus.generated.h"

UCLASS(Blueprintable, EditInlineNew)
class UArmorDamageBonus : public UDamageBonusBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString ArmorDamageMultiplierName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float armorDamageMultiplier;
    
    UArmorDamageBonus();

};

