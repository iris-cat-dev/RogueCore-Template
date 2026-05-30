#pragma once
#include "CoreMinimal.h"
#include "OnNewGoalDelegateDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FOnNewGoalDelegate, int32, SetGoal, int32, RepsPerSet);

