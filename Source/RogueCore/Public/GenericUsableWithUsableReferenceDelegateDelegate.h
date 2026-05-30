#pragma once
#include "CoreMinimal.h"
#include "GenericUsableWithUsableReferenceDelegateDelegate.generated.h"

class UUsableComponentBase;

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FGenericUsableWithUsableReferenceDelegate, UUsableComponentBase*, usable);

