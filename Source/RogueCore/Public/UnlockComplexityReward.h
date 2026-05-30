#pragma once
#include "CoreMinimal.h"
#include "UnlockReward.h"
#include "UnlockComplexityReward.generated.h"

class UStageComplexity;

UCLASS(Blueprintable, EditInlineNew)
class UUnlockComplexityReward : public UUnlockReward {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UStageComplexity* Complexity;
    
public:
    UUnlockComplexityReward();

};

