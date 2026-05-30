#pragma once
#include "CoreMinimal.h"
#include "BXEUnlockAction.h"
#include "AbilityUpgradesUnlockAction.generated.h"

class UAbilityUpgrade;

UCLASS(Blueprintable, EditInlineNew)
class UAbilityUpgradesUnlockAction : public UBXEUnlockAction {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UAbilityUpgrade* upgrade;
    
public:
    UAbilityUpgradesUnlockAction();

};

