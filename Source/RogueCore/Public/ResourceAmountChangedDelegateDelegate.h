#pragma once
#include "CoreMinimal.h"
#include "ResourceAmountChangedDelegateDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FResourceAmountChangedDelegate, float, previousAmount, float, newAmount);

