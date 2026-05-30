#pragma once
#include "CoreMinimal.h"
#include "NormalWaveSpawnedDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FNormalWaveSpawned, float, TimeToNextWave);

