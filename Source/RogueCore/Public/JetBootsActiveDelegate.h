#pragma once
#include "CoreMinimal.h"
#include "JetBootsActiveDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FJetBootsActive, bool, IsActive);

