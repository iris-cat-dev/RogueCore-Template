#pragma once
#include "CoreMinimal.h"
#include "BXEUnlockAction.h"
#include "DamageBonusAction.generated.h"

class UDamageBonusBase;

UCLASS(Blueprintable, EditInlineNew)
class UDamageBonusAction : public UBXEUnlockAction {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    TArray<UDamageBonusBase*> DamageBonuses;
    
public:
    UDamageBonusAction();

};

