#pragma once
#include "CoreMinimal.h"
#include "BXEDroneChangedDelegate.generated.h"

class ABXECompanionDrone;

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FBXEDroneChanged, ABXECompanionDrone*, BXEDrone);

