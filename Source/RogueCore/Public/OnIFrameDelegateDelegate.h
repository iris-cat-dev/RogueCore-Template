#pragma once
#include "CoreMinimal.h"
#include "OnIFrameDelegateDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOnIFrameDelegate, bool, On);

