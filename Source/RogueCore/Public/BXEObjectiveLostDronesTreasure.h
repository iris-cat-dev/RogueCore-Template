#pragma once
#include "CoreMinimal.h"
#include "Objective.h"
#include "BXEObjectiveLostDronesTreasure.generated.h"

class AActor;
class ABXEObjectivePickupActor;
class ABXEProspectingTreasureRewardSpawner;
class ABXEScannableRewardActor;
class APawn;
class UDebrisPositioning;
class UEnemyDescriptor;

UCLASS(Abstract, Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class ROGUECORE_API UBXEObjectiveLostDronesTreasure : public UObjective {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, ReplicatedUsing=OnRep_ObjectiveCompleted, meta=(AllowPrivateAccess=true))
    bool bObjectiveCompleted;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 EnemyCount;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 ExtraEnemies;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UDebrisPositioning* Positioning;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UEnemyDescriptor* EnemyTarget;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftClassPtr<ABXEObjectivePickupActor> EnemyDropActor;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 PreferredMinDistanceBetweenSpawns;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, ReplicatedUsing=OnRep_EnemiesKilled, meta=(AllowPrivateAccess=true))
    int32 EnemiesKilled;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, ReplicatedUsing=OnRep_EnemiesToKill, meta=(AllowPrivateAccess=true))
    int32 EnemiesToKill;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Replicated, Transient, meta=(AllowPrivateAccess=true))
    ABXEScannableRewardActor* SpawnedReward;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    ABXEProspectingTreasureRewardSpawner* RewardSpawner;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftClassPtr<ABXEProspectingTreasureRewardSpawner> RewardSpawnerClass;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 NumToSpawn;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, ReplicatedUsing=OnRep_HasPickedUp, meta=(AllowPrivateAccess=true))
    int32 HasPickedUp;
    
public:
    UBXEObjectiveLostDronesTreasure(const FObjectInitializer& ObjectInitializer);

    virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;

    UFUNCTION(BlueprintCallable)
    void SetObjectiveCompleted();
    
    UFUNCTION(BlueprintAuthorityOnly, BlueprintCallable, BlueprintPure=false)
    void RegisterTargetSpawned(APawn* Target) const;
    
protected:
    UFUNCTION(BlueprintCallable)
    void OnTargetKilled(AActor* Actor);
    
    UFUNCTION(BlueprintCallable)
    void OnRewardSpawned();
    
    UFUNCTION(BlueprintCallable)
    void OnRep_ObjectiveCompleted();
    
    UFUNCTION(BlueprintCallable)
    void OnRep_HasPickedUp();
    
    UFUNCTION(BlueprintCallable)
    void OnRep_EnemiesToKill(int32 prevAmount);
    
    UFUNCTION(BlueprintCallable)
    void OnRep_EnemiesKilled(int32 prevAmount);
    
public:
    UFUNCTION(BlueprintCallable)
    void AddPickUp();
    
};

