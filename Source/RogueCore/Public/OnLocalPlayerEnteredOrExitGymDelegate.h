#pragma once
#include "CoreMinimal.h"
#include "OnLocalPlayerEnteredOrExitGymDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOnLocalPlayerEnteredOrExitGym, bool, entered);

