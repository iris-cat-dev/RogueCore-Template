#pragma once
#include "CoreMinimal.h"
#include "BXEUnlockAction.h"
#include "BXEAttributeUnlockAction.generated.h"

UCLASS(Abstract, Blueprintable, EditInlineNew)
class UBXEAttributeUnlockAction : public UBXEUnlockAction {
    GENERATED_BODY()
public:
    UBXEAttributeUnlockAction();

};

