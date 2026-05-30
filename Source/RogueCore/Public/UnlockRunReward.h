#pragma once
#include "CoreMinimal.h"
#include "Reward.h"
#include "UnlockRunReward.generated.h"

class URunTemplate;

UCLASS(Blueprintable, EditInlineNew)
class UUnlockRunReward : public UReward {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    URunTemplate* Run;
    
public:
    UUnlockRunReward();

};

