#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Transform -FallbackName=Transform
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Vector -FallbackName=Vector
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=ActorComponent -FallbackName=ActorComponent
#include "PlaceActorParams.h"
#include "PlaceActorPathRequirement.h"
#include "SpawnActorDelegateDelegate.h"
#include "StaticSpawnPointSelection.h"
#include "Templates/SubclassOf.h"
#include "SpawnActorWithDebrisPosComponent.generated.h"

class AActor;
class AProceduralSetup;
class UCurveFloat;
class UDebrisPositioning;

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class ROGUECORE_API USpawnActorWithDebrisPosComponent : public UActorComponent {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float MinDistanceBetweenSpwans;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool AddTerrainPlacementBlockers;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool AvoidImportantLocations;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float MinDistanceToImportantLocations;
    
public:
    USpawnActorWithDebrisPosComponent(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintCallable)
    bool PlaceActorsWithCallback(int32 NumToSpawn, int32 NumToSpawnMin, int32 NumAllowedChecks, TSubclassOf<AActor> SpawnedActorClass, AProceduralSetup* setup, float Radius, UDebrisPositioning* DebrisPositioning, const TArray<FVector>& LocationsToAvoid, UCurveFloat* AvoidCostCurve, FSpawnActorDelegate OnSpawned, FVector CustomLocation);
    
    UFUNCTION(BlueprintCallable)
    bool PlaceActorsUsingParams(const FPlaceActorParams& InParams, TArray<AActor*>& OutSpawnedActors);
    
    UFUNCTION(BlueprintCallable)
    bool PlaceActors(int32 NumToSpawn, int32 NumToSpawnMin, int32 NumAllowedChecks, TSubclassOf<AActor> SpawnedActorClass, AProceduralSetup* setup, float Radius, UDebrisPositioning* DebrisPositioning, const TArray<FVector>& LocationsToAvoid, UCurveFloat* AvoidCostCurve, TArray<AActor*>& OutSpawnedActors, FVector CustomLocation, float UseStaticSpawnPointProbability, FStaticSpawnPointSelection StaticSpawnPointType, FPlaceActorPathRequirement PathRequirement);
    
    UFUNCTION(BlueprintCallable)
    bool GetLocations(int32 NumToSpawn, int32 NumToSpawnMin, int32 NumAllowedChecks, TSubclassOf<AActor> SpawnedActorClass, AProceduralSetup* setup, float Radius, UDebrisPositioning* DebrisPositioning, const TArray<FVector>& LocationsToAvoid, UCurveFloat* AvoidCostCurve, TArray<FTransform>& OutLocations, FVector CustomLocation, FPlaceActorPathRequirement PathRequirement);
    
    UFUNCTION(BlueprintCallable)
    void AddTerrainPlacement(AActor* Actor, AProceduralSetup* setup);
    
};

