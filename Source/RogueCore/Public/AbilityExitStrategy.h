#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Object -FallbackName=Object
#include "AbilityExitStrategy.generated.h"

UCLASS(Abstract, Blueprintable, DefaultToInstanced, EditInlineNew)
class UAbilityExitStrategy : public UObject {
    GENERATED_BODY()
public:
    UAbilityExitStrategy();

};

