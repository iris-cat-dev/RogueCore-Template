#pragma once
#include "CoreMinimal.h"
#include "DamageBonusBase.h"
#include "WeakpointDamageBonus.generated.h"

UCLASS(Blueprintable, EditInlineNew)
class UWeakpointDamageBonus : public UDamageBonusBase {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString Name;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float AdditionalWeakpointDamage;
    
public:
    UWeakpointDamageBonus();

};

