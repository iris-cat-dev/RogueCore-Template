#pragma once
#include "CoreMinimal.h"
#include "OnHealthChangedDelegateDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOnHealthChangedDelegate, int32, Health);

