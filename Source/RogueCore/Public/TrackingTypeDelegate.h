#pragma once
#include "CoreMinimal.h"
#include "EOutline.h"
#include "TrackingTypeDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_ThreeParams(FTrackingType, EOutline, Type, bool, Active, bool, checkIfOwnerIsAlive);

