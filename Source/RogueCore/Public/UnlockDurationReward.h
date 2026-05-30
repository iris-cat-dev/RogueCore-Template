#pragma once
#include "CoreMinimal.h"
#include "UnlockReward.h"
#include "UnlockDurationReward.generated.h"

class UStageDuration;

UCLASS(Blueprintable, EditInlineNew)
class UUnlockDurationReward : public UUnlockReward {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UStageDuration* duration;
    
public:
    UUnlockDurationReward();

};

