#pragma once
#include "CoreMinimal.h"
#include "AbilityUpgrade.h"
#include "EGuardianGauntletUpgrade.h"
#include "GuardianGauntletUpgrade.generated.h"

UCLASS(Blueprintable, EditInlineNew)
class UGuardianGauntletUpgrade : public UAbilityUpgrade {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    EGuardianGauntletUpgrade Type;
    
public:
    UGuardianGauntletUpgrade();

};

