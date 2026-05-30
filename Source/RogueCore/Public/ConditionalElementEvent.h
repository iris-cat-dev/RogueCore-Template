#pragma once
#include "CoreMinimal.h"
#include "ElementConditionArray.h"
#include "ConditionalElementEvent.generated.h"

class UElementEventType;

USTRUCT(BlueprintType)
struct FConditionalElementEvent {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UElementEventType* EventType;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FElementConditionArray Conditions;
    
    ROGUECORE_API FConditionalElementEvent();
};

