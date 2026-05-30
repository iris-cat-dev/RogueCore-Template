#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=DataAsset -FallbackName=DataAsset
#include "Reward.generated.h"

class UTexture2D;

UCLASS(Abstract, Blueprintable, EditInlineNew)
class UReward : public UDataAsset {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool IsSingleUse;
    
public:
    UReward();

    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsUnlockedPerClass() const;
    
    UFUNCTION(BlueprintCallable)
    UTexture2D* GetRewardTypeImage();
    
    UFUNCTION(BlueprintCallable)
    FText GetRewardText();
    
};

