#pragma once
#include "CoreMinimal.h"
#include "OnRepCompletedDelegateDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOnRepCompletedDelegate, int32, newAmount);

