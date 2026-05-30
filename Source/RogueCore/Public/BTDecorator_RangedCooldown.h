#pragma once
#include "CoreMinimal.h"
#include "BehaviorTree/BTDecorator.h"
#include "BehaviorTree/ValueOrBBKey.h"
#include "RandRange.h"
#include "BTDecorator_RangedCooldown.generated.h"

UCLASS(Blueprintable)
class UBTDecorator_RangedCooldown : public UBTDecorator {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FValueOrBBKey_Bool DoCooldownBeforeFirstExecution;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FRandRange CoolDownTime;
    
public:
    UBTDecorator_RangedCooldown();

};

