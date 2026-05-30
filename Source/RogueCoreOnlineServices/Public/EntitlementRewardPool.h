#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Interface -FallbackName=Interface
#include "EntitlementRewardPool.generated.h"

class UObject;

UINTERFACE(BlueprintType, MinimalAPI, meta=(CannotImplementInterfaceInBlueprint))
class UEntitlementRewardPool : public UInterface {
    GENERATED_BODY()
};

class IEntitlementRewardPool : public IInterface {
    GENERATED_BODY()
public:
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    virtual bool RevokeRewards(UObject* WorldContextObject) PURE_VIRTUAL(RevokeRewards, return false;);
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    virtual bool HasBeenRewarded(UObject* WorldContextObject) PURE_VIRTUAL(HasBeenRewarded, return false;);
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    virtual bool GiveRewards(UObject* WorldContextObject, UObject* RewardTarget) PURE_VIRTUAL(GiveRewards, return false;);
    
};

