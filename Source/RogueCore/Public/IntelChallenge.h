#pragma once
#include "CoreMinimal.h"
#include "SavableDataAsset.h"
#include "IntelChallenge.generated.h"

UCLASS(Abstract, Blueprintable)
class UIntelChallenge : public USavableDataAsset {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FText Description;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 IntelReward;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    bool bIsActive;
    
public:
    UIntelChallenge();

protected:
    UFUNCTION(BlueprintCallable)
    void SetStatValue(const float NewValue);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void OnStopTracking();
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void OnStartTracking();
    
public:
    UFUNCTION(BlueprintCallable)
    void MarkChallengeComplete();
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    int32 GetTargetValue() const;
    
protected:
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 GetStatValueAsInt() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float GetStatValue() const;
    
public:
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 GetIntelReward() const;
    
protected:
    UFUNCTION(BlueprintCallable)
    void BroadcastComplete();
    
};

