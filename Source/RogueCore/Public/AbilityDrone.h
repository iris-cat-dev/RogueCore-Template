#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Rotator -FallbackName=Rotator
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Vector -FallbackName=Vector
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=Vector_NetQuantize -FallbackName=Vector_NetQuantize
#include "GameplayTagContainer.h"
#include "AbilityDroneStateDelegateDelegate.h"
#include "DeepPathfinderCharacter.h"
#include "DelegateDelegate.h"
#include "DroneControllerUseInfo.h"
#include "EAbilityDroneState.h"
#include "Minion.h"
#include "RandRange.h"
#include "Templates/SubclassOf.h"
#include "AbilityDrone.generated.h"

class AActor;
class APlayerCharacter;
class AProjectile;
class UAudioComponent;
class UBehaviorTree;
class UDamageNumberAggregator;
class UPerkAsset;

UCLASS(Blueprintable)
class AAbilityDrone : public ADeepPathfinderCharacter, public IMinion {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UAudioComponent* MovementAudio;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FDelegate OnAttack;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FAbilityDroneStateDelegate OnEnterStateDelegate;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FAbilityDroneStateDelegate OnExitStateDelegate;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGameplayTagQuery TargetQuery;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UDamageNumberAggregator* DamageNumberAggregator;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, ReplicatedUsing=OnRep_TeleportLocation, meta=(AllowPrivateAccess=true))
    FVector_NetQuantize TeleportLocation;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TWeakObjectPtr<AActor> BurstTarget;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, ReplicatedUsing=OnRep_ShotCounter, meta=(AllowPrivateAccess=true))
    uint8 ShotCounter;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TWeakObjectPtr<APlayerCharacter> ControllingCharacter;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UBehaviorTree* BehaviourTree;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<AProjectile> ProjectileClass;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float AttackRange;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float AttackInterval;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FRandRange BurstInterval;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool AllowAutomaticRevive;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 BurstSize;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, ReplicatedUsing=OnRep_State, meta=(AllowPrivateAccess=true))
    EAbilityDroneState State;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float ReviveSearchRange;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UPerkAsset* RevivePerk;
    
public:
    AAbilityDrone(const FObjectInitializer& ObjectInitializer);

    virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;

    UFUNCTION(BlueprintAuthorityOnly, BlueprintCallable)
    void SetState(EAbilityDroneState NewState);
    
    UFUNCTION(BlueprintCallable, Server, Unreliable)
    void Server_SecondaryUsed(const FDroneControllerUseInfo& Info);
    
    UFUNCTION(BlueprintCallable, Server, Unreliable)
    void Server_PrimaryUsed(const FDroneControllerUseInfo& Info);
    
protected:
    UFUNCTION(BlueprintCallable)
    void SearchPulse();
    
    UFUNCTION(BlueprintCallable)
    void OnRep_TeleportLocation();
    
    UFUNCTION(BlueprintCallable)
    void OnRep_State(EAbilityDroneState oldState);
    
    UFUNCTION(BlueprintCallable)
    void OnRep_ShotCounter();
    
public:
    UFUNCTION(BlueprintCallable)
    void ControllerSecondaryUsed(const FDroneControllerUseInfo& Info);
    
    UFUNCTION(BlueprintCallable)
    void ControllerPrimaryUsed(const FDroneControllerUseInfo& Info);
    
protected:
    UFUNCTION(BlueprintCallable, NetMulticast, Reliable)
    void All_TeleportDrone(FVector Location, FRotator Rotation);
    

    // Fix for true pure virtual functions not being implemented
};

