#pragma once
#include "CoreMinimal.h"
#include "OnPlayerCountChangedDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOnPlayerCountChanged, int32, PlayerCount);

