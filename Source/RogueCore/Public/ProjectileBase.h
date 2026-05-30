#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Vector -FallbackName=Vector
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=Actor -FallbackName=Actor
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=HitResult -FallbackName=HitResult
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=Vector_NetQuantize -FallbackName=Vector_NetQuantize
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=Vector_NetQuantizeNormal -FallbackName=Vector_NetQuantizeNormal
#include "EOnProjectileImpactBehaviourEnum.h"
#include "OnProjectileImpactDelegateDelegate.h"
#include "PrefetchedData.h"
#include "ProjectileImpact.h"
#include "ProjectileBase.generated.h"

class AProjectileBase;
class UDamageAsset;
class UDamageComponent;
class UFSDPhysicalMaterial;
class UItemUpgrade;
class UPrimitiveComponent;
class UProjectileUpgradeElement;
class UShapeComponent;
class USoundCue;
class UTerrainMaterial;

UCLASS(Abstract, Blueprintable)
class AProjectileBase : public AActor {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnProjectileImpactDelegate OnProjectileImpacted;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, ReplicatedUsing=OnRep_ProjectileImpact, meta=(AllowPrivateAccess=true))
    FProjectileImpact ProjectileImpact;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UDamageAsset* ImpactDamage;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FPrefetchedData PrefetchedData;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UShapeComponent* CollisionComponent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    USoundCue* WhizbySound;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float LifeSpan;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float VelocityMultiplier;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float WhizByCooldown;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float WhizByStartDistance;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float GravityMultiplier;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool DestroyedByBarrier;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool SeparateTerrainImpactCheck;
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    EOnProjectileImpactBehaviourEnum EOnImpactBehaviour;
    
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Replicated, Transient, meta=(AllowPrivateAccess=true))
    bool IsSpawnedFromWeapon;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool AffectedByDifficultySpeedModifier;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool SetInitialSpeedToMaxSpeed;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool AutoDisableCollisionOnImpact;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool Exploded;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    bool DoOnImpact;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    bool DoOnImpact2;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    bool DoOnImpact3;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    bool DoOnSpawnVar;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, ReplicatedUsing=OnRep_IsDorment, meta=(AllowPrivateAccess=true))
    bool IsDorment;
    
public:
    AProjectileBase(const FObjectInitializer& ObjectInitializer);

    virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;

    UFUNCTION(BlueprintCallable, BlueprintPure)
    UTerrainMaterial* TryGetTerrainMaterial() const;
    
    UFUNCTION(BlueprintCallable)
    void StopMovement();
    
protected:
    UFUNCTION(BlueprintCallable, Reliable, Server)
    void Server_SetState(FVector_NetQuantize position, FVector_NetQuantize Velocity);
    
    UFUNCTION(BlueprintCallable, Reliable, Server)
    void Server_Penetrated(const FProjectileImpact& Impact);
    
    UFUNCTION(BlueprintCallable, Reliable, Server)
    void Server_Impacted(const FProjectileImpact& Impact);
    
public:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnUpgradeElementAdded(UProjectileUpgradeElement* element);
    
    UFUNCTION(BlueprintCallable)
    void OnRep_ProjectileImpact();
    
    UFUNCTION(BlueprintCallable)
    void OnRep_IsDorment(const bool wasDorment);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnPenetrated(bool PredictedPenetration, const FHitResult& HitResult);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnInitialized();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnImpacted(bool PredictedImpact, const FHitResult& HitResult);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void MakeBouncy();
    
    UFUNCTION(BlueprintCallable)
    void InitState(const FVector& ShootDirection, const FVector& initialBonusVelocity);
    
    UFUNCTION(BlueprintCallable)
    void InitComponents();
    
    UFUNCTION(BlueprintAuthorityOnly, BlueprintCallable)
    void IgnoreCollision(UPrimitiveComponent* otherCollider);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool HasImpactAuthority() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float GetGameTimeSinceActivation() const;
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    UDamageComponent* GetDamageComponent();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 GetBoneIndex() const;
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void DoOnSpawn();
    
    UFUNCTION(BlueprintCallable)
    static void DisableProjectileCollision(AProjectileBase* projectileA, AProjectileBase* projectileB);
    
    UFUNCTION(BlueprintCallable)
    void DisableAndDestroy();
    
protected:
    UFUNCTION(BlueprintCallable)
    UFSDPhysicalMaterial* DamageArmor(UDamageComponent* DamageComponent, const FHitResult& HitResult);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void CustomEvent(const UItemUpgrade* Event);
    
    UFUNCTION(BlueprintCallable, Client, Reliable)
    void Client_DrawServersDebugPath(FVector Location);
    
public:
    UFUNCTION(BlueprintCallable)
    void Activate(AActor* owningActor, FVector Origin, FVector_NetQuantizeNormal Direction, FVector_NetQuantizeNormal initialBonusVelocity);
    
};

