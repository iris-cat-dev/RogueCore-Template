#pragma once
#include "CoreMinimal.h"
#include "ElementState.h"
#include "ElementStateDelegateDelegate.generated.h"

class UElementType;

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FElementStateDelegate, UElementType*, ElementType, const FElementState&, ElementState);

