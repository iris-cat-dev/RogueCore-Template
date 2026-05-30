#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Transform -FallbackName=Transform
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Vector -FallbackName=Vector
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=BlueprintFunctionLibrary -FallbackName=BlueprintFunctionLibrary
#include "StaticSpawnPointSelection.h"
#include "TerrainPlacementActor.h"
#include "TerrainPlacementDistanceRequirements.h"
#include "TerrainPlacementLocationRequirements.h"
#include "TerrainPlacementPathRequirements.h"
#include "TerrainPlacementRoomFilter.h"
#include "TerrainPlacementSpawnActors.h"
#include "TerrainPlacementSpawnPoints.h"
#include "TerrainPlacementSpawnRooms.h"
#include "TerrainPlacementSpawnSphere.h"
#include "UnusedTerrainPointsSettings.h"
#include "WeightedTerrainPointActors.h"
#include "TerrainPlacementLibrary.generated.h"

class AActor;
class AProceduralSetup;
class UObject;

UCLASS(Blueprintable)
class ROGUECORE_API UTerrainPlacementLibrary : public UBlueprintFunctionLibrary {
    GENERATED_BODY()
public:
    UTerrainPlacementLibrary();

    UFUNCTION(BlueprintCallable)
    static TArray<AActor*> PlaceTerrainActorsOnUnusedPoints(AProceduralSetup* ProceduralSetup, FWeightedTerrainPointActors WeightedActors, FUnusedTerrainPointsSettings UnusedPointsSettings);
    
    UFUNCTION(BlueprintCallable)
    static TArray<AActor*> PlaceTerrainActorsInSphere(AProceduralSetup* ProceduralSetup, const FTerrainPlacementSpawnActors& Actors, const FTerrainPlacementSpawnSphere& Sphere, const FTerrainPlacementLocationRequirements LocationRequirements, const FTerrainPlacementDistanceRequirements DistanceRequirements, const FTerrainPlacementPathRequirements PathRequirements);
    
    UFUNCTION(BlueprintCallable)
    static TArray<AActor*> PlaceTerrainActorsInSpawnPointsInSphere(AProceduralSetup* ProceduralSetup, const FTerrainPlacementSpawnActors& Actors, const FTerrainPlacementSpawnPoints& Points);
    
    UFUNCTION(BlueprintCallable)
    static TArray<AActor*> PlaceTerrainActorsInSpawnPointsInRooms(AProceduralSetup* ProceduralSetup, const FTerrainPlacementActor Actor, const FStaticSpawnPointSelection Selection, const FTerrainPlacementRoomFilter Room);
    
    UFUNCTION(BlueprintCallable)
    static TArray<AActor*> PlaceTerrainActorsInRooms(AProceduralSetup* ProceduralSetup, const FTerrainPlacementSpawnActors& Actors, const FTerrainPlacementSpawnRooms& Rooms, const FTerrainPlacementLocationRequirements LocationRequirements, const FTerrainPlacementDistanceRequirements DistanceRequirements, const FTerrainPlacementPathRequirements PathRequirements);
    
    UFUNCTION(BlueprintCallable, BlueprintPure, meta=(WorldContext="WorldContext"))
    static bool IsPointInsideTerrain(const UObject* WorldContext, const FVector PointToCheck);
    
    UFUNCTION(BlueprintCallable)
    static TArray<FTransform> ComputeTerrainPlacementsInSphere(AProceduralSetup* ProceduralSetup, const FTerrainPlacementSpawnActors& Actors, const FTerrainPlacementSpawnSphere& Sphere, const FTerrainPlacementLocationRequirements& LocationRequirements, const FTerrainPlacementDistanceRequirements& DistanceRequirements, const FTerrainPlacementPathRequirements& PathRequirements);
    
};

