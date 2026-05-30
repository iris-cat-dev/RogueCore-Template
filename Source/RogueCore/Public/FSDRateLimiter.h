#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Object -FallbackName=Object
#include "OnOpenRateLimitDelegate.h"
#include "FSDRateLimiter.generated.h"

UCLASS(Blueprintable)
class ROGUECORE_API UFSDRateLimiter : public UObject {
    GENERATED_BODY()
public:
    UFSDRateLimiter();

    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool RateLimted();
    
    UFUNCTION(BlueprintCallable)
    void K2_Enqueue(FOnOpenRateLimit OnRateLimitOpen, const FString& ID);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsQueueEmpty();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsQueued(const FString& ID);
    
    UFUNCTION(BlueprintCallable)
    void Init(int32 rateLimit, float rateTimeLimit, bool useBurstLimit, int32 burstLimit, float burstTimeLimit);
    
    UFUNCTION(BlueprintCallable)
    void IncreaseLimitCounter();
    
};

