#pragma once
#include "CoreMinimal.h"
#include "ParsedRunHistoryEntry.h"
#include "OnRunHistoryDataReceivedDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOnRunHistoryDataReceived, const FParsedRunHistoryEntry&, Entry);

