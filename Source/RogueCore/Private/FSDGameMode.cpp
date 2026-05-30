#include "FSDGameMode.h"
#include "CritterManager.h"
#include "EnemySpawnManager.h"
#include "FSDHUD.h"
#include "FormationsManagerComponent.h"
#include "KeepInsideWorld.h"
#include "ObjectivesManager.h"
#include "PheromoneSpawnerComponent.h"
#include "StageManager.h"
#include "StaticSpawnPointManager.h"
#include "Templates/SubclassOf.h"

AFSDGameMode::AFSDGameMode(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->HUDClass = AFSDHUD::StaticClass();
    this->bStartPlayersAsSpectators = true;
    this->bDelayedStart = true;
    this->GenerationStarted = false;
    this->PheromoneComponent = CreateDefaultSubobject<UPheromoneSpawnerComponent>(TEXT("PheromoneManager"));
    this->EnemySpawnManager = CreateDefaultSubobject<UEnemySpawnManager>(TEXT("EnemySpawnManager"));
    this->ObjectivesManager = CreateDefaultSubobject<UObjectivesManager>(TEXT("ObjectivesManager"));
    this->KeepInsideWorld = CreateDefaultSubobject<UKeepInsideWorld>(TEXT("KeepInsideWorld"));
    this->MissionManager = CreateDefaultSubobject<UStageManager>(TEXT("MissionManager"));
    this->EncounterManagerComponent = nullptr;
    this->CritterManager = CreateDefaultSubobject<UCritterManager>(TEXT("CritterManager"));
    this->StaticSpawnPointManager = CreateDefaultSubobject<UStaticSpawnPointManager>(TEXT("StaticSpawnPointManager"));
    this->FormationsManager = CreateDefaultSubobject<UFormationsManagerComponent>(TEXT("FormationsManager"));
    this->UseDropPodLandingSkipSpots = false;
    this->PreventAllLatejoin = false;
    this->PreventLateJoinOnMissionStart = false;
    this->PlayerSpawnHeightOffset = 75.00f;
    this->FriendlyFireGracePeriod = 240.00f;
    this->UseNormalEncounters = true;
    this->UseStationaryEncounter = true;
    this->AllowSpecialEncounters = true;
    this->CachedWaveManager = nullptr;
    this->ItemLogicUnlockManager_Instance = nullptr;
    this->MissionWasAborted = false;
}

void AFSDGameMode::StartGame() {
}


void AFSDGameMode::SignalLevelEndToAll() {
}

void AFSDGameMode::SignalAboutToPlay(const EAboutToPlayReason Reason, const float SecondsUntilPlay, APlayerController* Player) {
}

void AFSDGameMode::SetForcedStationaryPool(const TArray<UEnemyDescriptor*>& pool) {
}

void AFSDGameMode::SetForcedEnemyPool(const TArray<UEnemyDescriptor*>& pool) {
}

void AFSDGameMode::ResetPlayerStageEndLocations() {
}










void AFSDGameMode::OnControllerDestroyed(AActor* Controller) {
}

EAllDwarvesDownAction AFSDGameMode::NotifyAllDwarvesDown_Implementation() {
    return EAllDwarvesDownAction::Default;
}


void AFSDGameMode::LoadMission(const FString& mapName, TSoftClassPtr<AFSDGameMode> optionalGameMode, bool ClearPlayerState) {
}

void AFSDGameMode::HostAbortMission() {
}

void AFSDGameMode::HandlePlayerBanning(AFSDPlayerController* FSDPlayerController) {
}

void AFSDGameMode::GotoNextLevel() {
}

UEnemyWaveManager* AFSDGameMode::GetWaveManager() const {
    return NULL;
}

AActor* AFSDGameMode::GetPlayerStart(AFSDPlayerController* Controller) {
    return NULL;
}

TArray<AFSDPlayerController*> AFSDGameMode::GetPlayerControllers() const {
    return TArray<AFSDPlayerController*>();
}

TSubclassOf<AMolly> AFSDGameMode::GetMuleClass() const {
    return NULL;
}

TSoftClassPtr<ATeamTransport> AFSDGameMode::GetLastLevelEscapeDropPodClass() const {
    return NULL;
}

TSoftClassPtr<ATeamTransport> AFSDGameMode::GetFirstLevelEntranceDropPodClass() const {
    return NULL;
}

TSoftClassPtr<ATeamTransport> AFSDGameMode::GetExitElevatorFallbackClass() const {
    return NULL;
}

TSoftClassPtr<ATeamTransport> AFSDGameMode::GetExitElevatorClass() const {
    return NULL;
}

TSoftClassPtr<ATeamTransport> AFSDGameMode::GetEntranceElevatorClass() const {
    return NULL;
}

UEncounterManager* AFSDGameMode::GetEncounterManager() const {
    return NULL;
}

FSoftObjectPath AFSDGameMode::GetDronePath() const {
    return FSoftObjectPath{};
}

TSubclassOf<ABosco> AFSDGameMode::GetDroneClass() const {
    return NULL;
}

UDifficultyManager* AFSDGameMode::GetDifficultyManager() const {
    return NULL;
}

UDifficultyController* AFSDGameMode::GetDifficultyController() const {
    return NULL;
}

int32 AFSDGameMode::GetCurrentLevel() const {
    return 0;
}

void AFSDGameMode::FSDSetPause(APlayerController* PC, EPauseReason pauseReason) {
}

bool AFSDGameMode::FSDKickPlayer(APlayerController* KickedPlayer, const FText& KickReason) {
    return false;
}

void AFSDGameMode::FSDClearPause(EPauseReason pauseReason) {
}

void AFSDGameMode::EndLevelAsSuccess(const TArray<APlayerCharacter*>& PlayersThatEscaped) {
}

void AFSDGameMode::EndLevel() {
}


void AFSDGameMode::DestroyNonLocalPlayers() {
}

void AFSDGameMode::Debug_ShowPlayerSpheres() {
}

void AFSDGameMode::CleanupActorsOfTypes(TArray<TSubclassOf<AActor>> Types, TArray<TSubclassOf<AActor>> dontRemoveTypes) {
}

bool AFSDGameMode::ArePlayerCharactersReadyToStart() const {
    return false;
}

void AFSDGameMode::AddControllerForGracePeriod(APlayerCharacter* aPlayerCharacter) {
}

void AFSDGameMode::AboutMission() {
}


