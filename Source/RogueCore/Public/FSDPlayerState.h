#pragma once
#include "CoreMinimal.h"
#include "GameFramework/PlayerState.h"
#include "GameplayTagContainer.h"
#include "CharacterProgress.h"
#include "CurrencyRewardsForUI.h"
#include "EChatSenderType.h"
#include "EGameOwnerStatus.h"
#include "EquippedVanity.h"
#include "RewardTexts.h"
#include "Templates/SubclassOf.h"
#include "XPReward.h"
#include "GameFramework/PlayerState.h"
#include "FSDPlayerState.generated.h"

class AActor;
class AFSDPlayerController;
class APlayerCharacter;
class UBXENegotiationParticipantComponent;
class UBXEPlayerStateComponent;
class UDamageClass;
class UPerkAsset;
class UPlayerCharacterID;
class UPlayerRejoinState;
class UPlayerResourceComponent;
class UPlayerStatsComponent;
class URunHistoryStateComponent;
class USaveGameStateComponent;
class UVoteParticipantComponent;

UCLASS(Blueprintable)
class ROGUECORE_API AFSDPlayerState : public APlayerState {
    GENERATED_BODY()
public:
    DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FSupplyStatusChangedDelegate, float, ammoStatus01, float, healthStatus01);
    DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FSelectedCharacterChangedDelegate, TSubclassOf<APlayerCharacter>, newCharacter);
    DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FPlayerVoiceSignature, bool, IsTalking);
    DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FPlayerSpawnedSignature, APlayerCharacter*, PlayerCharacter);
    DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FPlayerNameChangedSignature, const FString&, NewName);
    DECLARE_DYNAMIC_MULTICAST_DELEGATE(FPerksUpdated);
    DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FLevelGenerationStateSignature, const FString&, NewState);
    DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FFractionLevelGeneratedDelegate, float, Fraction);
    DECLARE_DYNAMIC_MULTICAST_DELEGATE_ThreeParams(FEnemyKilledSignature, const FGameplayTagContainer&, enemyTags, AActor*, Enemy, UDamageClass*, DamageClass);
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FPlayerSpawnedSignature OnPlayerCharacterSpawned;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FPlayerVoiceSignature OnPlayerTalkingChanged;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FSelectedCharacterChangedDelegate OnSelectedCharacterChanged;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, ReplicatedUsing=OnRep_FractionLevelGenerated, meta=(AllowPrivateAccess=true))
    float FractionLevelGenerated;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, ReplicatedUsing=OnRep_LevelGenerationState, meta=(AllowPrivateAccess=true))
    FString LevelGenerationState;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FSupplyStatusChangedDelegate OnSupplyStatusChangedEvent;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FEnemyKilledSignature OnEnemyKilledEvent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Replicated, Transient, meta=(AllowPrivateAccess=true))
    FEquippedVanity LatestEquipedVanity;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UBXEPlayerStateComponent* BXEStateComponent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UBXENegotiationParticipantComponent* BXENegotiationParticipant;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UVoteParticipantComponent* VoteParticipant;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    URunHistoryStateComponent* RunHistoryStateComponent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, ReplicatedUsing=OnRep_SelectedCharacter, meta=(AllowPrivateAccess=true))
    TSubclassOf<APlayerCharacter> SelectedCharacter;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Replicated, Transient, meta=(AllowPrivateAccess=true))
    bool bIsServer;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool ShouldCopyProperties;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, ReplicatedUsing=OnRep_GameOwnerStatus, meta=(AllowPrivateAccess=true))
    uint8 gameOwnerStatus;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool IsOnSpaceRig;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UPlayerStatsComponent* PlayerStatsComponent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UPlayerRejoinState* RejoinState;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    USaveGameStateComponent* SaveGameStateComponent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, ReplicatedUsing=OnRep_PlayerCharacter, meta=(AllowPrivateAccess=true))
    APlayerCharacter* PlayerCharacter;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    bool IsInMission;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    bool IsTalking;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    bool HasGeneratedLevel;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Replicated, Transient, meta=(AllowPrivateAccess=true))
    bool HasSelectedCharacter;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FPlayerNameChangedSignature OnPlayerNameChanged;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FFractionLevelGeneratedDelegate OnFractionLevelGenerated;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FLevelGenerationStateSignature OnLevelGenerationStateChanged;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    UPlayerResourceComponent* PlayerResources;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, ReplicatedUsing=OnRep_SupplyAmmoStatus, meta=(AllowPrivateAccess=true))
    uint8 SupplyAmmoStatus;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, ReplicatedUsing=OnRep_SupplyHealthStatus, meta=(AllowPrivateAccess=true))
    uint8 SupplyHealthStatus;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FRewardTexts RewardTexts;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Replicated, Transient, meta=(AllowPrivateAccess=true))
    bool bIsLateJoinComplete;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Replicated, Transient, meta=(AllowPrivateAccess=true))
    bool bHaveLateJoinedAfterStageTimerStart;
    
public:
    AFSDPlayerState(const FObjectInitializer& ObjectInitializer);

    virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;

    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void TriggerLoadingScreenSalute();
    
    UFUNCTION(BlueprintCallable)
    void SetSelectedCharacterID(UPlayerCharacterID* characterID);
    
    UFUNCTION(BlueprintCallable)
    void SetSelectedCharacter(TSubclassOf<APlayerCharacter> newCharacter);
    
    UFUNCTION(BlueprintCallable)
    void SetLateJoinComplete(const bool IsComplete);
    
    UFUNCTION(BlueprintCallable)
    void SetHaveLateJoinedAfterStageTimerStart(const bool WasAfterTimer);
    
    UFUNCTION(BlueprintCallable)
    void SetHasGeneratedLevel(bool hasgenerated);
    
    UFUNCTION(BlueprintCallable)
    void SetCanOnlySpectate(bool canOnlySpectate);
    
protected:
    UFUNCTION(BlueprintCallable, Reliable, Server)
    void ServerSetSelectedCharacter(TSubclassOf<APlayerCharacter> newCharacter);
    
private:
    UFUNCTION(BlueprintCallable, Reliable, Server)
    void ServerInitializePerks(const TArray<UPerkAsset*>& ClassPerks, const TArray<UPerkAsset*>& Enhancements);
    
protected:
    UFUNCTION(BlueprintCallable, Reliable, Server)
    void Server_SetSupplyStatus(uint8 StatusHealth, uint8 StatusAmmo);
    
public:
    UFUNCTION(BlueprintCallable, Reliable, Server)
    void Server_SetGameOwnerStatus(int32 NewGameOwnerStatus);
    
protected:
    UFUNCTION(BlueprintCallable)
    void OnRep_SupplyHealthStatus();
    
    UFUNCTION(BlueprintCallable)
    void OnRep_SupplyAmmoStatus();
    
    UFUNCTION(BlueprintCallable)
    void OnRep_SelectedCharacter();
    
    UFUNCTION(BlueprintCallable)
    void OnRep_PlayerCharacter();
    
    UFUNCTION(BlueprintCallable)
    void OnRep_LevelGenerationState();
    
    UFUNCTION(BlueprintCallable)
    void OnRep_GameOwnerStatus();
    
    UFUNCTION(BlueprintCallable)
    void OnRep_FractionLevelGenerated();
    
public:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnLateJoinFinished();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsSelectedCharacterMaxLevel() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsLateJoinComplete() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool HaveLateJoinedAfterStageTimerStart() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool HasNormalOwnerStatus() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    TArray<FXPReward> GetXPRewardRogueCore() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    UVoteParticipantComponent* GetVoteParticipant() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 GetUIPing();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float GetSupplyHealthStatus() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float GetSupplyAmmoStatus() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 GetSelectedCharacterMaxLevel() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 GetSelectedCharacterLevel() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    UPlayerCharacterID* GetSelectedCharacterID() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    TSubclassOf<APlayerCharacter> GetSelectedCharacter() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FCharacterProgress GetSelectCharacterProgress();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    URunHistoryStateComponent* GetRunHistoryStateComponent() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    UPlayerResourceComponent* GetPlayerResourceComponent() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 GetPlayerRank() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool GetHasGeneratedLevel() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool GetGameOwnerStatus(EGameOwnerStatus status) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    AFSDPlayerController* GetFSDPlayerController() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FCurrencyRewardsForUI GetChipReward() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    EChatSenderType GetChatSenderType() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FCharacterProgress GetCharacterProgress(UPlayerCharacterID* characterID) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 GetCharacterLevel(UPlayerCharacterID* characterID) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    UBXENegotiationParticipantComponent* GetBXENegotiationParticipant() const;
    
protected:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void DebugTriggerReJoinSequence();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void DebugTriggerLateJoinSequence();
    
public:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void CharacterSelected();
    
};

