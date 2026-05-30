#pragma once
#include "CoreMinimal.h"
#include "DamageCondition.h"
#include "ElementEventCondition.generated.h"

class UElementEventType;

UCLASS(Blueprintable, EditInlineNew)
class UElementEventCondition : public UDamageCondition {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UElementEventType* Event;
    
    UElementEventCondition();

};

