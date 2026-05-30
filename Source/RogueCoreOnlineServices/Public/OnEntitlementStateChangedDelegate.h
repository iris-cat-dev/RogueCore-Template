#pragma once
#include "CoreMinimal.h"
#include "OnEntitlementStateChangedDelegate.generated.h"

class UBaseEntitlement;

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FOnEntitlementStateChanged, UBaseEntitlement*, Entitlement, bool, IsUnLocked);

