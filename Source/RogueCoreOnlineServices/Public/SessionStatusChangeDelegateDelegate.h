#pragma once
#include "CoreMinimal.h"
#include "EOnlineSessionStatus.h"
#include "SessionStatusChangeDelegateDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FSessionStatusChangeDelegate, EOnlineSessionStatus, OldStatus, EOnlineSessionStatus, NewStatus);

