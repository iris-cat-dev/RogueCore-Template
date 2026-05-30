#pragma once
#include "CoreMinimal.h"
#include "BXEUnlockConditionBase.h"
#include "EMultiConditionComparison.h"
#include "UnlockMultiCondition.generated.h"

UCLASS(Blueprintable, EditInlineNew)
class UUnlockMultiCondition : public UBXEUnlockConditionBase {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EMultiConditionComparison Comparison;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    TArray<UBXEUnlockConditionBase*> Conditions;
    
public:
    UUnlockMultiCondition();

};

