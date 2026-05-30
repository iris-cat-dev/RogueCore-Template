#pragma once
#include "CoreMinimal.h"
#include "OpsComTaskEventDelegate.generated.h"

class UOpsComTaskAsset;

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FOpsComTaskEvent, const UOpsComTaskAsset*, TaskAsset, int32, Tier);

