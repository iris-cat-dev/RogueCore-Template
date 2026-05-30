#pragma once
#include "CoreMinimal.h"
#include "ESpawnLordState.h"
#include "SpawnLordStateDelegateDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FSpawnLordStateDelegate, ESpawnLordState, stateValue);

