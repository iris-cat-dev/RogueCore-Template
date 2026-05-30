#pragma once
#include "CoreMinimal.h"
#include "BXEUnlockAction.h"
#include "EDamageUpgrade.h"
#include "NumericalDamageBonusAction.generated.h"

UCLASS(Blueprintable, EditInlineNew)
class UNumericalDamageBonusAction : public UBXEUnlockAction {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString Name;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EDamageUpgrade Type;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float Value;
    
public:
    UNumericalDamageBonusAction();

};

