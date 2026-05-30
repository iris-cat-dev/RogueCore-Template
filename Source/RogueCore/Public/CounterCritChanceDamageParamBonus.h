#pragma once
#include "CoreMinimal.h"
#include "DamageParamBonus.h"
#include "CounterCritChanceDamageParamBonus.generated.h"

UCLASS(Blueprintable, EditInlineNew)
class UCounterCritChanceDamageParamBonus : public UDamageParamBonus {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString Name;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float AdditionalCritChance;
    
public:
    UCounterCritChanceDamageParamBonus();

};

