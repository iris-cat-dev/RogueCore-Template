#pragma once
#include "CoreMinimal.h"
#include "OnNewPBDelegateDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOnNewPBDelegate, int32, PB);

