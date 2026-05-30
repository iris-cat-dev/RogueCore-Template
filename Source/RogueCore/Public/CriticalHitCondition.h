#pragma once
#include "CoreMinimal.h"
#include "DamageCondition.h"
#include "CriticalHitCondition.generated.h"

UCLASS(Blueprintable, EditInlineNew)
class UCriticalHitCondition : public UDamageCondition {
    GENERATED_BODY()
public:
    UCriticalHitCondition();

};

