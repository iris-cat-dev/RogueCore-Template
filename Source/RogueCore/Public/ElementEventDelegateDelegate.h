#pragma once
#include "CoreMinimal.h"
#include "ElementEventDelegateDelegate.generated.h"

class UElementEventType;
class UElementType;

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FElementEventDelegate, UElementEventType*, EventType, UElementType*, ElementType);

