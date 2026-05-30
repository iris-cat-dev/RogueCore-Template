#pragma once
#include "CoreMinimal.h"
#include "ElementEventType.h"
#include "ElementEventTypeBase.generated.h"

UCLASS(Abstract, Blueprintable)
class UElementEventTypeBase : public UElementEventType {
    GENERATED_BODY()
public:
    UElementEventTypeBase();

};

