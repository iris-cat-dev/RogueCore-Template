#pragma once
#include "CoreMinimal.h"
#include "ElementCondition.h"
#include "DeadElementCondition.generated.h"

UCLASS(Blueprintable, EditInlineNew)
class UDeadElementCondition : public UElementCondition {
    GENERATED_BODY()
public:
    UDeadElementCondition();

};

