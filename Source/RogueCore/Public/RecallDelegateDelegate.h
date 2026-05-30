#pragma once
#include "CoreMinimal.h"
#include "RecallDelegateDelegate.generated.h"

class URecallableProjectileComponent;

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FRecallDelegate, URecallableProjectileComponent*, RecallComponent);

