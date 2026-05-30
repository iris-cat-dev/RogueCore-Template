#pragma once
#include "CoreMinimal.h"
#include "DownloadMetadataResultDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FDownloadMetadataResult, bool, success);

