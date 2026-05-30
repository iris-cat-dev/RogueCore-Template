#pragma once
#include "CoreMinimal.h"
#include "OnRepTimerChangedDelegateDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOnRepTimerChangedDelegate, float, Precentage);

