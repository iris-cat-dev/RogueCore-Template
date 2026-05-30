#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Guid -FallbackName=Guid
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Object -FallbackName=Object
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=RandomStream -FallbackName=RandomStream
#include "DelegateDelegate.h"
#include "EEnemyHealthScaling.h"
#include "EMissionShoutID.h"
#include "ERunDepth.h"
#include "ERunType.h"
#include "IntDelegateDelegate.h"
#include "RunCreationParameters.h"
#include "RunState.h"
#include "RunStatistics.h"
#include "RunManager.generated.h"

class AActor;
class ADebrisDataActor;
class UBXEAmmoUnlockManager;
class UBXEGameStateComponent;
class UBXELogicUnlockManager;
class UBXENegotiationManager;
class UBXEUnlockBase;
class UBiome;
class UReadyUpManager;
class URiskVector;
class URun;
class URunHistoryManager;
class URunTemplate;
class UStage;
class UStageTemplateDifficulty;
class UUnlockCollectionTag;
class UVoteManager;

UCLASS(Blueprintable, DefaultToInstanced)
class URunManager : public UObject {
    GENERATED_BODY()
public:
    DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FRunManagerStageDelegate, UStage*, Stage);
    DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FRunManagerRunDelegate, URun*, Run);
    DECLARE_DYNAMIC_MULTICAST_DELEGATE(FRunManagerDelegate);
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FDelegate OnRiftBossFightOver;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FDelegate OnRewardTreeReset;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FRunManagerDelegate OnActiveRunChangedDelegate;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FRunManagerRunDelegate OnGeneratedRun;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FRunManagerStageDelegate OnActiveStageChanged;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FDelegate OnExpeniteMined;
    
protected:
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FIntDelegate OnXpChanged;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FIntDelegate OnLevelChanged;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FDelegate OnArtifactChanged;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FDelegate OnPotentExpeniteChanged;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UBXENegotiationManager* NegotiationManager;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UReadyUpManager* ReadyUpManager;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UVoteManager* VoteManager;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    URunHistoryManager* RunHistoryManager;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UBXELogicUnlockManager* LogicUnlockManager;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UBXEAmmoUnlockManager* AmmoUnlockManager;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    UBXEGameStateComponent* GameStateComponent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    FRunState RunState;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    FRunStatistics RunStatistics;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    URun* ActiveRun;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    float CurrentCaveDepth;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    int32 ObjectiveRewardRegistered;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    FRandomStream EquipmentRandomStream;
    
    UPROPERTY(EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TArray<TWeakObjectPtr<AActor>> LevelUpBlockers;
    
public:
    URunManager();

    UFUNCTION(BlueprintCallable)
    void StartRun(const FRunCreationParameters& Parameters);
    
    UFUNCTION(BlueprintCallable)
    void RemoveLevelUpBlocker(AActor* blocker);
    
    UFUNCTION(BlueprintCallable)
    void RemoveAllAdditionalRiskVectors();
    
    UFUNCTION(BlueprintCallable)
    void RemoveAdditionalRiskVector(URiskVector* RiskVector);
    
    UFUNCTION(BlueprintCallable)
    void PotentExpeniteDispensed();
    
    UFUNCTION(BlueprintCallable)
    void PotentExpeniteCollected();
    
private:
    UFUNCTION(BlueprintCallable)
    void OnObjectivesChanged();
    
public:
    UFUNCTION(BlueprintCallable)
    bool MoveToNextStage();
    
    UFUNCTION(BlueprintCallable)
    void MoveToLastStage(const int32 Offset);
    
    UFUNCTION(BlueprintAuthorityOnly, BlueprintCallable, BlueprintPure=false, meta=(WorldContext="WorldContext"))
    void MissionShout(UObject* WorldContext, EMissionShoutID InShoutID) const;
    
    UFUNCTION(BlueprintCallable)
    void MarkRiftBossFightOver();
    
    UFUNCTION(BlueprintCallable)
    void MarkActiveStageComplete();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsStageComplete(int32 branchIndex) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsSecondToLastStageActive() const;
    
    UFUNCTION(BlueprintCallable)
    bool IsLevelUpBlocked();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsLastStageActive() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsFirstStageActive() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsActiveStageCompleted() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsActive() const;
    
    UFUNCTION(BlueprintCallable)
    void IncrementTotalArtifactGiversSpawned();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool HaveActiveStage() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool HaveActiveRun() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool HasUnclaimedRewards() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool HasPendingPotentExpeniteUpgrade() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool HasPendingArtifactUpgrade() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float GetWaveIntervalMultiplier() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    UVoteManager* GetVoteManager() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 GetUnclaimedRewards() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    void GetTotalObjectivesCompleted(int32& OutCount) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 GetTotalArtifactGiversSpawned() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FString GetStageSeedString() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FText GetStageName(int32 branchIndex) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    UStage* GetStageAtIndex(const int32 StageIndex) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 GetRunXp() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 GetRunSeed() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    URunHistoryManager* GetRunHistoryManager() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 GetRewardsAwarded() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    UReadyUpManager* GetReadyUpManager() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 GetRandomEquipmentSeed() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 GetPotentExpeniteDispensed() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 GetPotentExpeniteCollected() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    void GetPerObjectiveXP(int32& perObjective) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    void GetPerKillXP(int32& perKill) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    void GetPerExpeniteXP(int32& perExpenite) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 GetNumberOfStages() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 GetNumberOfCompletedStages() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float GetNextLevelXP() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    UBXENegotiationManager* GetNegotiationManager() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    TSoftClassPtr<ADebrisDataActor> GetModeExtraDebris() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 GetLevel() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    void GetExpeniteCollected(int32& outCollected) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float GetEnemyResistanceModifier(EEnemyHealthScaling healthScaling) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float GetEnemyDamageModifier() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float GetCurrentXP() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float GetCurrentPotentialXP() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float GetCurrentPotentialLevelProgress() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float GetCurrentLevelProgress() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    UBiome* GetBiomeFromStageID(int32 stageID) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 GetArtifactsDispensed() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 GetArtifactsCollected() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 GetActiveStageIndex() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    UStageTemplateDifficulty* GetActiveStageDifficulty() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    UStage* GetActiveStage() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    ERunType GetActiveRunType() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    URunTemplate* GetActiveRunTemplate() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FString GetActiveRunString() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FText GetActiveRunName() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FGuid GetActiveRunId() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    ERunDepth GetActiveRunDepth() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    URun* GetActiveRun() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    void GetAccumulatedObjectiveXP(int32& perPrimary) const;
    
    UFUNCTION(BlueprintCallable)
    void ClearRun();
    
    UFUNCTION(BlueprintCallable)
    void CheatPrintStages();
    
    UFUNCTION(BlueprintCallable)
    bool Cheat_DroneApplyUnlock(UBXEUnlockBase* InUnlock);
    
    UFUNCTION(BlueprintAuthorityOnly, BlueprintCallable)
    void BeginNegotiation(UUnlockCollectionTag* InCollectionTag, int32 OverrideSeed);
    
    UFUNCTION(BlueprintCallable)
    void ArtifactDispensed();
    
    UFUNCTION(BlueprintCallable)
    void ArtifactCollected();
    
    UFUNCTION(BlueprintCallable)
    void AddReward();
    
    UFUNCTION(BlueprintCallable)
    void AddLevelUpBlocker(AActor* blocker);
    
    UFUNCTION(BlueprintCallable)
    void AddAdditionalRiskVector(URiskVector* RiskVector, const bool IsActiveInSingleStage, const int32 StageIndexToActivate);
    
};

