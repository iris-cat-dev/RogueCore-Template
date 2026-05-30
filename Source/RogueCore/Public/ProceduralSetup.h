#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=RandomStream -FallbackName=RandomStream
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Vector -FallbackName=Vector
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=Actor -FallbackName=Actor
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=LatentActionInfo -FallbackName=LatentActionInfo
#include "CarvedResource.h"
#include "CollectableSpawnableItem.h"
#include "DebrisCapsule.h"
#include "ECriticalItemPass.h"
#include "EDebrisItemPass.h"
#include "ESpawnSettings.h"
#include "EncounterSpecialItem.h"
#include "EncountersSpawnedDelegateDelegate.h"
#include "GemResourceAmount.h"
#include "GeneratedDebris.h"
#include "GeneratedInfluenceSets.h"
#include "GeneratedInstantCarvers.h"
#include "GeneratedTerrainActor.h"
#include "InfluenceMap.h"
#include "PathObstacle.h"
#include "RandRange.h"
#include "RoomNode.h"
#include "Templates/SubclassOf.h"
#include "TerrainPlacementDebugGroup.h"
#include "TunnelNode.h"
#include "ProceduralSetup.generated.h"

class ADebrisDataActor;
class ADeepCSGWorld;
class AFSDPlayerController;
class AProceduralSetup;
class ATunnelDecoration;
class UBiome;
class UCaveInfluencer;
class UConstructionSpawnerComponent;
class UDebrisBase;
class UFloodFillSettings;
class UMaterialParameterCollection;
class UMissionDNA;
class UNoisyPathfinderComponent;
class UObject;
class UPLSEncounterComponent;
class UProceduralObjectColliders;
class UProceduralResources;
class UProceduralTunnelComponent;
class UProceduralVeinsComponent;
class UResourceData;
class URoomGeneratorBase;
class USpecialEvent;
class UTunnelParameters;

UCLASS(Blueprintable)
class ROGUECORE_API AProceduralSetup : public AActor {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool ShowItemNoisePattern;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 Seed;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool UseRandomSeed;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    FRandomStream RandomStream;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    FRandomStream RandomStreamServer;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    FRandomStream RandomStreamAsync;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    FRandomStream RandomStreamAsyncServer;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    FEncountersSpawnedDelegate OnEncounterSpawnedEvent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TArray<FEncounterSpecialItem> SpecialEncountersToSpawn;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    USpecialEvent* ForcedMachineEvent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    USpecialEvent* ForcedTreasure;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    USpecialEvent* ForcedOtherEvent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TSoftClassPtr<ADebrisDataActor> StageDebrisActor;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TMap<TSubclassOf<AActor>, FGeneratedTerrainActor> SpawnedTerrainActors;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UNoisyPathfinderComponent* NoisyPathfinder;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UProceduralTunnelComponent* ProceduralTunnel;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UPLSEncounterComponent* Encounters;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UConstructionSpawnerComponent* ConstructionSpawnerComponent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UProceduralVeinsComponent* Veins;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UProceduralResources* Resources;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UProceduralObjectColliders* ObjectColliders;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    ADeepCSGWorld* CSGWorld;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UFloodFillSettings* PathfinderNoise;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TArray<FCarvedResource> CarvedResources;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TSubclassOf<UMissionDNA> MissionDNA;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TArray<FGemResourceAmount> GemResourcesToGenerate;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TArray<FCollectableSpawnableItem> CollectablesToGenerate;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ESpawnSettings SpawnSettings;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool CanSpawnSpecialEvents;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool ShouldCarveTunnels;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TArray<FRoomNode> Rooms;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TArray<FRoomNode> RoomsInitialState;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TArray<int32> RoomsNonPostCarvedIndicies;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TArray<FTunnelNode> tunnels;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TArray<ATunnelDecoration*> SpawnedTunnelDecoration;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    FGeneratedInfluenceSets GeneratedInfluenceSets;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    FGeneratedInstantCarvers GeneratedInstantCarvers;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    FGeneratedDebris GeneratedDebris;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UBiome* Biome;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    float missionLength;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TArray<FPathObstacle> PathObstacles;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    FInfluenceMap InfluenceMap;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TArray<UResourceData*> SpawnedResources;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Replicated, Transient, meta=(AllowPrivateAccess=true))
    float CaveDepth;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    AActor* PostProcessActor;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    USpecialEvent* SpecialEvent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool IsInitialized;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 CurrentRoomPass;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool Pass1Completed;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool UsePerLevelCritterSpawning;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    FString LastCompletedPLSPass;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TArray<FString> SpawnedConstructionNames;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    FString CurrentAsyncTaskName;
    
public:
    AProceduralSetup(const FObjectInitializer& ObjectInitializer);

    virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;

    UFUNCTION(BlueprintCallable)
    bool ToggleTrackSpawnedTerrainActor(TSubclassOf<AActor> SubClass);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void StartMusicAndAmbient(int32 Music);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void StartGenerationOnClient(AFSDPlayerController* client);
    
    UFUNCTION(BlueprintCallable, meta=(Latent, LatentInfo="LatentInfo"))
    void SpawnTunnelDecoration_Async(FLatentActionInfo LatentInfo);
    
    UFUNCTION(BlueprintCallable)
    void SpawnTunnelDecoration();
    
    UFUNCTION(BlueprintCallable)
    void SpawnSpecialEvents();
    
    UFUNCTION(BlueprintCallable, meta=(Latent, LatentInfo="LatentInfo"))
    void SpawnPostConstructionActors_Async(FLatentActionInfo LatentInfo);
    
    UFUNCTION(BlueprintCallable)
    void SpawnPostConstructionActors();
    
    UFUNCTION(BlueprintAuthorityOnly, BlueprintCallable)
    void SpawnObjectiveEncounter();
    
    UFUNCTION(BlueprintAuthorityOnly, BlueprintCallable)
    void SpawnObjectiveCriticalItems(const ECriticalItemPass& pass);
    
    UFUNCTION(BlueprintCallable, meta=(Latent, LatentInfo="LatentInfo"))
    void SpawnLevelDecoration_Async(FLatentActionInfo LatentInfo);
    
    UFUNCTION(BlueprintCallable)
    void SpawnLevelDecoration();
    
    UFUNCTION(BlueprintCallable, meta=(Latent, LatentInfo="LatentInfo"))
    static void SpawnItems_Async(AProceduralSetup* setup, FLatentActionInfo LatentInfo);
    
    UFUNCTION(BlueprintCallable)
    void SpawnItems();
    
    UFUNCTION(BlueprintCallable, meta=(Latent, LatentInfo="LatentInfo"))
    void SpawnFinalPostConstructionActors_Async(FLatentActionInfo LatentInfo);
    
    UFUNCTION(BlueprintCallable)
    void SpawnFinalPostConstructionActors();
    
    UFUNCTION(BlueprintAuthorityOnly, BlueprintCallable)
    void SpawnEncounters();
    
    UFUNCTION(BlueprintCallable, meta=(Latent, LatentInfo="LatentInfo"))
    static void SpawnDebrisItems_Async(AProceduralSetup* setup, FLatentActionInfo LatentInfo, EDebrisItemPass pass, int32 Depth);
    
    UFUNCTION(BlueprintCallable)
    void SpawnDebrisItems(EDebrisItemPass pass);
    
    UFUNCTION(BlueprintCallable, meta=(Latent, LatentInfo="LatentInfo"))
    void SpawnConstructions_Async(FLatentActionInfo LatentInfo);
    
    UFUNCTION(BlueprintCallable)
    void SpawnConstructions();
    
    UFUNCTION(BlueprintCallable)
    void SetSeed(int32 NewSeed);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void ResetData();
    
    UFUNCTION(BlueprintCallable)
    void RemoveBLockedEntrances();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnPLSDataRecieved();
    
protected:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnObjectivesCompleted();
    
public:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnCarverDataRecieved(EDebrisItemPass pass);
    
    UFUNCTION(BlueprintCallable, meta=(Latent, LatentInfo="LatentInfo"))
    void LoadPostConstructionActors(FLatentActionInfo LatentInfo, bool DoAsyncLoading);
    
    UFUNCTION(BlueprintCallable, meta=(Latent, LatentInfo="LatentInfo"))
    void LoadLevelDecoration(FLatentActionInfo LatentInfo, bool DoAsyncLoading);
    
    UFUNCTION(BlueprintCallable, meta=(Latent, LatentInfo="LatentInfo"))
    void LoadConstructionGroups(FLatentActionInfo LatentInfo, bool DoAsyncLoading);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsGeneratedDataReady() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsCarverDataReady(EDebrisItemPass pass) const;
    
    UFUNCTION(BlueprintCallable)
    void InitializeObjectives();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    TArray<FTerrainPlacementDebugGroup> GetTerrainPlacementDebug() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 GetRoomIndexFromPosition(const FVector& position) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    TArray<FRoomNode> GetNonPostCarvedRooms() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    UMissionDNA* GetMissionDNA() const;
    
protected:
    UFUNCTION(BlueprintCallable, BlueprintPure)
    TMap<FString, float> GetGemsResourceAmounts() const;
    
public:
    UFUNCTION(BlueprintCallable, BlueprintPure)
    ADeepCSGWorld* GetCSGWorld() const;
    
protected:
    UFUNCTION(BlueprintCallable, BlueprintPure)
    TMap<FString, float> GetCollectablesResourceAmounts() const;
    
public:
    UFUNCTION(BlueprintCallable, meta=(Latent, LatentInfo="LatentInfo"))
    static void GenerateRoomsFromGraph_Async(AProceduralSetup* setup, FLatentActionInfo LatentInfo, int32 CarvePass);
    
    UFUNCTION(BlueprintCallable)
    void GenerateRoomsFromGraph(int32 CarvePass);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void GenerateLandscapeFromData(int32 NewSeed, const TArray<FRoomNode>& NewRooms, const TArray<FPathObstacle>& Obstacles);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void GenerateLandscape();
    
    UFUNCTION(BlueprintCallable)
    FVector FindLocationInDirection(FVector Origin, FVector Direction, float horizontalDeviation, float verticalDeviation, FRandRange Distance, float additionalDistance);
    
    UFUNCTION(BlueprintCallable)
    void FindEntrancesForAllConnections();
    
    UFUNCTION(BlueprintCallable, meta=(Latent, LatentInfo="LatentInfo"))
    static void FillTunnels_Async(AProceduralSetup* setup, FLatentActionInfo LatentInfo);
    
    UFUNCTION(BlueprintCallable)
    void FillTunnels();
    
    UFUNCTION(BlueprintCallable)
    void DoneCarving();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool DoAsyncThreadGeneration() const;
    
    UFUNCTION(BlueprintCallable)
    void CreateTunnelPaths();
    
    UFUNCTION(BlueprintCallable)
    int32 CreateItemDepths();
    
    UFUNCTION(BlueprintCallable)
    void CreateGeneratedInfluenceSet();
    
    UFUNCTION(BlueprintCallable)
    void CopyBiomeRockMaterialParametersToCollection(UMaterialParameterCollection* toCollection);
    
    UFUNCTION(BlueprintCallable)
    int32 ConnectRoomIds(int32 fromID, int32 toID, bool hasDirt, UTunnelParameters* tunnelParameterOverride);
    
    UFUNCTION(BlueprintCallable)
    void CommitCarving(bool finalCommit, bool generateMesh);
    
    UFUNCTION(BlueprintCallable)
    void CarveWithGeneratedInstantCarvers();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void CarveTunnels();
    
    UFUNCTION(BlueprintCallable, meta=(Latent, LatentInfo="LatentInfo"))
    void CarveDirt_Async(FLatentActionInfo LatentInfo);
    
    UFUNCTION(BlueprintCallable)
    void CarveDirt();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void BeginLiveGeneration();
    
    UFUNCTION(BlueprintCallable)
    void BeginGenerating();
    
    UFUNCTION(BlueprintCallable)
    int32 AddTunnelToRooms(UPARAM(Ref) FRoomNode& From, UPARAM(Ref) FRoomNode& To, bool hasDirt);
    
    UFUNCTION(BlueprintCallable)
    int32 AddTunnelToRoomIds(int32 fromID, int32 toID, bool hasDirt);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void AddRoomToInitialState(const FRoomNode& RoomNode);
    
    UFUNCTION(BlueprintCallable)
    int32 AddRoom(FVector Location, bool CanHaveEnemies, URoomGeneratorBase* RoomGenerator, bool canBeRotated, FVector& outCenter, FRoomNode& outRoom, float ResourceMultiplier, const bool CanHaveExitElevator);
    
    UFUNCTION(BlueprintCallable)
    void AddInfluenceToTunnelEntrances(UCaveInfluencer* Influencer, float Range);
    
    UFUNCTION(BlueprintCallable)
    void AddImportantLocation(const FVector& Location, float Radius);
    
    UFUNCTION(BlueprintAuthorityOnly, BlueprintCallable)
    void AddEnemyDebris();
    
    UFUNCTION(BlueprintCallable)
    int32 AddDebrisCollider(const FDebrisCapsule& Capsule);
    
    UFUNCTION(BlueprintCallable)
    void AddDebris(UDebrisBase* Debris, UObject* Influencer);
    
    UFUNCTION(BlueprintCallable)
    void AddCaveInfluence(UCaveInfluencer* Influencer, const FVector& Location, float Range);
    
    UFUNCTION(BlueprintCallable)
    int32 AddAirParticlesCollider(const FDebrisCapsule& Capsule);
    
};

