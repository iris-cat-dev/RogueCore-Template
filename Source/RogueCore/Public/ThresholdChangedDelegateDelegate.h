#pragma once
#include "CoreMinimal.h"
#include "ThresholdChangedDelegateDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FThresholdChangedDelegate, float, XPosition, float, Size);

