#pragma once
#include "CoreMinimal.h"
#include "ElementCondition.h"
#include "EventElementCondition.generated.h"

class UElementEventType;

UCLASS(Blueprintable, EditInlineNew)
class UEventElementCondition : public UElementCondition {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UElementEventType* EventToCheck;
    
public:
    UEventElementCondition();

};

