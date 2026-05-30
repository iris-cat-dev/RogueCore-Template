#pragma once
#include "CoreMinimal.h"
#include "OnNewGymGoalDelegateDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FOnNewGymGoalDelegate, int32, SetAmount, int32, RepsPerSet);

