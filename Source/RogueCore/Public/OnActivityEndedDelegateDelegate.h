#pragma once
#include "CoreMinimal.h"
#include "OnActivityEndedDelegateDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOnActivityEndedDelegate, bool, success);

