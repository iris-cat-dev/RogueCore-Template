#include "FSDGameUserSettings.h"

UFSDGameUserSettings::UFSDGameUserSettings() {
    this->LastCPUBenchmarkSteps.AddDefaulted(2);
    this->LastGPUBenchmarkSteps.AddDefaulted(7);
    this->bGraphicSettingsChanged = false;
    this->volumeCharacterVoice = 81.82f;
    this->volumeMissionControl = 58.53f;
    this->volumeMaster = 100.00f;
    this->volumeSFX = 100.00f;
    this->volumeMusic = 78.99f;
    this->CurrentAudioOutputDeviceId = TEXT("{0.0.0.00000000}.{f8122d24-da45-494b-9802-bea2f3a5b957}");
    this->UseDefaultAudioOutputDevice = true;
    this->Sharpening = 0.00f;
    this->AntiAliasingType = 0;
    this->UpscalingType = 0;
    this->AmdFsrMode = 1;
    this->AmdFsr2Mode = 2;
    this->AmdFsr3Mode = 2;
    this->AmdFsrSharpness = 0.20f;
    this->AmdFsr2Sharpness = 0.20f;
    this->AmdFsr3Sharpness = 0.20f;
    this->AmdFsr3FrameInterpolation = false;
    this->NvidiaDlssMode = UDLSSMode::Quality;
    this->ReflexMode = ENVidiaReflexMode::Disabled;
    this->FrameGenerationMode = UFSDStreamlineDLSSGMode::Off;
    this->AbilityActivationMode = EAbilityActivationMode::Hold;
    this->soundClassCharacterVoices = nullptr;
    this->soundClassMissionControl = nullptr;
    this->soundClassMaster = nullptr;
    this->soundClassSFX = nullptr;
    this->soundClassUI = nullptr;
    this->soundClassMusic = nullptr;
    this->soundClassVoice = nullptr;
    this->ChatFontSize = 13;
    this->bDuckOnOmegaShout = true;
    this->AutoRefreshServerlist = true;
    this->MouseXSensitivity = 402.54f;
    this->MouseYSensitivity = 402.54f;
    this->EnableMouseSmoothing = false;
    this->UseSeperateSensetivity = false;
    this->InvertMouse = false;
    this->InvertScroolWheel = false;
    this->useHoldToRun = false;
    this->useToggleLaserpointer = false;
    this->FOV = 120.00f;
    this->HeadbobbingScale = 0.00f;
    this->CameraShakeScale = 25.00f;
    this->ChatFadeTime = 10.00f;
    this->useStreamerProgram = false;
    this->SoundOnChatMessage = true;
    this->PhotosensitiveMode = false;
    this->OverlayIntensity = 0.40f;
    this->ShowUIAnimations = true;
    this->UseProfanityFilter = false;
    this->ForceFeedbackScale = 1.00f;
    this->InvertFlightControls = false;
    this->EnableDx12ByDefault = false;
    this->Gamma = 2.20f;
    this->HDRColorGamma = 1.20f;
    this->ConsoleGraphicsMode = EConsoleGraphicsMode::Fidelity;
    this->StaticResoultionScale = 1.00f;
    this->UseManuelGrahpicsMode = false;
    this->UIDPIScale = 90.00f;
    this->EnableCustomUIScale = false;
    this->CheckCursorOutOfBounds = false;
    this->VSyncToBeApplied = false;
    this->Dx12ToBeApplied = false;
    this->InFullscreenModeToBeApplied = EWindowMode::Fullscreen;
    this->InFullscreenModeToBeAppliedValid = false;
    this->VSyncToBeAppliedValid = false;
    this->Dx12ToBeAppliedValid = false;
    this->ResolutionToBeAppliedValid = false;
    this->ActiveDownscaleMode = EWindowResolutionDownscaleMode::None;
    this->ServerSearchRegion = 1;
    this->ServerSearchPasswordRequired = false;
    this->CurrentInputSource = EFSDInputSource::MouseAndKeyboard;
    this->RequestedInputSource = EFSDInputSource::None;
    this->SwapControllerThumbsticks = false;
    this->bTutorialHintsEnabled = true;
    this->bShowSubtitles = false;
    this->bShowFPS = false;
    this->AbilityActivationDelay = 0.18f;
    this->ShowNetInfoLevel = 0;
    this->bIsFirstBootBenchmarkPending = false;
    this->bCanShowBlood = true;
    this->TranslatorDebugModeEnabled = false;
    this->bIsGameMarkedAsModded = false;
    this->bIsTinnitusExplosionSoundsEnabled = true;
    this->CritSoundEnabled = true;
    this->CritSoundFromMinionsEnabled = false;
    this->DamageNumbersEnabled = false;
    this->MinionDamageNumbersEnabled = false;
    this->DamageNumberSizeScaling = 1.00f;
    this->SelectedDifficultyLevels.AddDefaulted(3);
    this->DifficultyLevelsAddedByDefault.AddDefaulted(3);
    this->DownedTurnDirection_Controller = 1.00f;
    this->DownedTurnDirection_Mouse = -1.00f;
}

void UFSDGameUserSettings::UpdateVolumeSettings(USoundClass* CharacterVoices, USoundClass* MissionControl, USoundClass* Master, USoundClass* Music, USoundClass* SFX, USoundClass* UI, USoundClass* Voice) {
}

void UFSDGameUserSettings::UpdateForceFeedbackScaleOnController(APlayerController* Controller) {
}

void UFSDGameUserSettings::TryApplyFirstBootHardwareBenchmark() {
}

bool UFSDGameUserSettings::ToggleTranslatorDebugMode() {
    return false;
}

void UFSDGameUserSettings::SetZiplineGunAutoSwitch(bool shouldAutoSwitch) {
}

void UFSDGameUserSettings::SetVSyncEnabledToBeApplied(bool bEnable) {
}

void UFSDGameUserSettings::SetVolume(EVolumeType volumeType, float Volume) {
}

bool UFSDGameUserSettings::SetVoiceChatOutputDevice(const FFSDVoiceDeviceHandle& inDevice) {
    return false;
}

bool UFSDGameUserSettings::SetVoiceChatInputDevice(const FFSDVoiceDeviceHandle& inDevice) {
    return false;
}

void UFSDGameUserSettings::SetVoiceChatEnabled(bool bEnable) {
}

void UFSDGameUserSettings::SetUseToggleTerrainScanner(bool useToggleTerrainScanner) {
}

void UFSDGameUserSettings::SetUseToggleLaserpointer(bool NewUseToggleLaserpointer) {
}

void UFSDGameUserSettings::SetUseStreamerProgram(bool NewUseStreamerProgram) {
}

void UFSDGameUserSettings::SetUseSeparateSensitivity(bool newSetting) {
}

void UFSDGameUserSettings::SetUseProfanityFilter(bool shouldUse) {
}

void UFSDGameUserSettings::SetUseManualGraphicsMode(bool bEnabled) {
}

void UFSDGameUserSettings::SetUseHoldToRun(bool NewUseHoldToRun) {
}

void UFSDGameUserSettings::SetUseDefaultVoiceChatOutputDevice(bool UseDefault) {
}

void UFSDGameUserSettings::SetUseDefaultVoiceChatInputDevice(bool UseDefault) {
}

void UFSDGameUserSettings::SetUseDefaultAudioOutputDevice(UObject* WorldContextObject, bool UseDefault) {
}

void UFSDGameUserSettings::SetUseCustomUIScale(bool UseCustomScale) {
}

void UFSDGameUserSettings::SetUpscalingType(int32 Type) {
}

void UFSDGameUserSettings::SetUIDPIScale(float uiscale) {
}

void UFSDGameUserSettings::SetTutorialHintsEnabled(bool Enabled) {
}

void UFSDGameUserSettings::SetTurn180Mode(ETurn180Mode InMode) {
}

void UFSDGameUserSettings::SetSwapControllerThumbsticks(bool InSwapThumbsticks) {
}

void UFSDGameUserSettings::SetSteamSearchRegion(ESteamSearchRegion InRegion) {
}

void UFSDGameUserSettings::SetStaticResolutionScale(float percentage) {
}

void UFSDGameUserSettings::SetShowUIAnimations(bool shouldShow) {
}

void UFSDGameUserSettings::SetShowSubtitles(bool Show) {
}

void UFSDGameUserSettings::SetShowNetInfoLevel(int32 Level) {
}

void UFSDGameUserSettings::SetShowFPS(bool visible) {
}

void UFSDGameUserSettings::SetSharpening(float NewSharpening) {
}

void UFSDGameUserSettings::SetServerSearchPasswordRequired(bool InPasswordRequired) {
}

void UFSDGameUserSettings::SetScreenResolutionToBeApplied(FIntPoint Resolution) {
}

void UFSDGameUserSettings::SetRenderResolutionScale(const float NewScale) {
}

void UFSDGameUserSettings::SetReflexMode(ENVidiaReflexMode NewReflexMode) {
}

void UFSDGameUserSettings::SetPushToTalk(bool bEnable) {
}

void UFSDGameUserSettings::SetPreviousItemEnabledOnController(bool InEnabled) {
}

void UFSDGameUserSettings::SetPlaySoundOnChatMessage(bool playSoundOnMessage) {
}

void UFSDGameUserSettings::SetPhotosensitiveMode(bool modeOn) {
}

void UFSDGameUserSettings::SetOverlayIntensity(const float NewIntensity) {
}

void UFSDGameUserSettings::SetNvidiaDlssMode(UDLSSMode Mode) {
}

void UFSDGameUserSettings::SetMouseYSensitivity(float newSensitivity) {
}

void UFSDGameUserSettings::SetMouseXSensitivity(float newSensitivity) {
}

void UFSDGameUserSettings::SetMouseSmoothingEnabled(const bool IsEnabled) {
}

void UFSDGameUserSettings::SetMinionDamageNumbersEnabled(bool Enabled) {
}

void UFSDGameUserSettings::SetIsTinnitusExplosionSoundsEnabled(const bool NewActive) {
}

void UFSDGameUserSettings::SetIsGameMarkedAsModded(const bool NewModded) {
}

void UFSDGameUserSettings::SetInvertMouseWheel(bool invertMouseWheel) {
}

void UFSDGameUserSettings::SetInvertMouse(bool NewInvertMouse) {
}

void UFSDGameUserSettings::SetInvertFlightControls(bool Invert) {
}

void UFSDGameUserSettings::SetInputSource(EFSDInputSource NewSource) {
}

void UFSDGameUserSettings::SetHoldToFire(bool HoldToFire) {
}

void UFSDGameUserSettings::SetHoldToBreakImmobilization(bool holdToBreak) {
}

void UFSDGameUserSettings::SetHeadBobbingScale(float NewHeadbobbingScale) {
}

void UFSDGameUserSettings::SetHDRColorGamma(float NewGamma) {
}

void UFSDGameUserSettings::SetGrapplingHookAutoSwitch(bool shouldAutoSwitch) {
}

void UFSDGameUserSettings::SetGamma(float gamme) {
}

void UFSDGameUserSettings::SetGameServerName(const int32 localUserNum, const FString& Name) {
}

void UFSDGameUserSettings::SetFullscreenModeToBeApplied(TEnumAsByte<EWindowMode::Type> InFullscreenMode) {
}

void UFSDGameUserSettings::SetFrameGenerationMode(UFSDStreamlineDLSSGMode NewMode) {
}

void UFSDGameUserSettings::SetFOV(float NewFOV) {
}

void UFSDGameUserSettings::SetForceFeedbackScale(float Scale) {
}

void UFSDGameUserSettings::SetDx12EnabledToBeApplied(bool bEnable) {
}

void UFSDGameUserSettings::SetDuckOnOmegaShoutEnabled(bool bEnable) {
}

void UFSDGameUserSettings::SetDownCameraTurnDirection(EFSDInputSource InputSource, float InDirection) {
}

void UFSDGameUserSettings::SetDifficultySelected(int32 Difficulty, bool IsSelected) {
}

void UFSDGameUserSettings::SetDebugLocalizerMode(bool bEnable) {
}

void UFSDGameUserSettings::SetDamageNumbersScaling(float Value) {
}

void UFSDGameUserSettings::SetDamageNumbersEnabled(bool Value) {
}

void UFSDGameUserSettings::SetCurrentUserSaveSlotName(UObject* WorldContextObject, const FString& SaveSlotName, ESaveSlotChangeProcedure changeProcedure) {
}

void UFSDGameUserSettings::SetCritSoundFromMinionsEnabled(bool Enabled) {
}

void UFSDGameUserSettings::SetCritSoundEnabled(bool Enabled) {
}

void UFSDGameUserSettings::SetConsoleGraphicsMode(EConsoleGraphicsMode Mode) {
}

void UFSDGameUserSettings::SetColorVisionDeficiency(EColorVisionDeficiency InType, float InSeverity) {
}

void UFSDGameUserSettings::SetCheckForOutOfBoundsEnabled(bool Enabled) {
}

void UFSDGameUserSettings::SetChatFontSize(int32 InFontSize) {
}

void UFSDGameUserSettings::SetChatFadeTime(float FadeTime) {
}

void UFSDGameUserSettings::SetChatEnabledOnController(bool InEnabled) {
}

void UFSDGameUserSettings::SetCanShowBlood(bool bloodAllowed) {
}

void UFSDGameUserSettings::SetCameraShakeScale(float NewCameraShakeScale) {
}

void UFSDGameUserSettings::SetAutoRefreshServerlist(bool Value) {
}

bool UFSDGameUserSettings::SetAudioOutputDevice(UObject* WorldContextObject, const FString& DeviceID) {
    return false;
}

void UFSDGameUserSettings::SetAntiAliasingType(int32 NewAntiAliasingType) {
}

void UFSDGameUserSettings::SetAMDFSRMode(int32 Mode) {
}

void UFSDGameUserSettings::SetAMDFSR3Mode(int32 Mode) {
}

void UFSDGameUserSettings::SetAMDFSR2Mode(int32 Mode) {
}

void UFSDGameUserSettings::SetAMDFrameGen(bool Enable) {
}

void UFSDGameUserSettings::SetAimSensitivity(float NewValue) {
}

void UFSDGameUserSettings::SetAimOuterAcceleration(float NewValue) {
}

void UFSDGameUserSettings::SetAimDeadZone(float NewValue) {
}

void UFSDGameUserSettings::SetAbilityActivationMode(EAbilityActivationMode Mode) {
}

void UFSDGameUserSettings::SetAbilityActivationDelay(float Delay) {
}

void UFSDGameUserSettings::ResetGraphicsChanges() {
}

void UFSDGameUserSettings::ResetControllerSettings() {
}

void UFSDGameUserSettings::PushFrameRateLimitOverride() {
}

void UFSDGameUserSettings::PopFrameRateLimitOverride() {
}

bool UFSDGameUserSettings::IsVoiceChatEnabled() const {
    return false;
}

bool UFSDGameUserSettings::IsUpscalingTypeSupported(int32 Type) const {
    return false;
}

bool UFSDGameUserSettings::IsTinnitusExplosionSoundsEnabled() const {
    return false;
}

bool UFSDGameUserSettings::IsNvReflexAvailable() {
    return false;
}

bool UFSDGameUserSettings::IsMouseSmoothingEnabled() const {
    return false;
}

bool UFSDGameUserSettings::IsManaulGraphicsModeAvailable() {
    return false;
}

bool UFSDGameUserSettings::IsGameMarkedAsModded() const {
    return false;
}

bool UFSDGameUserSettings::IsFrameGenerationSupported() const {
    return false;
}

bool UFSDGameUserSettings::IsDx12Enabled() {
    return false;
}

bool UFSDGameUserSettings::IsDuckOnOmegaShoutEnabled() const {
    return false;
}

bool UFSDGameUserSettings::IsDebugLocalizerModeEnabled() const {
    return false;
}

bool UFSDGameUserSettings::IsCurrentInputSource(EFSDInputSource InputSource) {
    return false;
}

bool UFSDGameUserSettings::IsAMDFrameGenEnabled() const {
    return false;
}

void UFSDGameUserSettings::InitializeSettings(UObject* WorldContextObject) {
}

void UFSDGameUserSettings::InitializeDifficultySelection(UObject* WorldContext, const TArray<int32> Selection) {
}

bool UFSDGameUserSettings::HasVoiceChatOutputDeviceChanged(FFSDVoiceDeviceHandle& AudioDeviceChangedTo) {
    return false;
}

bool UFSDGameUserSettings::HasVoiceChatInputDeviceChanged(FFSDVoiceDeviceHandle& AudioDeviceChangedTo) {
    return false;
}

bool UFSDGameUserSettings::HasAudioOutputDeviceChanged(FString& AudioDeviceChangedTo) {
    return false;
}

bool UFSDGameUserSettings::GetZiplineGunAutoSwitch() const {
    return false;
}

bool UFSDGameUserSettings::GetVSyncEnabledToBeApplied() {
    return false;
}

int32 UFSDGameUserSettings::GetVolumeAsInt32(const EVolumeType Type) {
    return 0;
}

float UFSDGameUserSettings::GetVolume(EVolumeType volumeType) {
    return 0.0f;
}

bool UFSDGameUserSettings::GetUseToggleTerrainScanner() const {
    return false;
}

bool UFSDGameUserSettings::GetUseToggleLaserPointer() const {
    return false;
}

bool UFSDGameUserSettings::GetUseStreamerProgram() const {
    return false;
}

bool UFSDGameUserSettings::GetUseSeparateSensitivity() const {
    return false;
}

bool UFSDGameUserSettings::GetUseProfanityFilter() const {
    return false;
}

bool UFSDGameUserSettings::GetUseManualGraphicsMode() {
    return false;
}

bool UFSDGameUserSettings::GetUseHoldToRun() const {
    return false;
}

bool UFSDGameUserSettings::GetUseDefaultVoiceChatOutputDevice() const {
    return false;
}

bool UFSDGameUserSettings::GetUseDefaultVoiceChatInputDevice() const {
    return false;
}

bool UFSDGameUserSettings::GetUseDefaultAudioOutputDevice() const {
    return false;
}

bool UFSDGameUserSettings::GetUseCustomUIScale() {
    return false;
}

int32 UFSDGameUserSettings::GetUpscalingType() const {
    return 0;
}

float UFSDGameUserSettings::GetUIDPIScale() const {
    return 0.0f;
}

bool UFSDGameUserSettings::GetTutorialHintsEnabled() const {
    return false;
}

ETurn180Mode UFSDGameUserSettings::GetTurn180Mode() const {
    return ETurn180Mode::PressRun;
}

TArray<UFSDStreamlineDLSSGMode> UFSDGameUserSettings::GetSupportedFrameGenerationModes() const {
    return TArray<UFSDStreamlineDLSSGMode>();
}

ESteamSearchRegion UFSDGameUserSettings::GetSteamSearchRegion() const {
    return ESteamSearchRegion::Close;
}

float UFSDGameUserSettings::GetStaticResolutionScale() {
    return 0.0f;
}

bool UFSDGameUserSettings::GetShowUIAnimations() const {
    return false;
}

bool UFSDGameUserSettings::GetShowSubtitles() const {
    return false;
}

int32 UFSDGameUserSettings::GetShowNetInfoLevel() const {
    return 0;
}

bool UFSDGameUserSettings::GetShowFPS() const {
    return false;
}

float UFSDGameUserSettings::GetSharpening() const {
    return 0.0f;
}

FIntPoint UFSDGameUserSettings::GetScreenResolutionToBeApplied() {
    return FIntPoint{};
}

float UFSDGameUserSettings::GetRenderResolutionScale() const {
    return 0.0f;
}

ENVidiaReflexMode UFSDGameUserSettings::GetReflexMode() const {
    return ENVidiaReflexMode::Disabled;
}

bool UFSDGameUserSettings::GetPushToTalk() const {
    return false;
}

bool UFSDGameUserSettings::GetPreviousItemEnabledOnController() const {
    return false;
}

bool UFSDGameUserSettings::GetPlaySoundOnChatMessage() const {
    return false;
}

bool UFSDGameUserSettings::GetPhotosensitiveMode() const {
    return false;
}

float UFSDGameUserSettings::GetOverlayIntensity() const {
    return 0.0f;
}

UDLSSMode UFSDGameUserSettings::GetNvidiaDlssMode() const {
    return UDLSSMode::Off;
}

float UFSDGameUserSettings::GetMouseYSensitivity() const {
    return 0.0f;
}

float UFSDGameUserSettings::GetMouseXSensitivity() const {
    return 0.0f;
}

bool UFSDGameUserSettings::GetMinionDamageNumbersEnabled() const {
    return false;
}

bool UFSDGameUserSettings::GetIsDifficultySelected(int32 Difficulty) const {
    return false;
}

bool UFSDGameUserSettings::GetInvertMouseWheel() const {
    return false;
}

bool UFSDGameUserSettings::GetInvertMouse() const {
    return false;
}

bool UFSDGameUserSettings::GetInvertFlightControls() const {
    return false;
}

EFSDInputSource UFSDGameUserSettings::GetInputSource() {
    return EFSDInputSource::None;
}

bool UFSDGameUserSettings::GetHoldToFire() const {
    return false;
}

bool UFSDGameUserSettings::GetHoldToBreakImmobilization() const {
    return false;
}

float UFSDGameUserSettings::GetHeadBobbingScale() const {
    return 0.0f;
}

float UFSDGameUserSettings::GetHDRColorGamma() {
    return 0.0f;
}

bool UFSDGameUserSettings::GetGrapplingHookAutoSwitch() const {
    return false;
}

float UFSDGameUserSettings::GetGamma() const {
    return 0.0f;
}

TEnumAsByte<EWindowMode::Type> UFSDGameUserSettings::GetFullscreenModeToBeApplied() {
    return EWindowMode::Fullscreen;
}

UFSDGameUserSettings* UFSDGameUserSettings::GetFSDGameUserSettings() {
    return NULL;
}

UFSDStreamlineDLSSGMode UFSDGameUserSettings::GetFrameGenerationMode() const {
    return UFSDStreamlineDLSSGMode::Off;
}

float UFSDGameUserSettings::GetFOV() const {
    return 0.0f;
}

float UFSDGameUserSettings::GetForceFeedbackScale() const {
    return 0.0f;
}

bool UFSDGameUserSettings::GetDx12EnabledToBeApplied() {
    return false;
}

float UFSDGameUserSettings::GetDownCameraTurnDirection(EFSDInputSource InputSource) const {
    return 0.0f;
}

float UFSDGameUserSettings::GetDamageNumberSizeScaling() const {
    return 0.0f;
}

bool UFSDGameUserSettings::GetDamageNumbersEnabled() const {
    return false;
}

FString UFSDGameUserSettings::GetCurrentUserSaveSlotName() {
    return TEXT("");
}

EFSDInputSource UFSDGameUserSettings::GetCurrentInputSource() {
    return EFSDInputSource::None;
}

bool UFSDGameUserSettings::GetCurrentAudioOutputDevice(UObject* WorldContextObject, FString& AudioDevice) {
    return false;
}

FFSDVoiceDeviceHandle UFSDGameUserSettings::GetCurrentAudioInputDevice() {
    return FFSDVoiceDeviceHandle{};
}

bool UFSDGameUserSettings::GetCritSoundFromMinionsEnabled() const {
    return false;
}

bool UFSDGameUserSettings::GetCritSoundEnabled() const {
    return false;
}

EConsoleGraphicsMode UFSDGameUserSettings::GetConsoleGraphicsMode() {
    return EConsoleGraphicsMode::Fidelity;
}

bool UFSDGameUserSettings::GetCheckForOutOfBounds() {
    return false;
}

int32 UFSDGameUserSettings::GetChatFontSize() const {
    return 0;
}

float UFSDGameUserSettings::GetChatFadeTime() const {
    return 0.0f;
}

bool UFSDGameUserSettings::GetChatEnabledOnController() const {
    return false;
}

float UFSDGameUserSettings::GetCameraShakeScale() const {
    return 0.0f;
}

bool UFSDGameUserSettings::GetAvaliableAudioOutputDevices(UObject* WorldContextObject, TArray<FString>& AudioDevices) {
    return false;
}

bool UFSDGameUserSettings::GetAvaliableAudioInputDevices(TArray<FString>& AudioDevices) {
    return false;
}

bool UFSDGameUserSettings::GetAvailableScreenResolutionsForNonPrimaryMonitors(TArray<FIntPoint>& Resolutions) {
    return false;
}

bool UFSDGameUserSettings::GetAutoRefreshServerlist() const {
    return false;
}

FString UFSDGameUserSettings::GetAudioOutputDeviceName(UObject* WorldContextObject, const FString& DeviceID) {
    return TEXT("");
}

int32 UFSDGameUserSettings::GetAntiAliasingType() const {
    return 0;
}

int32 UFSDGameUserSettings::GetAMDFSRMode() const {
    return 0;
}

int32 UFSDGameUserSettings::GetAMDFSR3Mode() const {
    return 0;
}

int32 UFSDGameUserSettings::GetAMDFSR2Mode() const {
    return 0;
}

bool UFSDGameUserSettings::GetAMDFrameGenOptionAvailable() const {
    return false;
}

float UFSDGameUserSettings::GetAimSensitivity() const {
    return 0.0f;
}

float UFSDGameUserSettings::GetAimOuterAcceleration() const {
    return 0.0f;
}

float UFSDGameUserSettings::GetAimDeadZone() const {
    return 0.0f;
}

EAbilityActivationMode UFSDGameUserSettings::GetAbilityActivationMode() const {
    return EAbilityActivationMode::Toggle;
}

float UFSDGameUserSettings::GetAbilityActivationDelay() const {
    return 0.0f;
}

FString UFSDGameUserSettings::GameServerNameFiltered() const {
    return TEXT("");
}

FString UFSDGameUserSettings::GameServerName() const {
    return TEXT("");
}

bool UFSDGameUserSettings::FSDSetCurrentLanguage(UObject* WorldContextObject, const FString& Culture) {
    return false;
}

UFSDGameUserSettings* UFSDGameUserSettings::FSDGameUserSettings() {
    return NULL;
}

bool UFSDGameUserSettings::ConsoleGraphicsModeAvailable(EConsoleGraphicsMode Mode) {
    return false;
}

void UFSDGameUserSettings::ClearCustomKeyBindings(bool InGamepadKeys) {
}

bool UFSDGameUserSettings::CanShowBlood() const {
    return false;
}

void UFSDGameUserSettings::ApplyGraphicsChanges() {
}

void UFSDGameUserSettings::ApplyFirstBootHardwareBenchmark() {
}


