#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=FloatInterval -FallbackName=FloatInterval
#include "DamageCondition.h"
#include "TargetHealthDamageCondition.generated.h"

UCLASS(Blueprintable, EditInlineNew)
class UTargetHealthDamageCondition : public UDamageCondition {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    FFloatInterval HealthPercentageRequired;
    
public:
    UTargetHealthDamageCondition();

};

