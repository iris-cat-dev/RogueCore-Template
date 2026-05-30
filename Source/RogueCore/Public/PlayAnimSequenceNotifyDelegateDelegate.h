#pragma once
#include "CoreMinimal.h"
#include "PlayAnimSequenceNotifyDelegateDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FPlayAnimSequenceNotifyDelegate, FName, NotifyName);

