#include "CommunicationComponent.h"
#include "Templates/SubclassOf.h"

UCommunicationComponent::UCommunicationComponent(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->ShoutingEnabled = true;
    this->ShoutWidgetType = nullptr;
    this->CharacterShouts = nullptr;
    this->MinShoutDelay = 1.00f;
    this->CloseRangeShoutDistance = 1500.00f;
    this->bMissionControlPaused = false;
    this->MissionControlAudioComponent = nullptr;
    this->Character = nullptr;
    this->LastShout = nullptr;
}

void UCommunicationComponent::StopMissionControl(bool InClearQueue) {
}

void UCommunicationComponent::ShoutCustomOrDefault(UDialogDataAsset* CustomShout, EShoutType DefaultShout) {
}

void UCommunicationComponent::ShoutCustomLocalOnly(UDialogDataAsset* NewShout) {
}

void UCommunicationComponent::ShoutCustomFurthestDwarf(UObject* WorldContext, UDialogDataAsset* NewShout, FVector TargetLocation, const float MinimumDistance, const AActor* ExcludedPlayer) {
}

void UCommunicationComponent::ShoutCustomClosestDwarf(UObject* WorldContext, UDialogDataAsset* NewShout, FVector TargetLocation, const AActor* ExcludedPlayer) {
}

void UCommunicationComponent::ShoutCustom(UDialogDataAsset* NewShout) {
}

void UCommunicationComponent::Shout(EShoutType NewShout) {
}

void UCommunicationComponent::SetVoicePitchMultiplier(float InPitch) {
}

void UCommunicationComponent::SetMissionControlPaused(UObject* WorldContext, bool IsPaused) {
}

void UCommunicationComponent::ServerShoutCustomFurthestDwarf_Implementation(UDialogDataAsset* NewShout, const FVector& TargetLocation, const float MinimumDistance, const AActor* ExcludedPlayer) {
}

void UCommunicationComponent::ServerShoutCustomClosestDwarf_Implementation(UDialogDataAsset* NewShout, const FVector& TargetLocation, const AActor* ExcludedPlayer) {
}

void UCommunicationComponent::ServerShout_Implementation(UDialogDataAsset* NewShout, const FDialogVoiceSettings& InVoiceSettings) {
}

void UCommunicationComponent::ServerMissionShoutInArea_Implementation(UDialogDataAsset* NewShout, const int32 Index, const bool bPriority, const FVector Center, const float Radius) {
}

void UCommunicationComponent::ServerMissionShout_Implementation(UDialogDataAsset* NewShout, int32 Index, bool bPriority) {
}

void UCommunicationComponent::Server_SetVoicePitchMultiplier_Implementation(float InPitch) {
}

void UCommunicationComponent::ResetVoicePitchMultiplier() {
}

UAudioComponent* UCommunicationComponent::PlayPitchedByClass(UObject* WorldContextObject, TSubclassOf<APlayerCharacter> CharacterClass, USoundBase* Sound, UDialogDataAsset* NewShout, EShoutType ShoutType, UAudioComponent* AudioComponent) {
    return NULL;
}

void UCommunicationComponent::PlayPitchedAsync(UDialogDataAsset* NewShout, EShoutType ShoutType, bool IgnoreCoolDown, UAudioComponent* AudioComponent, UObject* WorldContextObject, float shoutVolumeMultiplier, EAsyncLoadPriority Priority) {
}

UAudioComponent* UCommunicationComponent::PlayPitched(USoundBase* Sound, UDialogDataAsset* NewShout, EShoutType ShoutType, bool IgnoreCoolDown, UAudioComponent* AudioComponent, UObject* WorldContextObject) {
    return NULL;
}

int32 UCommunicationComponent::MissionShoutLocally(UObject* WorldContext, UDialogDataAsset* NewShout) {
    return 0;
}

void UCommunicationComponent::MissionShoutInArea(UObject* WorldContext, UDialogDataAsset* NewShout, const FVector Center, const float Radius) {
}

void UCommunicationComponent::MissionShout(UObject* WorldContext, UDialogDataAsset* NewShout, bool bPriority) {
}

bool UCommunicationComponent::IsMissionControlSpeaking() const {
    return false;
}

FDialogVoiceSettings UCommunicationComponent::GetVoiceSettings() const {
    return FDialogVoiceSettings{};
}

void UCommunicationComponent::ClientShout_Implementation(APlayerCharacter* Sender, UDialogDataAsset* NewShout, int32 Index, const FDialogTalkingTo& TalkingTo, const FDialogVoiceSettings& InVoiceSettings) {
}

void UCommunicationComponent::ClientMissionShout_Implementation(UDialogDataAsset* NewShout, int32 Index, bool bPriority, const FDialogTalkingTo& TalkingTo) {
}


