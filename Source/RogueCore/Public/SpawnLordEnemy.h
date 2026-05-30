#pragma once
#include "CoreMinimal.h"
#include "BossFightInterface.h"
#include "CoreSpawnEnemyBase.h"
#include "DelegateDelegate.h"
#include "ESpawnLordState.h"
#include "SpawnLordStateDelegateDelegate.h"
#include "SpawnLordEnemy.generated.h"

class APawn;
class ASpawnLordAdEnemy;
class UDestructibleSubHealthComponent;
class UEnemyDescriptor;

UCLASS(Blueprintable)
class ROGUECORE_API ASpawnLordEnemy : public ACoreSpawnEnemyBase, public IBossFightInterface {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UDestructibleSubHealthComponent* DestructibleSubHealthHead;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UEnemyDescriptor* AdED;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<ASpawnLordAdEnemy*> Ads;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float HealingStateTime;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, ReplicatedUsing=OnRep_SpawnLordState, meta=(AllowPrivateAccess=true))
    ESpawnLordState SpawnLordState;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FSpawnLordStateDelegate OnSpawnLordStateChanged;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FDelegate OnAdsSpawned;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, ReplicatedUsing=OnRep_HasBossfightStarted, meta=(AllowPrivateAccess=true))
    bool HasBossfightStarted;
    
public:
    ASpawnLordEnemy(const FObjectInitializer& ObjectInitializer);

    virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;

protected:
    UFUNCTION(BlueprintCallable)
    void OnSubHealthDestroyed(UDestructibleSubHealthComponent* subHealth);
    
    UFUNCTION(BlueprintCallable)
    void OnSeePawn(APawn* aPawn);
    
    UFUNCTION(BlueprintCallable)
    void OnRep_SpawnLordState();
    
    UFUNCTION(BlueprintCallable)
    void OnRep_HasBossfightStarted();
    
private:
    UFUNCTION(BlueprintCallable)
    void OnInitialGenerationDone();
    
protected:
    UFUNCTION(BlueprintCallable)
    void DamageStateTimer(float damageInSeconds);
    

    // Fix for true pure virtual functions not being implemented
};

