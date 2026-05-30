#pragma once
#include "CoreMinimal.h"
#include "DownloadSaveGameResultDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FDownloadSaveGameResult, bool, success);

