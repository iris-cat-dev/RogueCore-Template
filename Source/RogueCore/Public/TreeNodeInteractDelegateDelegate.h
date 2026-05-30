#pragma once
#include "CoreMinimal.h"
#include "TreeNodeInteractDelegateDelegate.generated.h"

class URewardTreeNodeWidget;

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FTreeNodeInteractDelegate, URewardTreeNodeWidget*, Widget);

