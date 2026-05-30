#pragma once
#include "CoreMinimal.h"
#include "BXENegotiationData.h"
#include "OnReportNegotiationResultDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOnReportNegotiationResult, const FBXENegotiationData&, negotiationResult);

