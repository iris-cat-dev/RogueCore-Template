#pragma once
#include "CoreMinimal.h"
#include "PerkEffect.h"
#include "PerkEffectDynamicDamageUpgrade.generated.h"

class UDamageBonusBase;

UCLASS(Blueprintable, EditInlineNew)
class UPerkEffectDynamicDamageUpgrade : public UPerkEffect {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    TArray<UDamageBonusBase*> DamageBonuses;
    
    UPerkEffectDynamicDamageUpgrade();

};

