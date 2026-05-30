#pragma once
#include "CoreMinimal.h"
#include "OnEntitlementAnnouncedDelegate.generated.h"

class UAdvertisedEntitlement;

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOnEntitlementAnnounced, UAdvertisedEntitlement*, Entitlement);

