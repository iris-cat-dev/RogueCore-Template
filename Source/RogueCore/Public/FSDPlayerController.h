#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Transform -FallbackName=Transform
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Vector -FallbackName=Vector
#include "ClientDamageRapport.h"
#include "ClientRadialDamageRapport.h"
#include "DelegateDelegate.h"
#include "EAbilityActivationMode.h"
#include "EAboutToPlayReason.h"
#include "EArmorDamageType.h"
#include "EChatSenderType.h"
#include "ESpacerigStartType.h"
#include "FSDPlayerControllerBase.h"
#include "Templates/SubclassOf.h"
#include "FSDPlayerController.generated.h"

class AActor;
class ADeepPathfinderCharacter;
class AFSDPlayerState;
class AHUD;
class APawn;
class APlayerCharacter;
class UDamageComponent;
class UDamageReplicator;
class UFSDWidgetEffectsComponent;
class UInputComponent;
class UItemID;
class UItemSkin;
class UPickaxePart;
class UPlayerCharacterID;
class UResourceData;
class USimpleArmorDamageComponent;
class USkinTreasureRewarder;
class USoundCue;
class UTerrainLatejoinComponent;
class UTexture2D;
class UTreasureRewarder;
class UTutorialContentWidget;
class UVanityItem;
class UVictoryPose;

UCLASS(Blueprintable)
class ROGUECORE_API AFSDPlayerController : public AFSDPlayerControllerBase {
    GENERATED_BODY()
public:
    DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FReceivingVoiceSignature, bool, isRecieving);
    DECLARE_DYNAMIC_MULTICAST_DELEGATE(FReceivedEndLevelDelegate);
    DECLARE_DYNAMIC_MULTICAST_DELEGATE_FiveParams(FOnShowTutorialHint, const FText&, Text, const FText&, Title, const FText&, TaskText, UTexture2D*, Image, float, duration);
    DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOnPlayerCharacterPossesed, APawn*, Pawn);
    DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOnHideTutorialHint, bool, wasWatched);
    DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FOnChangeTutorialWidget, TSubclassOf<UTutorialContentWidget>, TutorialWidget, bool, bIgnoreQueue);
    DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOnChangeTutorialHintDuration, float, NewDuration);
    DECLARE_DYNAMIC_MULTICAST_DELEGATE(FLevelFinishedSignature);
    DECLARE_DYNAMIC_MULTICAST_DELEGATE(FChatOpenedDelegate);
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FLevelFinishedSignature OnStageSucceeded;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FLevelFinishedSignature OnStageFailed;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FLevelFinishedSignature OnRunSucceeded;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FLevelFinishedSignature OnRunFailed;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FReceivedEndLevelDelegate OnEndLevelReceived;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FReceivingVoiceSignature OnReceiveVoiceChanged;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FReceivingVoiceSignature OnTransmitVoiceChanged;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnShowTutorialHint OnShowTutorialHint;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnChangeTutorialWidget OnShowTutorialWidget;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnChangeTutorialHintDuration OnChangeTutorialHintDuration;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnHideTutorialHint OnHideCurrentTutorialHint;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnPlayerCharacterPossesed OnPlayerCharacterPossesed;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UDamageReplicator* DamageReplicator;
    
    UPROPERTY(BlueprintAssignable, BlueprintCallable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FChatOpenedDelegate OnChatOpened;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Replicated, meta=(AllowPrivateAccess=true))
    ADeepPathfinderCharacter* DebugEnemy;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, ReplicatedUsing=OnRep_DebugEnemyLocation, meta=(AllowPrivateAccess=true))
    FVector DebugEnemyLocation;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Replicated, meta=(AllowPrivateAccess=true))
    float DebugEnemySpeed;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Replicated, meta=(AllowPrivateAccess=true))
    float DebugEnemySpeedMod;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ADeepPathfinderCharacter* DebugEnemyLast;
    
    UPROPERTY(BlueprintAssignable, BlueprintCallable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FDelegate OnPlayerClassChangeSuccess;
    
    UPROPERTY(BlueprintAssignable, BlueprintCallable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FDelegate OnPlayerClassChangeFailure;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UTerrainLatejoinComponent* LateJoinComponent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool IsOnSpaceRig;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    bool ServerTravelDone;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UFSDWidgetEffectsComponent* WidgetEffects;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    ESpacerigStartType SpacerigSpawnType;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bDetectGravityChanges;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    bool bIsLoadingScreenFinished;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    UInputComponent* AbilityInputComponent;
    
public:
    AFSDPlayerController(const FObjectInitializer& ObjectInitializer);

    virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;

    UFUNCTION(BlueprintCallable)
    void UpdatePlayerProgress();
    
    UFUNCTION(BlueprintCallable)
    void ToggleVoiceOn(bool Enabled);
    
protected:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void StartLevelEndSequenceWhenReady();
    
    UFUNCTION(BlueprintCallable)
    void StartLevelEndSequence(const bool ShowEndScreen);
    
public:
    UFUNCTION(BlueprintCallable)
    void SpawnHUDLocal(TSubclassOf<AHUD> HUDClass);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void SpawnHUDAsync();
    
    UFUNCTION(BlueprintCallable)
    void ShowTutorialWidget(TSubclassOf<UTutorialContentWidget> TutorialWidget, bool ignoreQueue);
    
    UFUNCTION(BlueprintCallable)
    void ShowTutorialHint(const FText& Text, const FText& Title, const FText& TaskText, UTexture2D* Image, float duration);
    
    UFUNCTION(BlueprintCallable)
    void SetPlayerStart(AActor* Start);
    
    UFUNCTION(BlueprintCallable, Reliable, Server)
    void SetPlayersAllowedToPickSameClass(const bool CanPickSameClass);
    
    UFUNCTION(BlueprintCallable, Reliable, Server)
    void ServerSetUserHoldToRun(bool Value);
    
    UFUNCTION(BlueprintCallable, Reliable, Server)
    void Server_TravelDone();
    
    UFUNCTION(BlueprintCallable, Reliable, Server)
    void Server_TakeDamageFrom(UDamageComponent* Damage, FVector Location);
    
    UFUNCTION(BlueprintCallable, Reliable, Server)
    void Server_StartNamedCountdownWithQuickFinish(const FName Name, const int32 CountdownSeconds);
    
    UFUNCTION(BlueprintCallable, Reliable, Server)
    void Server_StartNamedCountdown(const FName Name, const int32 CountdownSeconds);
    
    UFUNCTION(BlueprintCallable, Reliable, Server)
    void Server_SetLateJoinDone();
    
    UFUNCTION(BlueprintCallable, Reliable, Server)
    void Server_SetGenerationStatus(const FString& status, float Fraction);
    
    UFUNCTION(BlueprintCallable, Reliable, Server)
    void Server_SetGenerationFraction(float Fraction);
    
    UFUNCTION(BlueprintCallable, Reliable, Server)
    void Server_SetGenerationDone();
    
    UFUNCTION(BlueprintCallable, Reliable, Server)
    void Server_SetDebugEnemy(ADeepPathfinderCharacter* NewDebugEnemy);
    
    UFUNCTION(BlueprintCallable, Reliable, Server)
    void Server_SetControllerReady();
    
    UFUNCTION(BlueprintCallable, Reliable, Server)
    void Server_RestartPlayerAtTransform(const FTransform& Transform);
    
    UFUNCTION(BlueprintCallable, Reliable, Server)
    void Server_ResetNamedCountdown(const FName Name);
    
    UFUNCTION(BlueprintCallable, Reliable, Server)
    void Server_ResetHUD();
    
    UFUNCTION(BlueprintCallable, Reliable, Server)
    void Server_Relay_SetArmorIndexDestroyed(USimpleArmorDamageComponent* ArmorComponent, int32 Index, EArmorDamageType DamageType);
    
    UFUNCTION(BlueprintCallable, Reliable, Server)
    void Server_ReceiveClientRadialDamageRapport(const FClientRadialDamageRapport& rapport);
    
    UFUNCTION(BlueprintCallable, Reliable, Server)
    void Server_ReceiveClientDamageRapport(const FClientDamageRapport& rapport);
    
    UFUNCTION(BlueprintCallable, Reliable, Server)
    void Server_NewMessage(const FString& Sender, const FString& Text, EChatSenderType SenderType);
    
protected:
    UFUNCTION(BlueprintCallable, Reliable, Server)
    void Server_DrawProjectileDebugPath(bool bDraw);
    
public:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void RequestChangeToPlayerClass(UPlayerCharacterID* RequestClass);
    
protected:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void RecievePawnDestroyed();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void RecieveOnControllerReady();
    
public:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void Receive_MenuButtonReleased();
    
protected:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnStartLevelEndSequence(const bool ShowEndScreen);
    
    UFUNCTION(BlueprintCallable)
    void OnSaveGameResourceChanged(const UResourceData* Resource, float previousAmount, float newAmount);
    
    UFUNCTION(BlueprintCallable)
    void OnSaveGamePlayerProgressChanged(int32 Rank, int32 Stars);
    
    UFUNCTION(BlueprintCallable)
    void OnSaveGameCharacterProgressChanged(TSubclassOf<APlayerCharacter> CharacterClass, int32 Level, float Progress);
    
    UFUNCTION(BlueprintCallable)
    void OnRep_DebugEnemyLocation();
    
public:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnPlayerSpawnBegin(int32 PlayerId);
    
    UFUNCTION(BlueprintCallable, Client, Reliable)
    void OnLevelEnd();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnGenerationDone();
    
    UFUNCTION(BlueprintCallable, Client, Reliable)
    void OnAboutToPlay(const EAboutToPlayReason Reason, const float SecondsUntilPlay);
    
protected:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void NotifyOnAboutToPlay(const EAboutToPlayReason Reason, const float SecondsUntilPlay);
    
public:
    UFUNCTION(BlueprintCallable)
    void MarkLoadingScreenFinished();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void LeaveSessionAndGoToRamrod();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsLoadingScreenFinished() const;
    
    UFUNCTION(BlueprintCallable)
    void HideTutorialHint(bool watched);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool GetUseToggleTerrainScanner();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool GetUseToggleLaserPointer();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool GetUseHoldToRun();
    
    UFUNCTION(BlueprintCallable)
    AActor* GetPlayerStart();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    AFSDPlayerState* GetFSDPlayerState() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    EAbilityActivationMode GetAbilityActivationMode();
    
protected:
    UFUNCTION(BlueprintCallable)
    void FlushRender();
    
public:
    UFUNCTION(BlueprintCallable)
    AActor* FindPlayerStart(UPlayerCharacterID* characterID);
    
    UFUNCTION(BlueprintCallable, Client, Reliable)
    void Client_PlayCue(USoundCue* SoundCue);
    
    UFUNCTION(BlueprintCallable, Client, Reliable)
    void Client_CollectVanityItem(UTreasureRewarder* rewarder, UVanityItem* targetItem, UPlayerCharacterID* targetCharacter);
    
    UFUNCTION(BlueprintCallable, Client, Reliable)
    void Client_CollectTreasureVictoryPose(UTreasureRewarder* rewarder, UVictoryPose* targetPose, UPlayerCharacterID* targetCharacter);
    
    UFUNCTION(BlueprintCallable, Client, Reliable)
    void Client_CollectTreasureSkin(USkinTreasureRewarder* rewarder, UItemSkin* targetSkin, UItemID* targetItem);
    
    UFUNCTION(BlueprintCallable, Client, Reliable)
    void Client_CollectPickaxePart(const UTreasureRewarder* rewarder, UPickaxePart* targetPart);
    
protected:
    UFUNCTION(BlueprintCallable)
    void ApplyLevelEndResultsAndNotifyServer();
    
};

