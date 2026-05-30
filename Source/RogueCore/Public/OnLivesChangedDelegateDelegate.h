#pragma once
#include "CoreMinimal.h"
#include "OnLivesChangedDelegateDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOnLivesChangedDelegate, int32, Lives);

