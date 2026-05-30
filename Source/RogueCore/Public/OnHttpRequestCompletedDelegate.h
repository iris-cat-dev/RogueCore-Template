#pragma once
#include "CoreMinimal.h"
#include "WebBanner.h"
#include "OnHttpRequestCompletedDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOnHttpRequestCompleted, const TArray<FWebBanner>&, WebBanners);

