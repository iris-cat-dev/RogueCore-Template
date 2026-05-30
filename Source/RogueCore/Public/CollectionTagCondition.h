#pragma once
#include "CoreMinimal.h"
#include "ERarityComparision.h"
#include "RarityConditionBase.h"
#include "CollectionTagCondition.generated.h"

class UUnlockCollectionTag;

UCLASS(Blueprintable, EditInlineNew)
class UCollectionTagCondition : public URarityConditionBase {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UUnlockCollectionTag* CollectionCondition;
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    ERarityComparision Comparison;
    
public:
    UCollectionTagCondition();

};

