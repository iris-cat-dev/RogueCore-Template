#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=AIModule -ObjectName=BlackboardKeySelector -FallbackName=BlackboardKeySelector
#include "BTDecorator_RangedCooldown.h"
#include "BTDecorator_SharedCooldown.generated.h"

UCLASS(Blueprintable)
class UBTDecorator_SharedCooldown : public UBTDecorator_RangedCooldown {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FBlackboardKeySelector CooldownKey;
    
    UBTDecorator_SharedCooldown();

};

