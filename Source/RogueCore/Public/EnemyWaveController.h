#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Object -FallbackName=Object
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Vector -FallbackName=Vector
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=LatentActionInfo -FallbackName=LatentActionInfo
#include "EWaveControllerType.h"
#include "RiftSpawnOverrides.h"
#include "EnemyWaveController.generated.h"

class ACorespawnRift;

UCLASS(Blueprintable)
class UEnemyWaveController : public UObject {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EWaveControllerType Type;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    bool IsComplete;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool IsSuitableForSolo;
    
public:
    UEnemyWaveController();

    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void StartWave();
    
protected:
    UFUNCTION(BlueprintCallable, meta=(Latent, LatentInfo="LatentInfo"))
    void SpawnRifts_Async(FLatentActionInfo LatentInfo, const FVector InQueryLocation, const FRiftSpawnOverrides Overrides);
    
    UFUNCTION(BlueprintCallable)
    TArray<FVector> SpawnRifts(const FVector InQueryLocation, const FRiftSpawnOverrides Overrides);
    
public:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void ResumeWave();
    
protected:
    UFUNCTION(BlueprintCallable)
    void RemoveRifts();
    
public:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void PauseWave();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnWaveCompleted();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    EWaveControllerType GetType() const;
    
protected:
    UFUNCTION(BlueprintCallable, BlueprintPure)
    void GetNearestRifts(TArray<ACorespawnRift*>& OutRifts, FVector InLocation, int32 InNumberOfRifts) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    void GetNearestRiftLocations(TArray<FVector>& OutRifts, FVector InLocation, int32 InNumberOfRifts) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    TArray<FVector> GetLastSpawnedRiftLocations() const;
    
};

