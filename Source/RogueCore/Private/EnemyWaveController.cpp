#include "EnemyWaveController.h"

UEnemyWaveController::UEnemyWaveController() {
    this->Type = EWaveControllerType::Normal;
    this->IsComplete = false;
    this->IsSuitableForSolo = true;
}


void UEnemyWaveController::SpawnRifts_Async(FLatentActionInfo LatentInfo, const FVector InQueryLocation, const FRiftSpawnOverrides Overrides) {
}

TArray<FVector> UEnemyWaveController::SpawnRifts(const FVector InQueryLocation, const FRiftSpawnOverrides Overrides) {
    return TArray<FVector>();
}


void UEnemyWaveController::RemoveRifts() {
}



EWaveControllerType UEnemyWaveController::GetType() const {
    return EWaveControllerType::Normal;
}

void UEnemyWaveController::GetNearestRifts(TArray<ACorespawnRift*>& OutRifts, FVector InLocation, int32 InNumberOfRifts) const {
}

void UEnemyWaveController::GetNearestRiftLocations(TArray<FVector>& OutRifts, FVector InLocation, int32 InNumberOfRifts) const {
}

TArray<FVector> UEnemyWaveController::GetLastSpawnedRiftLocations() const {
    return TArray<FVector>();
}


