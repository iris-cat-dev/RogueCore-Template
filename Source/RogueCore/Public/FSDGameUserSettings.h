#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=IntPoint -FallbackName=IntPoint
#include "UDLSSMode.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=EWindowMode -FallbackName=EWindowMode
#include "GameFramework/GameUserSettings.h"
#include "FSDVoiceChatSettings.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=RogueCoreOnlineServices -ObjectName=FSDVoiceDeviceHandle -FallbackName=FSDVoiceDeviceHandle
//CROSS-MODULE INCLUDE V2: -ModuleName=SlateCore -ObjectName=EColorVisionDeficiency -FallbackName=EColorVisionDeficiency
#include "BoolConfigChangedDelegate.h"
#include "CharacterOptions.h"
#include "ChatFontSizeChangedDelegate.h"
#include "ColorVisionDeficiencySettings.h"
#include "ControllerSettings.h"
#include "CustomKeyBinding.h"
#include "CustomKeyBindingsChangedDelegate.h"
#include "DelegateDelegate.h"
#include "EAbilityActivationMode.h"
#include "EConsoleGraphicsMode.h"
#include "EFSDInputSource.h"
#include "ENVidiaReflexMode.h"
#include "ESaveSlotChangeProcedure.h"
#include "ESteamSearchRegion.h"
#include "ETurn180Mode.h"
#include "EVolumeType.h"
#include "EWindowResolutionDownscaleMode.h"
#include "FloatConfigChangedDelegate.h"
#include "FSDVoiceChatSettings.h"
#include "HUDElements.h"
#include "InputSourceChangedSignatureDelegate.h"
#include "Int32ConfigChangedDelegate.h"
#include "LanguageChangedDelegate.h"
#include "StringConfigChangedDelegate.h"
#include "UFSDStreamlineDLSSGMode.h"
#include "GameFramework/GameUserSettings.h"
#include "FSDGameUserSettings.generated.h"

class APlayerController;
class UFSDGameUserSettings;
class UObject;
class USoundClass;

UCLASS(Blueprintable, Config=Engine)
class UFSDGameUserSettings : public UGameUserSettings {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FDelegate OnSettingsChanged;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FBoolConfigChanged OnUseHoldToRunChanged;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FFloatConfigChanged OnFOVChanged;
    
    UPROPERTY(BlueprintAssignable, BlueprintCallable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FLanguageChanged OnLanguageChanged;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FStringConfigChanged OnGameServerNameChanged;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FChatFontSizeChanged OnFontSizeChanged;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FBoolConfigChanged OnCanShowBloodChanged;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    FInputSourceChangedSignature OnInputSourceChanged;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    FBoolConfigChanged OnEnableTutorialHintsChanged;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FBoolConfigChanged OnShowFPSChanged;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FInt32ConfigChanged OnShowNetInfoLevelChanged;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FBoolConfigChanged OnDx12Enabled;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FCustomKeyBindingsChanged OnCustomKeyBindingsChanged;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    bool bGraphicSettingsChanged;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    FFSDVoiceChatSettings VoiceChatSettings;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    float volumeCharacterVoice;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    float volumeMissionControl;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    float volumeMaster;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    float volumeSFX;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    float volumeMusic;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString CurrentAudioOutputDeviceId;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool UseDefaultAudioOutputDevice;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    float Sharpening;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 AntiAliasingType;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 UpscalingType;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 AmdFsrMode;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 AmdFsr2Mode;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 AmdFsr3Mode;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    float AmdFsrSharpness;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    float AmdFsr2Sharpness;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    float AmdFsr3Sharpness;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool AmdFsr3FrameInterpolation;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    UDLSSMode NvidiaDlssMode;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    ENVidiaReflexMode ReflexMode;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    UFSDStreamlineDLSSGMode FrameGenerationMode;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    EAbilityActivationMode AbilityActivationMode;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    USoundClass* soundClassCharacterVoices;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    USoundClass* soundClassMissionControl;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    USoundClass* soundClassMaster;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    USoundClass* soundClassSFX;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    USoundClass* soundClassUI;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    USoundClass* soundClassMusic;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    USoundClass* soundClassVoice;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 ChatFontSize;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bDuckOnOmegaShout;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString LocalGameServerName;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString LocalGameServerNameFiltered;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool AutoRefreshServerlist;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    float MouseXSensitivity;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    float MouseYSensitivity;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool EnableMouseSmoothing;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool UseSeperateSensetivity;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool InvertMouse;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool InvertScroolWheel;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool useHoldToRun;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool useToggleLaserpointer;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    float FOV;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    float HeadbobbingScale;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    float CameraShakeScale;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    float ChatFadeTime;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool useStreamerProgram;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool SoundOnChatMessage;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool PhotosensitiveMode;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    float OverlayIntensity;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool ShowUIAnimations;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool UseProfanityFilter;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    float ForceFeedbackScale;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool InvertFlightControls;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool EnableDx12ByDefault;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    float Gamma;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    float HDRColorGamma;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    EConsoleGraphicsMode ConsoleGraphicsMode;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    float StaticResoultionScale;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool UseManuelGrahpicsMode;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    FHUDElements HUDElements;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    FCharacterOptions CharacterOptions;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    float UIDPIScale;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    bool EnableCustomUIScale;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool CheckCursorOutOfBounds;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    FIntPoint ResolutionToBeApplied;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    bool VSyncToBeApplied;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    bool Dx12ToBeApplied;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TEnumAsByte<EWindowMode::Type> InFullscreenModeToBeApplied;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    bool InFullscreenModeToBeAppliedValid;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    bool VSyncToBeAppliedValid;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    bool Dx12ToBeAppliedValid;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    bool ResolutionToBeAppliedValid;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    EWindowResolutionDownscaleMode ActiveDownscaleMode;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<FName, bool> NamedBoolSettings;
    
protected:
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    FColorVisionDeficiencySettings ColorVisionDeficiency;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 ServerSearchRegion;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool ServerSearchPasswordRequired;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    EFSDInputSource CurrentInputSource;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    EFSDInputSource RequestedInputSource;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FCustomKeyBinding> CustomKeyBindings;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FCustomKeyBinding> CustomControllerBindings;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool SwapControllerThumbsticks;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString CurrentUserSetSaveSlotName;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bTutorialHintsEnabled;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bShowSubtitles;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bShowFPS;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    float AbilityActivationDelay;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 ShowNetInfoLevel;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bIsFirstBootBenchmarkPending;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bCanShowBlood;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool TranslatorDebugModeEnabled;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bIsGameMarkedAsModded;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bIsTinnitusExplosionSoundsEnabled;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool CritSoundEnabled;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool CritSoundFromMinionsEnabled;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool DamageNumbersEnabled;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool MinionDamageNumbersEnabled;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    float DamageNumberSizeScaling;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    FString PreviousCulture;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    FControllerSettings ControllerSettings;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<int32> SelectedDifficultyLevels;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<int32> DifficultyLevelsAddedByDefault;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    float DownedTurnDirection_Controller;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    float DownedTurnDirection_Mouse;
    
public:
    UFSDGameUserSettings();

    UFUNCTION(BlueprintCallable)
    void UpdateVolumeSettings(USoundClass* CharacterVoices, USoundClass* MissionControl, USoundClass* Master, USoundClass* Music, USoundClass* SFX, USoundClass* UI, USoundClass* Voice);
    
    UFUNCTION(BlueprintCallable)
    void UpdateForceFeedbackScaleOnController(APlayerController* Controller);
    
    UFUNCTION(BlueprintCallable)
    void TryApplyFirstBootHardwareBenchmark();
    
    UFUNCTION(BlueprintCallable)
    bool ToggleTranslatorDebugMode();
    
    UFUNCTION(BlueprintCallable)
    void SetZiplineGunAutoSwitch(bool shouldAutoSwitch);
    
    UFUNCTION(BlueprintCallable)
    void SetVSyncEnabledToBeApplied(bool bEnable);
    
    UFUNCTION(BlueprintCallable)
    void SetVolume(EVolumeType volumeType, float Volume);
    
    UFUNCTION(BlueprintCallable)
    bool SetVoiceChatOutputDevice(const FFSDVoiceDeviceHandle& inDevice);
    
    UFUNCTION(BlueprintCallable)
    bool SetVoiceChatInputDevice(const FFSDVoiceDeviceHandle& inDevice);
    
    UFUNCTION(BlueprintCallable)
    void SetVoiceChatEnabled(bool bEnable);
    
    UFUNCTION(BlueprintCallable)
    void SetUseToggleTerrainScanner(bool useToggleTerrainScanner);
    
    UFUNCTION(BlueprintCallable)
    void SetUseToggleLaserpointer(bool NewUseToggleLaserpointer);
    
    UFUNCTION(BlueprintCallable)
    void SetUseStreamerProgram(bool NewUseStreamerProgram);
    
    UFUNCTION(BlueprintCallable)
    void SetUseSeparateSensitivity(bool newSetting);
    
    UFUNCTION(BlueprintCallable)
    void SetUseProfanityFilter(bool shouldUse);
    
    UFUNCTION(BlueprintCallable)
    void SetUseManualGraphicsMode(bool bEnabled);
    
    UFUNCTION(BlueprintCallable)
    void SetUseHoldToRun(bool NewUseHoldToRun);
    
    UFUNCTION(BlueprintCallable)
    void SetUseDefaultVoiceChatOutputDevice(bool UseDefault);
    
    UFUNCTION(BlueprintCallable)
    void SetUseDefaultVoiceChatInputDevice(bool UseDefault);
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    void SetUseDefaultAudioOutputDevice(UObject* WorldContextObject, bool UseDefault);
    
    UFUNCTION(BlueprintCallable)
    void SetUseCustomUIScale(bool UseCustomScale);
    
    UFUNCTION(BlueprintCallable)
    void SetUpscalingType(int32 Type);
    
    UFUNCTION(BlueprintCallable)
    void SetUIDPIScale(float uiscale);
    
    UFUNCTION(BlueprintCallable)
    void SetTutorialHintsEnabled(bool Enabled);
    
    UFUNCTION(BlueprintCallable)
    void SetTurn180Mode(ETurn180Mode InMode);
    
    UFUNCTION(BlueprintCallable)
    void SetSwapControllerThumbsticks(bool InSwapThumbsticks);
    
    UFUNCTION(BlueprintCallable)
    void SetSteamSearchRegion(ESteamSearchRegion InRegion);
    
    UFUNCTION(BlueprintCallable)
    void SetStaticResolutionScale(float percentage);
    
    UFUNCTION(BlueprintCallable)
    void SetShowUIAnimations(bool shouldShow);
    
    UFUNCTION(BlueprintCallable)
    void SetShowSubtitles(bool Show);
    
    UFUNCTION(BlueprintCallable)
    void SetShowNetInfoLevel(int32 Level);
    
    UFUNCTION(BlueprintCallable)
    void SetShowFPS(bool visible);
    
    UFUNCTION(BlueprintCallable)
    void SetSharpening(float NewSharpening);
    
    UFUNCTION(BlueprintCallable)
    void SetServerSearchPasswordRequired(bool InPasswordRequired);
    
    UFUNCTION(BlueprintCallable)
    void SetScreenResolutionToBeApplied(FIntPoint Resolution);
    
    UFUNCTION(BlueprintCallable)
    void SetRenderResolutionScale(const float NewScale);
    
    UFUNCTION(BlueprintCallable)
    void SetReflexMode(ENVidiaReflexMode NewReflexMode);
    
    UFUNCTION(BlueprintCallable)
    void SetPushToTalk(bool bEnable);
    
    UFUNCTION(BlueprintCallable)
    void SetPreviousItemEnabledOnController(bool InEnabled);
    
    UFUNCTION(BlueprintCallable)
    void SetPlaySoundOnChatMessage(bool playSoundOnMessage);
    
    UFUNCTION(BlueprintCallable)
    void SetPhotosensitiveMode(bool modeOn);
    
    UFUNCTION(BlueprintCallable)
    void SetOverlayIntensity(const float NewIntensity);
    
    UFUNCTION(BlueprintCallable)
    void SetNvidiaDlssMode(UDLSSMode Mode);
    
    UFUNCTION(BlueprintCallable)
    void SetMouseYSensitivity(float newSensitivity);
    
    UFUNCTION(BlueprintCallable)
    void SetMouseXSensitivity(float newSensitivity);
    
    UFUNCTION(BlueprintCallable)
    void SetMouseSmoothingEnabled(const bool IsEnabled);
    
    UFUNCTION(BlueprintCallable)
    void SetMinionDamageNumbersEnabled(bool Enabled);
    
    UFUNCTION(BlueprintCallable)
    void SetIsTinnitusExplosionSoundsEnabled(const bool NewActive);
    
    UFUNCTION(BlueprintCallable)
    void SetIsGameMarkedAsModded(const bool NewModded);
    
    UFUNCTION(BlueprintCallable)
    void SetInvertMouseWheel(bool invertMouseWheel);
    
    UFUNCTION(BlueprintCallable)
    void SetInvertMouse(bool NewInvertMouse);
    
    UFUNCTION(BlueprintCallable)
    void SetInvertFlightControls(bool Invert);
    
    UFUNCTION(BlueprintCallable)
    void SetInputSource(EFSDInputSource NewSource);
    
    UFUNCTION(BlueprintCallable)
    void SetHoldToFire(bool HoldToFire);
    
    UFUNCTION(BlueprintCallable)
    void SetHoldToBreakImmobilization(bool holdToBreak);
    
    UFUNCTION(BlueprintCallable)
    void SetHeadBobbingScale(float NewHeadbobbingScale);
    
    UFUNCTION(BlueprintCallable)
    void SetHDRColorGamma(float NewGamma);
    
    UFUNCTION(BlueprintCallable)
    void SetGrapplingHookAutoSwitch(bool shouldAutoSwitch);
    
    UFUNCTION(BlueprintCallable)
    void SetGamma(float gamme);
    
    UFUNCTION(BlueprintCallable)
    void SetGameServerName(const int32 localUserNum, const FString& Name);
    
    UFUNCTION(BlueprintCallable)
    void SetFullscreenModeToBeApplied(TEnumAsByte<EWindowMode::Type> InFullscreenMode);
    
    UFUNCTION(BlueprintCallable)
    void SetFrameGenerationMode(UFSDStreamlineDLSSGMode NewMode);
    
    UFUNCTION(BlueprintCallable)
    void SetFOV(float NewFOV);
    
    UFUNCTION(BlueprintCallable)
    void SetForceFeedbackScale(float Scale);
    
    UFUNCTION(BlueprintCallable)
    void SetDx12EnabledToBeApplied(bool bEnable);
    
    UFUNCTION(BlueprintCallable)
    void SetDuckOnOmegaShoutEnabled(bool bEnable);
    
    UFUNCTION(BlueprintCallable)
    void SetDownCameraTurnDirection(EFSDInputSource InputSource, float InDirection);
    
protected:
    UFUNCTION(BlueprintCallable)
    void SetDifficultySelected(int32 Difficulty, bool IsSelected);
    
public:
    UFUNCTION(BlueprintCallable)
    void SetDebugLocalizerMode(bool bEnable);
    
    UFUNCTION(BlueprintCallable)
    void SetDamageNumbersScaling(float Value);
    
    UFUNCTION(BlueprintCallable)
    void SetDamageNumbersEnabled(bool Value);
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    void SetCurrentUserSaveSlotName(UObject* WorldContextObject, const FString& SaveSlotName, ESaveSlotChangeProcedure changeProcedure);
    
    UFUNCTION(BlueprintCallable)
    void SetCritSoundFromMinionsEnabled(bool Enabled);
    
    UFUNCTION(BlueprintCallable)
    void SetCritSoundEnabled(bool Enabled);
    
    UFUNCTION(BlueprintCallable)
    void SetConsoleGraphicsMode(EConsoleGraphicsMode Mode);
    
    UFUNCTION(BlueprintCallable)
    void SetColorVisionDeficiency(EColorVisionDeficiency InType, float InSeverity);
    
    UFUNCTION(BlueprintCallable)
    void SetCheckForOutOfBoundsEnabled(bool Enabled);
    
    UFUNCTION(BlueprintCallable)
    void SetChatFontSize(int32 InFontSize);
    
    UFUNCTION(BlueprintCallable)
    void SetChatFadeTime(float FadeTime);
    
    UFUNCTION(BlueprintCallable)
    void SetChatEnabledOnController(bool InEnabled);
    
    UFUNCTION(BlueprintCallable)
    void SetCanShowBlood(bool bloodAllowed);
    
    UFUNCTION(BlueprintCallable)
    void SetCameraShakeScale(float NewCameraShakeScale);
    
    UFUNCTION(BlueprintCallable)
    void SetAutoRefreshServerlist(bool Value);
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    bool SetAudioOutputDevice(UObject* WorldContextObject, const FString& DeviceID);
    
    UFUNCTION(BlueprintCallable)
    void SetAntiAliasingType(int32 NewAntiAliasingType);
    
    UFUNCTION(BlueprintCallable)
    void SetAMDFSRMode(int32 Mode);
    
    UFUNCTION(BlueprintCallable)
    void SetAMDFSR3Mode(int32 Mode);
    
    UFUNCTION(BlueprintCallable)
    void SetAMDFSR2Mode(int32 Mode);
    
    UFUNCTION(BlueprintCallable)
    void SetAMDFrameGen(bool Enable);
    
    UFUNCTION(BlueprintCallable)
    void SetAimSensitivity(float NewValue);
    
    UFUNCTION(BlueprintCallable)
    void SetAimOuterAcceleration(float NewValue);
    
    UFUNCTION(BlueprintCallable)
    void SetAimDeadZone(float NewValue);
    
    UFUNCTION(BlueprintCallable)
    void SetAbilityActivationMode(EAbilityActivationMode Mode);
    
    UFUNCTION(BlueprintCallable)
    void SetAbilityActivationDelay(float Delay);
    
    UFUNCTION(BlueprintCallable)
    void ResetGraphicsChanges();
    
    UFUNCTION(BlueprintCallable)
    void ResetControllerSettings();
    
    UFUNCTION(BlueprintCallable)
    void PushFrameRateLimitOverride();
    
    UFUNCTION(BlueprintCallable)
    void PopFrameRateLimitOverride();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsVoiceChatEnabled() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsUpscalingTypeSupported(int32 Type) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsTinnitusExplosionSoundsEnabled() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static bool IsNvReflexAvailable();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsMouseSmoothingEnabled() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsManaulGraphicsModeAvailable();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsGameMarkedAsModded() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsFrameGenerationSupported() const;
    
protected:
    UFUNCTION(BlueprintCallable)
    bool IsDx12Enabled();
    
public:
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsDuckOnOmegaShoutEnabled() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsDebugLocalizerModeEnabled() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static bool IsCurrentInputSource(EFSDInputSource InputSource);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsAMDFrameGenEnabled() const;
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    void InitializeSettings(UObject* WorldContextObject);
    
protected:
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContext"))
    void InitializeDifficultySelection(UObject* WorldContext, const TArray<int32> Selection);
    
public:
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool HasVoiceChatOutputDeviceChanged(FFSDVoiceDeviceHandle& AudioDeviceChangedTo);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool HasVoiceChatInputDeviceChanged(FFSDVoiceDeviceHandle& AudioDeviceChangedTo);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool HasAudioOutputDeviceChanged(FString& AudioDeviceChangedTo);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool GetZiplineGunAutoSwitch() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool GetVSyncEnabledToBeApplied();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 GetVolumeAsInt32(const EVolumeType Type);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float GetVolume(EVolumeType volumeType);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool GetUseToggleTerrainScanner() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool GetUseToggleLaserPointer() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool GetUseStreamerProgram() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool GetUseSeparateSensitivity() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool GetUseProfanityFilter() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool GetUseManualGraphicsMode();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool GetUseHoldToRun() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool GetUseDefaultVoiceChatOutputDevice() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool GetUseDefaultVoiceChatInputDevice() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool GetUseDefaultAudioOutputDevice() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool GetUseCustomUIScale();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 GetUpscalingType() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float GetUIDPIScale() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool GetTutorialHintsEnabled() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    ETurn180Mode GetTurn180Mode() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    TArray<UFSDStreamlineDLSSGMode> GetSupportedFrameGenerationModes() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    ESteamSearchRegion GetSteamSearchRegion() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float GetStaticResolutionScale();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool GetShowUIAnimations() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool GetShowSubtitles() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 GetShowNetInfoLevel() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool GetShowFPS() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float GetSharpening() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FIntPoint GetScreenResolutionToBeApplied();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float GetRenderResolutionScale() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    ENVidiaReflexMode GetReflexMode() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool GetPushToTalk() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool GetPreviousItemEnabledOnController() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool GetPlaySoundOnChatMessage() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool GetPhotosensitiveMode() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float GetOverlayIntensity() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    UDLSSMode GetNvidiaDlssMode() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float GetMouseYSensitivity() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float GetMouseXSensitivity() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool GetMinionDamageNumbersEnabled() const;
    
protected:
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool GetIsDifficultySelected(int32 Difficulty) const;
    
public:
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool GetInvertMouseWheel() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool GetInvertMouse() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool GetInvertFlightControls() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static EFSDInputSource GetInputSource();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool GetHoldToFire() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool GetHoldToBreakImmobilization() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float GetHeadBobbingScale() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float GetHDRColorGamma();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool GetGrapplingHookAutoSwitch() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float GetGamma() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    TEnumAsByte<EWindowMode::Type> GetFullscreenModeToBeApplied();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static UFSDGameUserSettings* GetFSDGameUserSettings();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    UFSDStreamlineDLSSGMode GetFrameGenerationMode() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float GetFOV() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float GetForceFeedbackScale() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool GetDx12EnabledToBeApplied();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float GetDownCameraTurnDirection(EFSDInputSource InputSource) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float GetDamageNumberSizeScaling() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool GetDamageNumbersEnabled() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FString GetCurrentUserSaveSlotName();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    EFSDInputSource GetCurrentInputSource();
    
    UFUNCTION(BlueprintCallable, BlueprintPure, meta=(WorldContext="WorldContextObject"))
    bool GetCurrentAudioOutputDevice(UObject* WorldContextObject, FString& AudioDevice);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FFSDVoiceDeviceHandle GetCurrentAudioInputDevice();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool GetCritSoundFromMinionsEnabled() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool GetCritSoundEnabled() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    EConsoleGraphicsMode GetConsoleGraphicsMode();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool GetCheckForOutOfBounds();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 GetChatFontSize() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float GetChatFadeTime() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool GetChatEnabledOnController() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float GetCameraShakeScale() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure, meta=(WorldContext="WorldContextObject"))
    bool GetAvaliableAudioOutputDevices(UObject* WorldContextObject, TArray<FString>& AudioDevices);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool GetAvaliableAudioInputDevices(TArray<FString>& AudioDevices);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool GetAvailableScreenResolutionsForNonPrimaryMonitors(TArray<FIntPoint>& Resolutions);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool GetAutoRefreshServerlist() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure, meta=(WorldContext="WorldContextObject"))
    FString GetAudioOutputDeviceName(UObject* WorldContextObject, const FString& DeviceID);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 GetAntiAliasingType() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 GetAMDFSRMode() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 GetAMDFSR3Mode() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 GetAMDFSR2Mode() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool GetAMDFrameGenOptionAvailable() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float GetAimSensitivity() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float GetAimOuterAcceleration() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float GetAimDeadZone() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    EAbilityActivationMode GetAbilityActivationMode() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float GetAbilityActivationDelay() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FString GameServerNameFiltered() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FString GameServerName() const;
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static bool FSDSetCurrentLanguage(UObject* WorldContextObject, const FString& Culture);
    
    UFUNCTION(BlueprintCallable)
    static UFSDGameUserSettings* FSDGameUserSettings();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool ConsoleGraphicsModeAvailable(EConsoleGraphicsMode Mode);
    
    UFUNCTION(BlueprintCallable)
    void ClearCustomKeyBindings(bool InGamepadKeys);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool CanShowBlood() const;
    
    UFUNCTION(BlueprintCallable)
    void ApplyGraphicsChanges();
    
    UFUNCTION(BlueprintCallable)
    void ApplyFirstBootHardwareBenchmark();
    
};

