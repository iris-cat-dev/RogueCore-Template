#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Transform -FallbackName=Transform
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Vector -FallbackName=Vector
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=BlueprintFunctionLibrary -FallbackName=BlueprintFunctionLibrary
#include "DeepPathFinderSize.h"
#include "EnemySpawnedDelegateDelegate.h"
#include "SpawningBlueprintLibrary.generated.h"

class UEnemyDescriptor;
class UEnemyGroupDescriptor;
class UObject;

UCLASS(Blueprintable)
class ROGUECORE_API USpawningBlueprintLibrary : public UBlueprintFunctionLibrary {
    GENERATED_BODY()
public:
    USpawningBlueprintLibrary();

    UFUNCTION(BlueprintAuthorityOnly, BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static void SpawnEnemyGroupDescriptorWithCallbackSpreadOut(UObject* WorldContextObject, UEnemyGroupDescriptor* descriptor, float Difficulty, TArray<FVector> Locations, bool Alert, DeepPathFinderSize pfSize, const FEnemySpawnedDelegate& Callback);
    
    UFUNCTION(BlueprintAuthorityOnly, BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static void SpawnEnemyGroupDescriptorSpreadOut(UObject* WorldContextObject, UEnemyGroupDescriptor* descriptor, float Difficulty, const TArray<FVector>& Locations, bool Alert, DeepPathFinderSize pfSize);
    
    UFUNCTION(BlueprintAuthorityOnly, BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static void SpawnEnemyGroupDescriptor(UObject* WorldContextObject, UEnemyGroupDescriptor* descriptor, float Difficulty, FVector Location, bool Alert, DeepPathFinderSize pfSize);
    
    UFUNCTION(BlueprintAuthorityOnly, BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static void SpawnEnemyAtTransform(UObject* WorldContextObject, UEnemyDescriptor* EnemyDescriptor, FTransform Transform, const FEnemySpawnedDelegate& Callback, bool Alert, bool scaleToDifficulty, bool spawnFX, DeepPathFinderSize pfSize);
    
    UFUNCTION(BlueprintAuthorityOnly, BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static void SpawnEnemiesFromRCPool(UObject* WorldContextObject, float Difficulty, const TArray<FVector>& Locations, bool Alert, bool isConstantPreassure, bool backFillWithConstantPressure);
    
    UFUNCTION(BlueprintAuthorityOnly, BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static void SpawnEnemiesFromPool(UObject* WorldContextObject, float Difficulty, const TArray<FVector>& Locations, bool Alert, bool isConstantPreassure);
    
    UFUNCTION(BlueprintAuthorityOnly, BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static void SpawnEnemiesAtLocationWithCallback(UObject* WorldContextObject, UEnemyDescriptor* EnemyDescriptor, int32 count, FVector Location, const FEnemySpawnedDelegate& Callback, bool Alert, bool scaleToDifficulty, DeepPathFinderSize pfSize);
    
    UFUNCTION(BlueprintAuthorityOnly, BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static void SpawnEnemiesAtLocationsWithCallback(UObject* WorldContextObject, UEnemyDescriptor* EnemyDescriptor, int32 count, const TArray<FVector>& Locations, const FEnemySpawnedDelegate& Callback, bool Alert, bool scaleToDifficulty, DeepPathFinderSize pfSize);
    
    UFUNCTION(BlueprintAuthorityOnly, BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static void SpawnEnemiesAtLocations(UObject* WorldContextObject, UEnemyDescriptor* EnemyDescriptor, int32 count, const TArray<FVector>& Locations, bool Alert, bool scaleToDifficulty, DeepPathFinderSize pfSize);
    
    UFUNCTION(BlueprintAuthorityOnly, BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static void SpawnEnemiesAtLocation(UObject* WorldContextObject, UEnemyDescriptor* EnemyDescriptor, int32 count, FVector Location, bool Alert, bool scaleToDifficulty, DeepPathFinderSize pfSize);
    
    UFUNCTION(BlueprintAuthorityOnly, BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static void SpawnEnemiesAtEachLocation(UObject* WorldContextObject, UEnemyDescriptor* EnemyDescriptor, int32 count, TArray<FVector> Locations, bool Alert, bool scaleToDifficulty, DeepPathFinderSize pfSize);
    
    UFUNCTION(BlueprintAuthorityOnly, BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static void SpawnEnemiesAcrossLocations(UObject* WorldContextObject, UEnemyDescriptor* EnemyDescriptor, int32 count, TArray<FVector> Locations, bool Alert, bool scaleToDifficulty, DeepPathFinderSize pfSize);
    
    UFUNCTION(BlueprintAuthorityOnly, BlueprintCallable, BlueprintPure, meta=(WorldContext="WorldContextObject"))
    static FTransform SnapToTerrain_AlignXWithNormal(UObject* WorldContextObject, const FVector& InLocation);
    
    UFUNCTION(BlueprintAuthorityOnly, BlueprintCallable, BlueprintPure, meta=(WorldContext="WorldContextObject"))
    static TArray<FVector> GetSpawnPointsInRange(UObject* WorldContextObject, float distanceToPlayers, int32 spawnPointCount, DeepPathFinderSize pfSize);
    
    UFUNCTION(BlueprintAuthorityOnly, BlueprintCallable, BlueprintPure, meta=(WorldContext="WorldContextObject"))
    static TArray<FVector> GetSpawnPointsInCircle(UObject* WorldContextObject, FVector Location, float Radius, int32 count, bool scaleToDificulty, float maxSpawnAngle, DeepPathFinderSize pfSize);
    
    UFUNCTION(BlueprintAuthorityOnly, BlueprintCallable, BlueprintPure, meta=(WorldContext="WorldContextObject"))
    static TArray<FVector> GetSpawnPointsFromLocation(UObject* WorldContextObject, FVector Location, float Distance, int32 spawnPointCount, DeepPathFinderSize pfSize);
    
    UFUNCTION(BlueprintAuthorityOnly, BlueprintCallable, BlueprintPure, meta=(WorldContext="WorldContextObject"))
    static TArray<FVector> GetSpawnPointsAroundLocation(UObject* WorldContextObject, FVector Location, float Distance, int32 spawnPointCount, DeepPathFinderSize pfSize);
    
    UFUNCTION(BlueprintAuthorityOnly, BlueprintCallable, BlueprintPure, meta=(WorldContext="WorldContextObject"))
    static FVector GetSpawnPointInRange(UObject* WorldContextObject, float distanceToPlayers, DeepPathFinderSize pfSize);
    
    UFUNCTION(BlueprintAuthorityOnly, BlueprintCallable, BlueprintPure, meta=(WorldContext="WorldContextObject"))
    static FVector GetSpawnPointFromLocation(UObject* WorldContextObject, FVector Location, float Distance, DeepPathFinderSize pfSize);
    
};

