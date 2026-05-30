#include "GameFunctionLibrary.h"

UGameFunctionLibrary::UGameFunctionLibrary() {
}

void UGameFunctionLibrary::SpawnOrUpdateAudio2D(UObject* WorldContext, UAudioComponent*& AudioComponent, USoundBase* Sound, float VolumeMultiplier, float PitchMultiplier, FName FloatParamName, float FloatParam) {
}

void UGameFunctionLibrary::SetUsePushToTalk(bool Enable) {
}

void UGameFunctionLibrary::SetGlobalGravityZ(UObject* WorldContextObject, float GravityZ) {
}

void UGameFunctionLibrary::SetGlobalGravityScale(UObject* WorldContextObject, float GravityScale) {
}

bool UGameFunctionLibrary::IsWorldTickEnabled(UObject* WorldContextObject) {
    return false;
}

bool UGameFunctionLibrary::IsWithEditor() {
    return false;
}

void UGameFunctionLibrary::IsTearingDown(UObject* caller, bool& NewIsTearingDown) {
}

bool UGameFunctionLibrary::IsPlayingOffline(UObject* WorldContextObject) {
    return false;
}

bool UGameFunctionLibrary::IsPlayInEditor(UObject* WorldContextObject) {
    return false;
}

bool UGameFunctionLibrary::IsGameMarkedModded(const UObject* WorldContext) {
    return false;
}

bool UGameFunctionLibrary::IsGameDetectedModded(const UObject* WorldContext) {
    return false;
}

bool UGameFunctionLibrary::IsEditorOnlyWorld(const UObject* InWorldContext) {
    return false;
}

UWindowManager* UGameFunctionLibrary::GetWindowManager(const UObject* WorldContextObject) {
    return NULL;
}

bool UGameFunctionLibrary::GetUsePushToTalk() {
    return false;
}

UWindowWidget* UGameFunctionLibrary::GetTopWindow(UObject* WorldContextObject) {
    return NULL;
}

URunManager* UGameFunctionLibrary::GetRunManager(UObject* WorldContextObject) {
    return NULL;
}

FString UGameFunctionLibrary::GetProjectVersion() {
    return TEXT("");
}

int32 UGameFunctionLibrary::GetNumPlayers(UObject* WorldContext) {
    return 0;
}

int32 UGameFunctionLibrary::GetNumAdditionalPlayers(UObject* WorldContext) {
    return 0;
}

FString UGameFunctionLibrary::GetMajorProjectVersion() {
    return TEXT("");
}

AFSDPlayerController* UGameFunctionLibrary::GetLocalPlayerController(const UObject* WorldContext) {
    return NULL;
}

UPlayerCharacterID* UGameFunctionLibrary::GetLocalPlayerCharacterID(const UObject* WorldContext) {
    return NULL;
}

UPlayerCharacterData* UGameFunctionLibrary::GetLocalPlayerCharacterData(const UObject* WorldContext) {
    return NULL;
}

UAbilityData* UGameFunctionLibrary::GetLocalPlayerCharacterAbilityData(const UObject* WorldContext) {
    return NULL;
}

APlayerCharacter* UGameFunctionLibrary::GetLocalPlayerCharacter(const UObject* WorldContext) {
    return NULL;
}

FSeamlessTravelLevelEndState UGameFunctionLibrary::GetLastLevelEndState(const UObject* WorldContext) {
    return FSeamlessTravelLevelEndState{};
}

float UGameFunctionLibrary::GetGlobalGravityZ(UObject* WorldContextObject) {
    return 0.0f;
}

AFSDWorldSettings* UGameFunctionLibrary::GetFSDWorldSettings(UObject* WorldContextObject) {
    return NULL;
}

AFSDGameModeSpaceRig* UGameFunctionLibrary::GetFSDSRGameMode(UObject* WorldContextObject) {
    return NULL;
}

UFSDSaveGame* UGameFunctionLibrary::GetFSDSaveGame(UObject* WorldContextObject) {
    return NULL;
}

AFSDGameState* UGameFunctionLibrary::GetFSDGameState(UObject* WorldContextObject) {
    return NULL;
}

AFSDGameMode* UGameFunctionLibrary::GetFSDGameMode(UObject* WorldContextObject) {
    return NULL;
}

UFSDGameInstance* UGameFunctionLibrary::GetFSDGameInstance(const UObject* WorldContextObject) {
    return NULL;
}

UGameData* UGameFunctionLibrary::GetFSDGameData() {
    return NULL;
}

float UGameFunctionLibrary::GetFrameRateInHz(UObject* WorldContextObject) {
    return 0.0f;
}

ADeepCSGWorld* UGameFunctionLibrary::GetCSGWorld(const UObject* WorldContextObject) {
    return NULL;
}

int32 UGameFunctionLibrary::GetChangelist() {
    return 0;
}

UCampaignManager* UGameFunctionLibrary::GetCampaingManager(UObject* WorldContextObject) {
    return NULL;
}

UAsyncManager* UGameFunctionLibrary::GetAsyncManager(UObject* WorldContextObject) {
    return NULL;
}

UAbilityData* UGameFunctionLibrary::GetAbilityDataFromCharacterID(const UPlayerCharacterID* InCharacterID) {
    return NULL;
}

bool UGameFunctionLibrary::EqualEqual_UniqueNetId(const FUniqueNetIdRepl& IdA, const FUniqueNetIdRepl& IdB) {
    return false;
}


