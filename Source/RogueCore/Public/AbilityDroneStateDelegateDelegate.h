#pragma once
#include "CoreMinimal.h"
#include "EAbilityDroneState.h"
#include "AbilityDroneStateDelegateDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FAbilityDroneStateDelegate, EAbilityDroneState, State);

