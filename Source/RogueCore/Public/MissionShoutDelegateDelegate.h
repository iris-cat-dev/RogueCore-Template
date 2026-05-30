#pragma once
#include "CoreMinimal.h"
#include "EMissionControlID.h"
#include "MissionShoutDelegateDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_ThreeParams(FMissionShoutDelegate, const FText&, Text, float, duration, EMissionControlID, ControllerId);

