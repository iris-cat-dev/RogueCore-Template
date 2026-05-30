#pragma once
#include "CoreMinimal.h"
#include "DroneControllerUseInfo.h"
#include "DroneControllerDelegateDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FDroneControllerDelegate, const FDroneControllerUseInfo&, Info);

