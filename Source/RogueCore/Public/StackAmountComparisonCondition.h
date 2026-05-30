#pragma once
#include "CoreMinimal.h"
#include "EStackComparisonMethod.h"
#include "ElementCondition.h"
#include "StackAmountComparisonCondition.generated.h"

UCLASS(Blueprintable, EditInlineNew)
class UStackAmountComparisonCondition : public UElementCondition {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 StackAmountCheck;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EStackComparisonMethod ComparisonMethod;
    
public:
    UStackAmountComparisonCondition();

};

