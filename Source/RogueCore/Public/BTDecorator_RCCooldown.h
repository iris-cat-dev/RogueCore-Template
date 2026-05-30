#pragma once
#include "CoreMinimal.h"
#include "BehaviorTree/Decorators/BTDecorator_Cooldown.h"
#include "BehaviorTree/ValueOrBBKey.h"
#include "BTDecorator_RCCooldown.generated.h"

UCLASS(Blueprintable)
class ROGUECORE_API UBTDecorator_RCCooldown : public UBTDecorator_Cooldown {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FValueOrBBKey_Bool DoCooldownBeforeFirstExecution;
    
public:
    UBTDecorator_RCCooldown();

};

