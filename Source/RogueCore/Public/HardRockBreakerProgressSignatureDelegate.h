#pragma once
#include "CoreMinimal.h"
#include "HardRockBreakerProgressSignatureDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FHardRockBreakerProgressSignature, float, Progress);

