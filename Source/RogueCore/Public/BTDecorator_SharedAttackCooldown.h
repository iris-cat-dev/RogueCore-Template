#pragma once
#include "CoreMinimal.h"
#include "BTDecorator_SharedCooldown.h"
#include "BTDecorator_SharedAttackCooldown.generated.h"

UCLASS(Blueprintable)
class UBTDecorator_SharedAttackCooldown : public UBTDecorator_SharedCooldown {
    GENERATED_BODY()
public:
    UBTDecorator_SharedAttackCooldown();

};

