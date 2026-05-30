#pragma once
#include "CoreMinimal.h"
#include "AbilityUpgrade.h"
#include "MiscAbilityUpgrade.generated.h"

class UMiscItemUpgrade;

UCLASS(Blueprintable, EditInlineNew)
class UMiscAbilityUpgrade : public UAbilityUpgrade {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UMiscItemUpgrade* upgrade;
    
    UMiscAbilityUpgrade();

};

