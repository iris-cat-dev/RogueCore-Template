#pragma once
#include "CoreMinimal.h"
#include "CollectionConditionBase.h"
#include "LocalPlayerHasCollectionCondition.generated.h"

UCLASS(Blueprintable, EditInlineNew)
class ULocalPlayerHasCollectionCondition : public UCollectionConditionBase {
    GENERATED_BODY()
public:
    ULocalPlayerHasCollectionCondition();

};

