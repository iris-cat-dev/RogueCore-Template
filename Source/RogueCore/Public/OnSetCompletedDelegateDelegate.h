#pragma once
#include "CoreMinimal.h"
#include "OnSetCompletedDelegateDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FOnSetCompletedDelegate, int32, newAmount, bool, triggerShout);

