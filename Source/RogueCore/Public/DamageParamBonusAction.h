#pragma once
#include "CoreMinimal.h"
#include "BXEUnlockAction.h"
#include "DamageParamBonusAction.generated.h"

class UDamageParamBonus;

UCLASS(Blueprintable, EditInlineNew)
class UDamageParamBonusAction : public UBXEUnlockAction {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    TArray<UDamageParamBonus*> DamageParamBonuses;
    
public:
    UDamageParamBonusAction();

};

