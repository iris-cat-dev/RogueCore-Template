#pragma once
#include "CoreMinimal.h"
#include "OnPointAddedDelegateDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOnPointAddedDelegate, int32, Calories);

