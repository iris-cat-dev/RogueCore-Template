#pragma once
#include "CoreMinimal.h"
#include "Blueprint/UserWidget.h"
#include "RewardTreeLockWidget.generated.h"

class UObject;
class URewardTree;

UCLASS(Blueprintable, EditInlineNew)
class ROGUECORE_API URewardTreeLockWidget : public UUserWidget {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    URewardTree* EnhancementRewardTree;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 LockIndex;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 RequiredNodesToBuy;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 MeritPointCost;
    
public:
    URewardTreeLockWidget();

    UFUNCTION(BlueprintCallable, BlueprintPure, meta=(WorldContext="WorldContextObject"))
    bool IsLocked(const UObject* WorldContextObject) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 GetRequiredNodesToBuy() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 GetMeritPointCost() const;
    
};

