#pragma once
#include "CoreMinimal.h"
#include "EDamageUpgrade.h"
#include "PerkEffect.h"
#include "PerkEffectNumericDamageUpgrade.generated.h"

UCLASS(Blueprintable, EditInlineNew)
class UPerkEffectNumericDamageUpgrade : public UPerkEffect {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EDamageUpgrade Type;
    
    UPerkEffectNumericDamageUpgrade();

};

