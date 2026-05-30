#include "SpawningBlueprintLibrary.h"

USpawningBlueprintLibrary::USpawningBlueprintLibrary() {
}

void USpawningBlueprintLibrary::SpawnEnemyGroupDescriptorWithCallbackSpreadOut(UObject* WorldContextObject, UEnemyGroupDescriptor* descriptor, float Difficulty, TArray<FVector> Locations, bool Alert, DeepPathFinderSize pfSize, const FEnemySpawnedDelegate& Callback) {
}

void USpawningBlueprintLibrary::SpawnEnemyGroupDescriptorSpreadOut(UObject* WorldContextObject, UEnemyGroupDescriptor* descriptor, float Difficulty, const TArray<FVector>& Locations, bool Alert, DeepPathFinderSize pfSize) {
}

void USpawningBlueprintLibrary::SpawnEnemyGroupDescriptor(UObject* WorldContextObject, UEnemyGroupDescriptor* descriptor, float Difficulty, FVector Location, bool Alert, DeepPathFinderSize pfSize) {
}

void USpawningBlueprintLibrary::SpawnEnemyAtTransform(UObject* WorldContextObject, UEnemyDescriptor* EnemyDescriptor, FTransform Transform, const FEnemySpawnedDelegate& Callback, bool Alert, bool scaleToDifficulty, bool spawnFX, DeepPathFinderSize pfSize) {
}

void USpawningBlueprintLibrary::SpawnEnemiesFromRCPool(UObject* WorldContextObject, float Difficulty, const TArray<FVector>& Locations, bool Alert, bool isConstantPreassure, bool backFillWithConstantPressure) {
}

void USpawningBlueprintLibrary::SpawnEnemiesFromPool(UObject* WorldContextObject, float Difficulty, const TArray<FVector>& Locations, bool Alert, bool isConstantPreassure) {
}

void USpawningBlueprintLibrary::SpawnEnemiesAtLocationWithCallback(UObject* WorldContextObject, UEnemyDescriptor* EnemyDescriptor, int32 count, FVector Location, const FEnemySpawnedDelegate& Callback, bool Alert, bool scaleToDifficulty, DeepPathFinderSize pfSize) {
}

void USpawningBlueprintLibrary::SpawnEnemiesAtLocationsWithCallback(UObject* WorldContextObject, UEnemyDescriptor* EnemyDescriptor, int32 count, const TArray<FVector>& Locations, const FEnemySpawnedDelegate& Callback, bool Alert, bool scaleToDifficulty, DeepPathFinderSize pfSize) {
}

void USpawningBlueprintLibrary::SpawnEnemiesAtLocations(UObject* WorldContextObject, UEnemyDescriptor* EnemyDescriptor, int32 count, const TArray<FVector>& Locations, bool Alert, bool scaleToDifficulty, DeepPathFinderSize pfSize) {
}

void USpawningBlueprintLibrary::SpawnEnemiesAtLocation(UObject* WorldContextObject, UEnemyDescriptor* EnemyDescriptor, int32 count, FVector Location, bool Alert, bool scaleToDifficulty, DeepPathFinderSize pfSize) {
}

void USpawningBlueprintLibrary::SpawnEnemiesAtEachLocation(UObject* WorldContextObject, UEnemyDescriptor* EnemyDescriptor, int32 count, TArray<FVector> Locations, bool Alert, bool scaleToDifficulty, DeepPathFinderSize pfSize) {
}

void USpawningBlueprintLibrary::SpawnEnemiesAcrossLocations(UObject* WorldContextObject, UEnemyDescriptor* EnemyDescriptor, int32 count, TArray<FVector> Locations, bool Alert, bool scaleToDifficulty, DeepPathFinderSize pfSize) {
}

FTransform USpawningBlueprintLibrary::SnapToTerrain_AlignXWithNormal(UObject* WorldContextObject, const FVector& InLocation) {
    return FTransform{};
}

TArray<FVector> USpawningBlueprintLibrary::GetSpawnPointsInRange(UObject* WorldContextObject, float distanceToPlayers, int32 spawnPointCount, DeepPathFinderSize pfSize) {
    return TArray<FVector>();
}

TArray<FVector> USpawningBlueprintLibrary::GetSpawnPointsInCircle(UObject* WorldContextObject, FVector Location, float Radius, int32 count, bool scaleToDificulty, float maxSpawnAngle, DeepPathFinderSize pfSize) {
    return TArray<FVector>();
}

TArray<FVector> USpawningBlueprintLibrary::GetSpawnPointsFromLocation(UObject* WorldContextObject, FVector Location, float Distance, int32 spawnPointCount, DeepPathFinderSize pfSize) {
    return TArray<FVector>();
}

TArray<FVector> USpawningBlueprintLibrary::GetSpawnPointsAroundLocation(UObject* WorldContextObject, FVector Location, float Distance, int32 spawnPointCount, DeepPathFinderSize pfSize) {
    return TArray<FVector>();
}

FVector USpawningBlueprintLibrary::GetSpawnPointInRange(UObject* WorldContextObject, float distanceToPlayers, DeepPathFinderSize pfSize) {
    return FVector{};
}

FVector USpawningBlueprintLibrary::GetSpawnPointFromLocation(UObject* WorldContextObject, FVector Location, float Distance, DeepPathFinderSize pfSize) {
    return FVector{};
}


