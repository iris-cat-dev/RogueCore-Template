#pragma once
#include "CoreMinimal.h"
#include "OnSectionLogAddedDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOnSectionLogAdded, int32, Index);

