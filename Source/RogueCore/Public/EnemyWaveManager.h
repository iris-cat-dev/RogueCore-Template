#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Vector -FallbackName=Vector
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=ActorComponent -FallbackName=ActorComponent
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=LatentActionInfo -FallbackName=LatentActionInfo
#include "DelegateDelegate.h"
#include "NormalWaveSpawnedDelegate.h"
#include "RiftSpawnOverrides.h"
#include "Templates/SubclassOf.h"
#include "WaveEntry.h"
#include "EnemyWaveManager.generated.h"

class ACorespawnRift;
class AFSDGameMode;
class APawn;
class UEnemySpawnManager;
class UEnemyWaveController;
class UObject;

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class UEnemyWaveManager : public UActorComponent {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FNormalWaveSpawned OnNormalWaveTimeUpdated;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FDelegate OnEndWaveTriggered;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftClassPtr<UEnemyWaveController> AlwaysRunningWave;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FWaveEntry> ScriptedWaves;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FWaveEntry> EndMissionWaves;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TArray<UEnemyWaveController*> ActiveScriptedWaves;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TArray<UEnemyWaveController*> ActiveSecretWaves;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float StartDelay;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float NoWavesBeforeRedTime;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float spawnRadiusFromSpawnPoint;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    bool ScriptedWavesEnabled;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool NormalWavesEnabled;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftClassPtr<ACorespawnRift> RiftClass;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftClassPtr<ACorespawnRift> FallbackRiftClass;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float RiftSpawnDistance;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float RiftOptimalSpawnDistance;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float RiftMinSpawnDistance;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TArray<ACorespawnRift*> SpawnedRifts;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    bool RiftsAreOpen;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 RiftSpawnCount;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool RiftsArePermanentAndAlwaysActive;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    AFSDGameMode* GameMode;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    UEnemySpawnManager* SpawnManager;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TArray<UObject*> NormalWavesBlockStack;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TArray<UObject*> ScriptedWavesBlockStack;
    
public:
    UEnemyWaveManager(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintCallable)
    UEnemyWaveController* TriggerWave(TSubclassOf<UEnemyWaveController> waveClass);
    
    UFUNCTION(BlueprintCallable)
    UEnemyWaveController* TriggerSecretWave(TSubclassOf<UEnemyWaveController> waveClass);
    
    UFUNCTION(BlueprintCallable)
    void TriggerEndWave(bool cancelAllWaves);
    
    UFUNCTION(BlueprintCallable)
    void StopAllSecretWaves();
    
    UFUNCTION(BlueprintAuthorityOnly, BlueprintCallable)
    void SpawnScriptedWave();
    
    UFUNCTION(BlueprintCallable, meta=(Latent, LatentInfo="LatentInfo"))
    void SpawnRifts_Async(FLatentActionInfo LatentInfo, const FVector& InQueryLocation, const FRiftSpawnOverrides Overrides);
    
    UFUNCTION(BlueprintCallable)
    TArray<FVector> SpawnRifts(const FVector& InQueryLocation, const FRiftSpawnOverrides Overrides);
    
    UFUNCTION(BlueprintCallable)
    void SetAllWavesAreBlocked(const bool allWavesAreBlocked);
    
    UFUNCTION(BlueprintAuthorityOnly, BlueprintCallable)
    void PushDisableScriptedWaves(UObject* Owner);
    
    UFUNCTION(BlueprintAuthorityOnly, BlueprintCallable)
    void PushDisableNormalWaves(UObject* Owner);
    
    UFUNCTION(BlueprintAuthorityOnly, BlueprintCallable)
    void PopDisableScriptedWaves(UObject* Owner);
    
    UFUNCTION(BlueprintAuthorityOnly, BlueprintCallable)
    void PopDisableNormalWaves(UObject* Owner);
    
private:
    UFUNCTION(BlueprintCallable)
    void OnMatchEnded();
    
    UFUNCTION(BlueprintCallable)
    void OnEnemySpawned(APawn* Enemy);
    
public:
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsScriptedWaveActive() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool GetAllWavesAreBlocked() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool AreScriptedWavesBlocked() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool AreNormalWavesBlocked() const;
    
    UFUNCTION(BlueprintCallable)
    void AddExternallySpawnedRift(ACorespawnRift* InNewRift);
    
};

