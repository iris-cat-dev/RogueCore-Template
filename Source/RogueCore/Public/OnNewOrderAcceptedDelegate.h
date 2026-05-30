#pragma once
#include "CoreMinimal.h"
#include "OnNewOrderAcceptedDelegate.generated.h"

class UDrinkableDataAsset;

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOnNewOrderAccepted, UDrinkableDataAsset*, Order);

