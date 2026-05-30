#pragma once
#include "CoreMinimal.h"
#include "CallbackBonusDelegateDelegate.h"
#include "DamageBonusBase.h"
#include "CallbackBonus.generated.h"

UCLASS(Blueprintable, EditInlineNew)
class UCallbackBonus : public UDamageBonusBase {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FCallbackBonusDelegate Callback;
    
public:
    UCallbackBonus();

};

