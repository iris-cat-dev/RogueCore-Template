#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Box -FallbackName=Box
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Quat -FallbackName=Quat
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Transform -FallbackName=Transform
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Vector -FallbackName=Vector
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=Actor -FallbackName=Actor
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=LatentActionInfo -FallbackName=LatentActionInfo
#include "VisualLogger/VisualLoggerDebugSnapshotInterface.h"
#include "CarveOptionsCellSize.h"
#include "CarveSplineSegment.h"
#include "ECarveFilterType.h"
#include "EPreciousMaterialOptions.h"
#include "EncodedChunkId.h"
#include "CSGBuildOperationData.h"
#include "CSGRaycastHitInfo.h"
#include "CarveWithColliderOperationData.h"
#include "CarveWithSTLMeshOperationData.h"
#include "DebrisWhenCarving.h"
#include "DrillOperationData.h"
#include "ELandscapeCellFilter.h"
#include "EncodedChunkId.h"
#include "ESpecialDebrisType.h"
#include "FSDTerrainGenerationStats.h"
#include "GrenadeExplodeOperationData.h"
#include "MeltOperationData.h"
#include "PickaxeDigOperationData.h"
#include "RemoveFloatingIslandOperationData.h"
#include "RuntimeSpawnedDebris.h"
#include "SplineSegmentCarveOperationData.h"
#include "Templates/SubclassOf.h"
#include "TerrainBaseDoneDelegate.h"
#include "TerrainLateJoinData.h"
#include "TerrainSpawnDebrisOperationData.h"
#include "VisualLogger/VisualLoggerDebugSnapshotInterface.h"
#include "DeepCSGWorld.generated.h"

class ACSGBuilder;
class ADebrisDataActor;
class ADeepCSGWorld;
class AProceduralSetup;
class UAsyncPathRequests;
class UDebrisBase;
class UDebrisInstances;
class UDebrisMesh;
class UDebrisSet;
class UMaterialInterface;
class UObject;
class UPrimitiveComponent;
class USTLMeshCarver;
class UStaticMesh;
class UStaticMeshCarver;
class UTerrainMaterial;
class UTerrainMaterialsCollection;
class UTerrainType;

UCLASS(Blueprintable)
class ROGUECORE_API ADeepCSGWorld : public AActor, public IVisualLoggerDebugSnapshotInterface {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UTerrainMaterial* DebugCarveInsideTerrainMaterial;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UTerrainMaterial* DebugCarveOutsizeTerrainMaterial;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UTerrainMaterial* DebugCarveEdgeTerrainMaterial;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UTerrainMaterial* MOMTerrrainMaterial;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UTerrainMaterial* NitraTerrrainMaterial;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UTerrainMaterial* EmptyTerrainMaterial;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UTerrainMaterial* DefaultBurntTerrainMaterial;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UTerrainMaterial* DefaultHardRockMaterial;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UTerrainMaterial* DefaultBedRockMaterial;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UTerrainType* GoldTerrainType;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UTerrainType* MOMTerrainType;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UTerrainType* RockTerrainType;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UTerrainType* CrystalTerrainType;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UTerrainType* EmptyTerrainType;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UTerrainType* DirtTerrainType;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UTerrainType* DefaultBurntTerrainType;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UTerrainMaterialsCollection* TerrainMaterials;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<UDebrisSet*> StandardDebrisSets;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TArray<UDebrisBase*> DebrisLevelGenerationCarved;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TArray<UDebrisBase*> DebrisPreLargeCarved;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TArray<UDebrisBase*> DebrisLargeCarved;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TArray<UDebrisBase*> DebrisSmallCarved;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TArray<UDebrisBase*> DebrisMeshes;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UMaterialInterface* DefaultScannerMaterial;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UMaterialInterface* DefaultConstructionScannerMaterial;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<ACSGBuilder> TestLevelCarver;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FBox TestLevelCarverBoundingBox;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    ADebrisDataActor* DebrisActorInstance;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    int32 DebrisActorIndex;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    AProceduralSetup* ProceduralSetup;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TArray<UObject*> TerrainMaterialAssets;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UAsyncPathRequests* AsyncPathRequests;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FTerrainBaseDone OnBaseLayerCommitDone;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FTerrainBaseDone OnBaseLayerFinalCommitDone;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TArray<AActor*> TerrainAttachedActors;
    
    UPROPERTY(EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TArray<TWeakObjectPtr<UObject>> TerrainListeners;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TArray<UDebrisBase*> RegisteredDebrisList;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TArray<FDebrisWhenCarving> DebrisWhenCarvingList;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    TArray<UDebrisInstances*> DebrisInstanceList;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TArray<FRuntimeSpawnedDebris> RuntimeSpawnedDebris;
    
    UPROPERTY(EditAnywhere, Export, ReplicatedUsing=OnRep_ShowAlwaysScannerComponents, meta=(AllowPrivateAccess=true))
    TArray<TWeakObjectPtr<UPrimitiveComponent>> ShowAlwaysScannerComponents;
    
    UPROPERTY(EditAnywhere, Export, Replicated, meta=(AllowPrivateAccess=true))
    TArray<TWeakObjectPtr<UPrimitiveComponent>> FogOfWarScannerComponents;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TArray<UDebrisBase*> DebrisHandles;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    FTerrainLateJoinData LateJoinData;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TArray<FEncodedChunkId> VisibleChunks;
    
public:
    ADeepCSGWorld(const FObjectInitializer& ObjectInitializer);

    virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;

    UFUNCTION(BlueprintCallable, meta=(Latent, LatentInfo="LatentInfo"))
    static void WaitForRuntimeCarve(ADeepCSGWorld* CSGWorld, const FLatentActionInfo LatentInfo);
    
    UFUNCTION(BlueprintCallable)
    void UnRegisterScannerComponent(UPrimitiveComponent* Component);
    
    UFUNCTION(BlueprintCallable, NetMulticast, Reliable)
    void TerrainOp_SpawnDebris(const FTerrainSpawnDebrisOperationData& Data);
    
    UFUNCTION(BlueprintCallable, NetMulticast, Reliable)
    void TerrainOp_RemoveFloating(const FRemoveFloatingIslandOperationData& Data);
    
    UFUNCTION(BlueprintCallable, NetMulticast, Reliable)
    void TerrainOp_PickAxe(const FPickaxeDigOperationData& Data);
    
    UFUNCTION(BlueprintCallable, NetMulticast, Reliable)
    void TerrainOp_Melt(const FMeltOperationData& Data);
    
    UFUNCTION(BlueprintCallable, NetMulticast, Reliable)
    void TerrainOp_Explode(const FGrenadeExplodeOperationData& Data);
    
    UFUNCTION(BlueprintCallable, NetMulticast, Reliable)
    void TerrainOp_Drill(const FDrillOperationData& Data);
    
    UFUNCTION(BlueprintCallable, NetMulticast, Reliable)
    void TerrainOp_CarveSTLMesh(const FCarveWithSTLMeshOperationData& Data);
    
    UFUNCTION(BlueprintCallable, NetMulticast, Reliable)
    void TerrainOp_CarveSplineSegment(const FSplineSegmentCarveOperationData& Data);
    
    UFUNCTION(BlueprintCallable, NetMulticast, Reliable)
    void TerrainOp_CarveCSG(const FCSGBuildOperationData& Data);
    
    UFUNCTION(BlueprintCallable, NetMulticast, Reliable)
    void TerrainOp_CarveCollider(const FCarveWithColliderOperationData& Data);
    
protected:
    UFUNCTION(BlueprintCallable)
    void TerrainMaterialDataLoaded();
    
public:
    UFUNCTION(BlueprintCallable)
    void SpawnDebris(UDebrisMesh* Debris, const FVector& Pos, float Radius);
    
    UFUNCTION(BlueprintCallable)
    void SetVisibleToScanner(const FVector& Center, const FVector& Range);
    
    UFUNCTION(BlueprintCallable)
    void SetRockMaterialForTest(UTerrainMaterial* Material);
    
    UFUNCTION(BlueprintCallable)
    void SelectDebrisSettings();
    
    UFUNCTION(BlueprintCallable)
    void ResetEntireWorld();
    
    UFUNCTION(BlueprintCallable, NetMulticast, Reliable)
    void RemoveDebrisInstance_TerrainOp2(int32 instance, int32 Component);
    
    UFUNCTION(BlueprintCallable)
    void RemoveDebrisInSphere(const FVector& position, float Radius, bool onlyFragile, bool alsoDurable, ESpecialDebrisType onlyType);
    
    UFUNCTION(BlueprintCallable)
    void RegisterScannerComponent(UPrimitiveComponent* Component, bool useFogOfWar);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool Raycast(FVector Start, FVector Direction, float MaxDistance, FCSGRaycastHitInfo& HitInfo, ELandscapeCellFilter Filter) const;
    
protected:
    UFUNCTION(BlueprintCallable)
    void OnRep_ShowAlwaysScannerComponents();
    
public:
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool Linecast(FVector Start, FVector End, FCSGRaycastHitInfo& HitInfo, ELandscapeCellFilter Filter) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsPositionVisibleToScanner(const FVector& Pos) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsPointInsideTerrain(const FVector& Pos) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsComponentRegisteredWithScanner(UPrimitiveComponent* Component);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool InitialGenerationDone() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool HasUnfinishedRuntimeOperations() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 GetTerrainHash();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static int32 GetShadowQuality();
    
    UFUNCTION(BlueprintCallable)
    FFSDTerrainGenerationStats GetGenerationStats(bool detailed);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    ADebrisDataActor* GetDebrisDataActor() const;
    
    UFUNCTION(BlueprintCallable)
    void GetAllTerrainActorsAroundPoint(const FVector& Center, const FVector& Range, TArray<AActor*>& TerrainActors);
    
    UFUNCTION(BlueprintCallable)
    void GenerateAllMeshes();
    
    UFUNCTION(BlueprintCallable)
    void FinishGeneration_Blocking();
    
    UFUNCTION(BlueprintCallable)
    float FindTotalVolumeOfMaterialInWorld(UTerrainMaterial* Material);
    
    UFUNCTION(BlueprintCallable, meta=(Latent, LatentInfo="LatentInfo"))
    static void CarveWithSTLMeshUsingTransform_Wait(ADeepCSGWorld* CSGWorld, USTLMeshCarver* MeshCarver, UTerrainMaterial* Material, ECarveFilterType CarveFilter, const FTransform& Transform, EPreciousMaterialOptions Precious, FLatentActionInfo LatentInfo);
    
    UFUNCTION(BlueprintCallable)
    void CarveWithSTLMeshUsingTransform(USTLMeshCarver* MeshCarver, UTerrainMaterial* Material, ECarveFilterType CarveFilter, const FTransform& Transform, EPreciousMaterialOptions Precious);
    
    UFUNCTION(BlueprintCallable, meta=(Latent, LatentInfo="LatentInfo"))
    static void CarveWithSTLMesh_Wait(ADeepCSGWorld* CSGWorld, USTLMeshCarver* MeshCarver, UTerrainMaterial* Material, ECarveFilterType CarveFilter, FVector Pos, FQuat orientation, FVector Scale, EPreciousMaterialOptions Precious, FLatentActionInfo LatentInfo);
    
    UFUNCTION(BlueprintCallable)
    void CarveWithSTLMesh(USTLMeshCarver* MeshCarver, UTerrainMaterial* Material, ECarveFilterType CarveFilter, FVector Pos, FQuat orientation, FVector Scale, EPreciousMaterialOptions Precious);
    
    UFUNCTION(BlueprintCallable, meta=(Latent, LatentInfo="LatentInfo"))
    static void CarveWithStaticMeshUsingTransform_Wait(ADeepCSGWorld* CSGWorld, UStaticMeshCarver* MeshCarver, UTerrainMaterial* Material, ECarveFilterType CarveFilter, const FTransform& Transform, EPreciousMaterialOptions Precious, FLatentActionInfo LatentInfo);
    
    UFUNCTION(BlueprintCallable)
    void CarveWithStaticMeshUsingTransform(UStaticMeshCarver* MeshCarver, UTerrainMaterial* Material, ECarveFilterType CarveFilter, const FTransform& Transform, EPreciousMaterialOptions Precious);
    
    UFUNCTION(BlueprintCallable)
    void CarveWithStaticMesh(UStaticMeshCarver* MeshCarver, UTerrainMaterial* Material, ECarveFilterType CarveFilter, FVector Pos, FQuat orientation, FVector Scale, EPreciousMaterialOptions Precious);
    
    UFUNCTION(BlueprintCallable)
    void CarveWithSplineSegments(const TArray<FCarveSplineSegment>& Segments, UTerrainMaterial* Material, float Noise, ECarveFilterType CarveFilter, EPreciousMaterialOptions Precious);
    
    UFUNCTION(BlueprintCallable)
    void CarveWithSplineSegment(const FVector& SplineStart, const FVector& SplineStartTangent, const FVector& SplineEnd, const FVector& SplineEndTangent, float Radius, float Noise, UTerrainMaterial* Material, ECarveFilterType CarveFilter, EPreciousMaterialOptions Precious);
    
    UFUNCTION(BlueprintCallable, meta=(Latent, LatentInfo="LatentInfo"))
    static void CarveWithMeshUsingTransform_Wait(ADeepCSGWorld* CSGWorld, UStaticMesh* StaticMesh, UTerrainMaterial* Material, ECarveFilterType CarveFilter, const FTransform& Transform, float ExpensiveNoise, EPreciousMaterialOptions Precious, FLatentActionInfo LatentInfo);
    
    UFUNCTION(BlueprintCallable)
    void CarveWithMeshUsingTransform(UStaticMesh* StaticMesh, UTerrainMaterial* Material, ECarveFilterType CarveFilter, const FTransform& Transform, float ExpensiveNoise, EPreciousMaterialOptions Precious, CarveOptionsCellSize CarverSize, bool anchorCenterPosition);
    
    UFUNCTION(BlueprintCallable, meta=(Latent, LatentInfo="LatentInfo"))
    static void CarveWithMesh_Wait(ADeepCSGWorld* CSGWorld, UStaticMesh* StaticMesh, UTerrainMaterial* Material, ECarveFilterType CarveFilter, FVector Pos, FQuat orientation, FVector Scale, FLatentActionInfo LatentInfo);
    
    UFUNCTION(BlueprintCallable)
    void CarveWithMesh(UStaticMesh* StaticMesh, UTerrainMaterial* Material, ECarveFilterType CarveFilter, FVector Pos, FQuat orientation, FVector Scale, EPreciousMaterialOptions Precious);
    
    UFUNCTION(BlueprintCallable)
    void CarveWithCSGBuild(TSubclassOf<ACSGBuilder> CSGModel, const FTransform& Transform);
    
    UFUNCTION(BlueprintCallable)
    float CalcApproximateTerrainDensity(FVector Pos, float Radius);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    UTerrainMaterial* BPGetTerrainMaterial(int32 Handle) const;
    
    UFUNCTION(BlueprintCallable)
    void BaseLayerCommitFinal(bool blocking);
    
    UFUNCTION(BlueprintCallable)
    void BaseLayerCommit(bool blocking, bool scheduleTesselation);
    
    UFUNCTION(BlueprintCallable)
    void AttachActorToTerrain(AActor* Actor, FVector Pos);
    
    UFUNCTION(BlueprintCallable)
    void ApplyBaseDebrisCarvers(const TArray<UDebrisBase*>& Carvers);
    

    // Fix for true pure virtual functions not being implemented
};

