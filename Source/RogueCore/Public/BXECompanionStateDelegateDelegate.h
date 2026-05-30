#pragma once
#include "CoreMinimal.h"
#include "EBXECompanionDroneState.h"
#include "BXECompanionStateDelegateDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FBXECompanionStateDelegate, EBXECompanionDroneState, State);

