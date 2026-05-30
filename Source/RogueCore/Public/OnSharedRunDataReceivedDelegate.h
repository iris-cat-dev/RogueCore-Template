#pragma once
#include "CoreMinimal.h"
#include "SharedRunData.h"
#include "OnSharedRunDataReceivedDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOnSharedRunDataReceived, const FSharedRunData&, SharedData);

