#pragma once
#include "CoreMinimal.h"
#include "ParsedRunHistoryEntry.h"
#include "OnCharacterDataLoadedDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FOnCharacterDataLoaded, const FParsedRunHistoryEntry&, Entry, int32, HistoryIndex);

