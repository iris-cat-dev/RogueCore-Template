#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Timespan -FallbackName=Timespan
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=GameInstanceSubsystem -FallbackName=GameInstanceSubsystem
#include "DelegateDelegate.h"
#include "DeploymentEventDelegate.h"
#include "DeploymentInfo.h"
#include "OpsComTaskEventDelegate.h"
#include "MasterySubsystem.generated.h"

class UCosmeticSheet;
class UFSDSaveGame;
class UMissionStat;
class UObject;
class UResourceData;

UCLASS(Blueprintable)
class ROGUECORE_API UMasterySubsystem : public UGameInstanceSubsystem {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    FOpsComTaskEvent OnTaskTierClaimable;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    FOpsComTaskEvent OnTaskTierClaimed;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    FDeploymentEvent OnDeploymentClaimable;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    FDelegate OnUpdateDeploymentUI;
    
    UMasterySubsystem();

    UFUNCTION(BlueprintCallable)
    FTimespan TimeToNewDeployment();
    
    UFUNCTION(BlueprintCallable)
    void RerollDeployment(int32 Index);
    
private:
    UFUNCTION(BlueprintCallable)
    void OnSaveGameLoaded(UFSDSaveGame* InSaveGame);
    
protected:
    UFUNCTION(BlueprintCallable)
    void OnResourceAmountChanged(const UResourceData* Resource, float previousAmount, float newAmount);
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContext"))
    void OnDeploymentStatChanged(UObject* WorldContext, UMissionStat* Stat, float Value, float change);
    
public:
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsDeploymentClaimable(const FDeploymentInfo& InDeploymentInfo) const;
    
    UFUNCTION(BlueprintCallable)
    void InitializeDeployments();
    
    UFUNCTION(BlueprintCallable, BlueprintPure, meta=(WorldContext="InWorldContext"))
    static int32 GetNumberOfUnlockedDeploymentSlots(const UObject* InWorldContext);
    
    UFUNCTION(BlueprintCallable)
    TArray<FDeploymentInfo> GetAndAddNewActiveDeployments(bool canGenerateNewDeployment);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    UResourceData* GetActiveCosmeticToken() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    UCosmeticSheet* GetActiveCosmeticSheet() const;
    
    UFUNCTION(BlueprintCallable)
    void ClaimDeployment(const FDeploymentInfo& InDeploymentInfo);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool CanRerollDeployment() const;
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="InWorldContext"))
    void BuyDeploymentSlot(const UObject* InWorldContext);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool AllCosmeticTokensRewardedForSheet() const;
    
};

