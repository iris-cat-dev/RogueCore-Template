#pragma once
#include "CoreMinimal.h"
#include "Reward.h"
#include "CustomizerReward.generated.h"

class UCustomizationDataAsset;

UCLASS(Blueprintable, EditInlineNew)
class UCustomizerReward : public UReward {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UCustomizationDataAsset* RewardedCustomization;
    
public:
    UCustomizerReward();

};

