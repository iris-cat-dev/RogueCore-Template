#pragma once
#include "CoreMinimal.h"
#include "BXEUnlockConditionBase.h"
#include "NoPlayerHasThisUnlockCondition.generated.h"

UCLASS(Blueprintable, EditInlineNew)
class UNoPlayerHasThisUnlockCondition : public UBXEUnlockConditionBase {
    GENERATED_BODY()
public:
    UNoPlayerHasThisUnlockCondition();

};

