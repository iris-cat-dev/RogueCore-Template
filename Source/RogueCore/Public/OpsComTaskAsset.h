#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Guid -FallbackName=Guid
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=DataAsset -FallbackName=DataAsset
#include "TaskTier.h"
#include "OpsComTaskAsset.generated.h"

class UMissionStat;
class UObject;
class UOpsComTaskAsset;
class UPlayerCharacterID;
class UReward;
class UTexture2D;

UCLASS(Blueprintable)
class UOpsComTaskAsset : public UDataAsset {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGuid SavegameID;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftObjectPtr<UTexture2D> LargeImage;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FText FormattedTitle;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 FormattedValueOffset;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool CountValueAsTotal;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UMissionStat* TrackingStat;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float MeritReward;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UPlayerCharacterID* TrackingCharacterID;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FTaskTier> Tiers;
    
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    int32 LastTierOnTierReachedBroadcast;
    
    UOpsComTaskAsset();

    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContext"))
    static TArray<UOpsComTaskAsset*> SortTasksByProgress(UObject* WorldContext, UPARAM(Ref) TArray<UOpsComTaskAsset*>& InTasks);
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContext"))
    void OnStatChanged(UObject* WorldContext, UMissionStat* Stat, float Value, float change);
    
    UFUNCTION(BlueprintCallable, BlueprintPure, meta=(WorldContext="WorldContext"))
    bool IsCompleted(const UObject* WorldContext) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure, meta=(WorldContext="WorldContext"))
    bool IsClaimable(const UObject* WorldContext) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FText GetTitleForTier(int32 InTier) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure, meta=(WorldContext="WorldContext"))
    FText GetTitle(const UObject* WorldContext) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    UReward* GetRewardForTier(int32 InTier) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure, meta=(WorldContext="WorldContext"))
    int32 GetCurrentTier(const UObject* WorldContext) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure, meta=(WorldContext="WorldContext"))
    void GetCurrentProgress(const UObject* WorldContext, int32& OutTier, float& OutProgress, float& OutCurrentCount, float& OutTargetCount) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure, meta=(WorldContext="WorldContext"))
    int32 GetClaimedTier(const UObject* WorldContext) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure, meta=(WorldContext="WorldContext"))
    bool GetClaimedProgress(const UObject* WorldContext, int32& OutTier, float& OutProgress, float& OutCurrentCount, float& OutTargetCount) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    UTexture2D* GetCategoryIcon() const;
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContext"))
    int32 ClaimNextTier(UObject* WorldContext);
    
};

