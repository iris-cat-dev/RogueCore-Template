#pragma once
#include "CoreMinimal.h"
#include "OnReportVoteResultDelegate.generated.h"

class UVoteOptionAction;

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOnReportVoteResult, const TArray<UVoteOptionAction*>, voteResult);

