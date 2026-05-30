#pragma once
#include "CoreMinimal.h"
#include "EMinersManualSinglePage.h"
#include "OpenMinersManualDelegateDelegate.generated.h"

class UObject;

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_ThreeParams(FOpenMinersManualDelegate, UObject*, IdentifyingObject, bool, OpenSpecificPage, EMinersManualSinglePage, page);

