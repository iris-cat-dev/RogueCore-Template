#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Transform -FallbackName=Transform
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Vector2D -FallbackName=Vector2D
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=GameInstance -FallbackName=GameInstance
//CROSS-MODULE INCLUDE V2: -ModuleName=RogueCoreOnlineServices -ObjectName=EFSDLoginState -FallbackName=EFSDLoginState
//CROSS-MODULE INCLUDE V2: -ModuleName=RogueCoreOnlineServices -ObjectName=EOnlineSessionStatus -FallbackName=EOnlineSessionStatus
//CROSS-MODULE INCLUDE V2: -ModuleName=RogueCoreOnlineServices -ObjectName=EOnlineSessionType -FallbackName=EOnlineSessionType
#include "FSDBlueprintSessionResult.h"
#include "BXEDroneChangedDelegate.h"
#include "BoscoChangedDelegate.h"
#include "CravityChangedSignatureDelegate.h"
#include "DialogVoiceSettings.h"
#include "EGameOwnerStatus.h"
#include "ELoadingScreenType.h"
#include "EMinersManualSection.h"
#include "ForgingDoneDelegate.h"
#include "GeneratedMissionSignatureDelegate.h"
#include "GenericSignatureDelegate.h"
#include "JoinSignatureDelegate.h"
#include "MinersManualNotificationDelegate.h"
#include "NetworkConnectionInfo.h"
#include "NewPostProcessingManagerDelegate.h"
#include "OnGameStateDelegateDelegate.h"
#include "OnGameStateMultiDelegateDelegate.h"
#include "OnHDRGammaChangedDelegate.h"
#include "OnLoaderStartSigDelegate.h"
#include "OnPrivilegeCheckCompleteDelegate.h"
#include "OnSaveGameLoadedDelegate.h"
#include "OnXBoxAccountPickerClosedDelegate.h"
#include "OnXBoxChangeUserDelegate.h"
#include "OpenMinersManualDelegateDelegate.h"
#include "ShowCharacterSelectorRotateSignatureDelegate.h"
#include "ShowCharacterSelectorSignatureDelegate.h"
#include "ShowReconnectControllerDelegate.h"
#include "SkinSignatureDelegate.h"
#include "StartForgingDelegate.h"
#include "Templates/SubclassOf.h"
#include "TemporaryBuffChangedDelegate.h"
#include "TutorialManagerSignatureDelegate.h"
#include "FSDGameInstance.generated.h"

class ABXECompanionDrone;
class ABosco;
class AFSDPlayerController;
class AGameStateBase;
class AMolly;
class APlayerCharacter;
class APlayerController;
class APostProcessingManager;
class AProceduralSetup;
class ATutorialManager;
class UAudioComponent;
class UCampaignManager;
class UDifficultySetting;
class UFSDCloudLoadSave;
class UFSDFriendsAndInvites;
class UFSDGameUserSettings;
class UFSDSaveGame;
class UFSDSendToURL;
class UHUDWarningWidget;
class UIconGenerationManager;
class UItemSkin;
class UMouseCursorWidget;
class UMutator;
class UObject;
class UOnlineSessionSubSystem;
class UPlayerCharacterID;
class URunManager;
class USchematic;
class USoundBase;
class USoundSubmix;
class USpecialEvent;
class UStage;
class UStageResultInfo;
class UTelemetrySubsystem;
class UTemporaryBuff;
class UTexture2D;
class UWindowWidget;
class UWorld;

UCLASS(Blueprintable, NonTransient)
class ROGUECORE_API UFSDGameInstance : public UGameInstance {
    GENERATED_BODY()
public:
    DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FOnStartSearchForFriendsComplete, bool, bWasSuccessful, const FString&, ErrorStr);
    DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FNewHUDWarningDelegate, UHUDWarningWidget*, newWidget);
    DECLARE_DYNAMIC_MULTICAST_DELEGATE_ThreeParams(FFSDGameInstanceSalute, UPlayerCharacterID*, PlayerCharacterID, USoundBase*, SaluteSound, const FDialogVoiceSettings&, VoiceSettings);
    DECLARE_DYNAMIC_MULTICAST_DELEGATE(FFSDGameInstanceDelegate);
    DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FDonkeyCharacterDelegate, AMolly*, InDonkey);
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    bool IsSpawnPosMarkerVisible;
    
public:
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FTemporaryBuffChanged OnTemporaryBuffAdded;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGenericSignature OnGameSettingsChanged;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGenericSignature OnGraphicsSettingsChanged;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGenericSignature OnPressStart;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FJoinSignature OnJoinPendingInvite;
    
    UPROPERTY(BlueprintAssignable, BlueprintCallable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGenericSignature OnSkinChangedEvent;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnLoaderStartSig OnLoaderStart;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGenericSignature OnLoaderStop;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FFSDGameInstanceSalute OnLoaderRockAndStone;
    
    UPROPERTY(BlueprintAssignable, BlueprintCallable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FStartForging OnStartForging;
    
    UPROPERTY(BlueprintAssignable, BlueprintCallable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FStartForging OnSkipForging;
    
    UPROPERTY(BlueprintAssignable, BlueprintCallable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FForgingDone OnForgingDone;
    
    UPROPERTY(BlueprintAssignable, BlueprintCallable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOpenMinersManualDelegate OnOpenMinersManual;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FTutorialManagerSignature OnTutorialManagerSet;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FFSDGameInstanceDelegate OnActiveLocalPlayerCharacterChangedDelegate;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FShowReconnectController OnShowReconnectScreen;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnXBoxAccountPickerClosed OnXBoxAccountPickerClosed;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnXBoxChangeUser OnXBoxChangeUser;
    
    UPROPERTY(BlueprintAssignable, BlueprintCallable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnHDRGammaChanged OnHDRGammaChanged;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FCravityChangedSignature OnGravityChanged;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FNewPostProcessingManager OnNewPostProcessingManager;
    
    UPROPERTY(BlueprintCallable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FSkinSignature OnPreviewSkinChanged;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnPrivilegeCheckComplete OnPrivilegeCheckComplete;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnGameStateMultiDelegate OnNewGameState;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    bool ShowingReconnectScreen;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Export, Transient, meta=(AllowPrivateAccess=true))
    TWeakObjectPtr<UMouseCursorWidget> MouseCursorWidget;
    
    UPROPERTY(BlueprintAssignable, BlueprintCallable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FShowCharacterSelectorSignature OnShowCharacterSelector;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FShowCharacterSelectorRotateSignature OnAnalogueControllerRotation;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FShowCharacterSelectorRotateSignature OnAnalogueControllerRotationYawOnly;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    AProceduralSetup* ProceduralSetup;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    bool HasStartedAMission;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    bool CanPlayOnline;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    bool FirstTimeInFrontend;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    bool SessionFirstStartOnSpaceRig;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    bool ShowFirstCharacterSelector;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    bool ShowSaveWarning;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UStageResultInfo* MissionResultInfo;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    FTransform LoaderViewTargetTransform;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    FOnSaveGameLoaded OnSaveGameLoaded;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGeneratedMissionSignature OnActiveStageChanged;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FDonkeyCharacterDelegate OnDonkeyChanged;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TWeakObjectPtr<AMolly> Donkey;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FBoscoChanged OnBoscoChanged;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FBXEDroneChanged OnBXEDroneChanged;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    bool DEBUGRandomGlobalMissionSeedEnabled;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    int32 DEBUGRandomGlobalMissionSeed;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    int32 DEBUGFixedGlobalMissionSeed;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    int32 DEBUGFixedPLSSeed;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    bool CanCommunicateOnline;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnStartSearchForFriendsComplete OnStartSearchForFriendsComplete;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TMap<FString, FString> FriendSessions;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UTelemetrySubsystem* TelemetrySubsystem;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    USpecialEvent* ForcedMachineEvent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    USpecialEvent* ForcedOtherEvent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool ShowMinerManualWorkInProgress;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FMinersManualNotification OnMinersManualNotification;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FNewHUDWarningDelegate OnNewHUDWarning;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    UAudioComponent* TransitionMusicComponent;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float LastDreadnaughtKillTime;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Export, meta=(AllowPrivateAccess=true))
    TWeakObjectPtr<UWindowWidget> ActiveEscapeMenu;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TWeakObjectPtr<APostProcessingManager> PostProcessingManager;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TWeakObjectPtr<ABosco> Drone;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TWeakObjectPtr<ABXECompanionDrone> BXEDrone;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TWeakObjectPtr<APlayerCharacter> ActiveLocalPlayerCharacter;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TWeakObjectPtr<ATutorialManager> TutorialManager;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    bool bGameSettingsChanged;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    uint8 gameOwnerStatus;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool ServerSearchActive;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGenericSignature OnHideIdentifiableInformation;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGenericSignature OnShowIdentifiableInformation;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    bool IsOnPressStartScreen;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    bool bHasSeenStartScreen;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    bool bHasSeenNarrativeVideo;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    bool bHasSeenInfoScreen;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<AProceduralSetup> ProceduralLevel;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<UIconGenerationManager> IconGenerationManagerClass;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UIconGenerationManager* IconGenerationManager;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UCampaignManager* CampaignManager;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    URunManager* RunManager;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UDifficultySetting* DesiredDifficulty;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UFSDSaveGame* SaveGame;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool MixerInteractivityEnabled;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    bool MovieModeActive;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    bool MovieModeActiveInSpacerig;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    bool MovieModeStartAtOrigin;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    bool MovieModeStartWithCameraShake;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    USchematic* ActiveForgeSchematic;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UFSDCloudLoadSave* FSDCloudLoadSave;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UFSDSendToURL* SendToURL;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UFSDFriendsAndInvites* FriendsAndInvites;
    
    UPROPERTY(EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    double SessionStartTime;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    int32 SessionStartTimestamp;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    float InKBytesPerSecond;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    float OutKBytesPerSecond;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    bool PreSpawnNigaraParticles;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TArray<UTemporaryBuff*> TemporaryBuffs;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    USoundSubmix* ControllerVibrationSubmix;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    USoundSubmix* ControllerSpeakerSubmix;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    bool ChatHasFocus;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    FText UncommitedChatMesssage;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    bool bIsGameMarkedAsModded;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    bool bIsNextRamrodSpawnInVrCryoBed;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UOnlineSessionSubSystem* OnlineSystem;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TMap<TSoftObjectPtr<UWorld>, UWorld*> AlwaysLoadedWorldsMap;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TArray<UWorld*> AlwaysLoadedWorlds;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    ELoadingScreenType NextActiveLoadingScreen;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    ELoadingScreenType ActiveLoadingScreen;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TArray<FNetworkConnectionInfo> ConnectionInfoCahce;
    
public:
    UFSDGameInstance();

    UFUNCTION(BlueprintCallable)
    void UpdateGlobelMissionSeed();
    
    UFUNCTION(BlueprintCallable)
    void StopPhotographyInputProcessor();
    
    UFUNCTION(BlueprintCallable)
    void StartPhotographyInputProcessor();
    
    UFUNCTION(BlueprintCallable)
    AProceduralSetup* SpawnProcedural();
    
    UFUNCTION(BlueprintCallable)
    void ShowLoadingScreen(const ELoadingScreenType LoadingScreen);
    
    UFUNCTION(BlueprintCallable)
    void SetServerSearchActive(const bool Active);
    
    UFUNCTION(BlueprintCallable)
    void SetPreviewingCharacterID(UWindowWidget* InPreviewWindow, UPlayerCharacterID* InPlayerCharacterID);
    
    UFUNCTION(BlueprintCallable)
    void SetMinersManualNotification(EMinersManualSection Section, UObject* IdentifyingObject, FText Text);
    
    UFUNCTION(BlueprintCallable)
    void SetIsNextRamrodSpawnInVrCryoBed(const bool NewInVrCryoBed);
    
    UFUNCTION(BlueprintCallable)
    void SetGlobalMissionSeed(int32 Seed);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void SetEligableForAscensionAssignment(bool eligable);
    
    UFUNCTION(BlueprintCallable)
    void SetBXEDroneInstance(ABXECompanionDrone* NewDrone);
    
    UFUNCTION(BlueprintCallable)
    void SetBoscoInstance(ABosco* NewBosco);
    
    UFUNCTION(BlueprintCallable)
    void RestoreCursors();
    
    UFUNCTION(BlueprintCallable)
    void ResetSaveGame();
    
protected:
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void RequestReadyForJoinSessionMapTravel();
    
public:
    UFUNCTION(BlueprintCallable)
    void RemoveGameOwnerStatus(EGameOwnerStatus StatusToRemove);
    
    UFUNCTION(BlueprintCallable)
    void RemoveBXEDrone();
    
    UFUNCTION(BlueprintCallable)
    void RemoveBosco();
    
    UFUNCTION(BlueprintCallable)
    void RemoveAllTemporaryBuff(APlayerController* PlayerController);
    
    UFUNCTION(BlueprintCallable)
    void PostInit();
    
    UFUNCTION(BlueprintCallable)
    void PairingUseNewProfile();
    
private:
    UFUNCTION(BlueprintCallable)
    void OnOnlineSessionChanged(const EOnlineSessionStatus OldStatus, const EOnlineSessionStatus NewStatus);
    
protected:
    UFUNCTION(BlueprintCallable)
    void OnLoginStatusChanged(EFSDLoginState NewState, const FString& resultString);
    
public:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnLoadComplete(const FString& mapName);
    
    UFUNCTION(BlueprintCallable)
    void OnGameStateSet(const AGameStateBase* GameStateBase);
    
    UFUNCTION(BlueprintCallable)
    void OnGameStateChanged(const FOnGameStateDelegate& OnNewStateSet, bool CallInstantlyIfAlreadySet);
    
protected:
    UFUNCTION(BlueprintCallable)
    void MarkReadyForJoinSessionMapTravel();
    
public:
    UFUNCTION(BlueprintCallable)
    void MarkHasSeenStartScreen();
    
    UFUNCTION(BlueprintCallable)
    void MarkHasSeenNarrativeVideo();
    
    UFUNCTION(BlueprintCallable)
    void MarkHasSeenInfoScreen();
    
    UFUNCTION(BlueprintCallable)
    void LoadSaveGame(UFSDSaveGame* toLoad);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsNextRamrodSpawnInVrCryoBed() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsMutatorActive(TSubclassOf<UMutator> mutatorClass) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsGenericMutatorActive(FName InTag) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsFreeBeerRewardActive() const;
    
    UFUNCTION(BlueprintCallable)
    bool IsCampaignMission();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool HasSignedIn();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool HasSeenStartScreen() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool HasSeenNarrativeVideo() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool HasSeenInfoScreen() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool HasRandomBeerBuff() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool HasPendingActivity() const;
    
    UFUNCTION(BlueprintCallable)
    bool HasAnalytics();
    
    UFUNCTION(BlueprintCallable)
    void GraphicsUserSettingsChanged();
    
    UFUNCTION(BlueprintCallable)
    void GiveTemporaryBuff(UTemporaryBuff* buff, APlayerCharacter* Player);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FVector2D GetViewportSize();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    TSoftClassPtr<AProceduralSetup> GetSoftReferenceToPLS();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    EOnlineSessionType GetSessionType() const;
    
    UFUNCTION(BlueprintCallable)
    TArray<FFSDBlueprintSessionResult> GetServersFriendsArePlaying(TArray<FFSDBlueprintSessionResult> servers);
    
    UFUNCTION(BlueprintCallable, BlueprintPure, meta=(WorldContext="WorldContextObject"))
    static FString GetSeedString(UObject* WorldContextObject);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    UPlayerCharacterID* GetPreviewedCharacterID() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    TArray<UMutator*> GetMutators(TSubclassOf<UMutator> mutatorClass) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    AFSDPlayerController* GetLocalFSDPlayerController() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    UIconGenerationManager* GetIconGenerationManager() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 GetGlobalMissionSeed() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool GetGameOwnerStatus(EGameOwnerStatus status) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    UMutator* GetFirstMutator(TSubclassOf<UMutator> mutatorClass) const;
    
protected:
    UFUNCTION(BlueprintCallable, BlueprintPure)
    TArray<FNetworkConnectionInfo> GetConnectionInfo();
    
public:
    UFUNCTION(BlueprintCallable, BlueprintPure)
    UStage* GetActiveStage() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    APlayerCharacter* GetActiveLocalPlayerCharacter() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    ELoadingScreenType GetActiveLoadingScreen() const;
    
    UFUNCTION(BlueprintCallable)
    void GameUserSettingsChanged();
    
    UFUNCTION(BlueprintCallable)
    void Cheat_SetSpawnPosMarkersVisible(bool visible);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FText ChatState_UncommitedMessage();
    
    UFUNCTION(BlueprintCallable)
    void ChatState_StoreState(bool focus, const FText& uncommitedMessage);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool ChatState_HadFocus();
    
    UFUNCTION(BlueprintCallable)
    void ChangeSkinPreview(UItemSkin* PreviewSkin);
    
private:
    UFUNCTION(BlueprintCallable)
    void CachePSOsOnCommand();
    
public:
    UFUNCTION(BlueprintCallable)
    void BroadcastLoaderRockAndStone(UPlayerCharacterID* PlayerCharacter, USoundBase* SaluteSound, const FDialogVoiceSettings& VoiceSettings);
    
private:
    UFUNCTION(BlueprintCallable)
    void BroadcastActiveStageChanged(UStage* NewActiveStage);
    
public:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void ApplyGameUserSettings(UFSDGameUserSettings* Settings);
    
    UFUNCTION(BlueprintCallable)
    UHUDWarningWidget* AddWarningToHUD(TSubclassOf<UHUDWarningWidget> WidgetClass, UTexture2D* Texture, USoundBase* PingSound);
    
    UFUNCTION(BlueprintCallable)
    void AddToFriendSessions(const FString& friendSessionId, const FString& friendName);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void AddNotification_Ascension(const FText& InText);
    
    UFUNCTION(BlueprintCallable)
    void AddGameOwnerStatus(EGameOwnerStatus StatusToAdd);
    
};

