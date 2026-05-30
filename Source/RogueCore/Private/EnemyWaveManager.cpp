#include "EnemyWaveManager.h"
#include "Templates/SubclassOf.h"

UEnemyWaveManager::UEnemyWaveManager(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->StartDelay = 50.00f;
    this->NoWavesBeforeRedTime = 0.00f;
    this->spawnRadiusFromSpawnPoint = 300.00f;
    this->ScriptedWavesEnabled = true;
    this->NormalWavesEnabled = false;
    this->RiftSpawnDistance = 3000.00f;
    this->RiftOptimalSpawnDistance = 2000.00f;
    this->RiftMinSpawnDistance = 200.00f;
    this->RiftsAreOpen = false;
    this->RiftSpawnCount = 3;
    this->RiftsArePermanentAndAlwaysActive = false;
    this->GameMode = nullptr;
    this->SpawnManager = nullptr;
}

UEnemyWaveController* UEnemyWaveManager::TriggerWave(TSubclassOf<UEnemyWaveController> waveClass) {
    return NULL;
}

UEnemyWaveController* UEnemyWaveManager::TriggerSecretWave(TSubclassOf<UEnemyWaveController> waveClass) {
    return NULL;
}

void UEnemyWaveManager::TriggerEndWave(bool cancelAllWaves) {
}

void UEnemyWaveManager::StopAllSecretWaves() {
}

void UEnemyWaveManager::SpawnScriptedWave() {
}

void UEnemyWaveManager::SpawnRifts_Async(FLatentActionInfo LatentInfo, const FVector& InQueryLocation, const FRiftSpawnOverrides Overrides) {
}

TArray<FVector> UEnemyWaveManager::SpawnRifts(const FVector& InQueryLocation, const FRiftSpawnOverrides Overrides) {
    return TArray<FVector>();
}

void UEnemyWaveManager::SetAllWavesAreBlocked(const bool allWavesAreBlocked) {
}

void UEnemyWaveManager::PushDisableScriptedWaves(UObject* Owner) {
}

void UEnemyWaveManager::PushDisableNormalWaves(UObject* Owner) {
}

void UEnemyWaveManager::PopDisableScriptedWaves(UObject* Owner) {
}

void UEnemyWaveManager::PopDisableNormalWaves(UObject* Owner) {
}

void UEnemyWaveManager::OnMatchEnded() {
}

void UEnemyWaveManager::OnEnemySpawned(APawn* Enemy) {
}

bool UEnemyWaveManager::IsScriptedWaveActive() const {
    return false;
}

bool UEnemyWaveManager::GetAllWavesAreBlocked() const {
    return false;
}

bool UEnemyWaveManager::AreScriptedWavesBlocked() const {
    return false;
}

bool UEnemyWaveManager::AreNormalWavesBlocked() const {
    return false;
}

void UEnemyWaveManager::AddExternallySpawnedRift(ACorespawnRift* InNewRift) {
}


