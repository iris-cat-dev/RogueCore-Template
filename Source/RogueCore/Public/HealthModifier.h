#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Object -FallbackName=Object
#include "HealthModifier.generated.h"

UCLASS(Abstract, Blueprintable, EditInlineNew)
class UHealthModifier : public UObject {
    GENERATED_BODY()
public:
    UHealthModifier();

};

