#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Rotator -FallbackName=Rotator
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Vector -FallbackName=Vector
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=HitResult -FallbackName=HitResult
#include "DamageNumberStackingRules.h"
#include "EUpdateDamageNumberColor.h"
#include "ProjectileBase.h"
#include "ProjectileState.h"
#include "StackingDamageNumberSource.h"
#include "Templates/SubclassOf.h"
#include "Projectile.generated.h"

class AActor;
class APawn;
class AProjectile;
class UFSDPhysicalMaterial;
class UFSDProjectileMovementComponent;
class UObject;
class UPawnStat;
class UPrimitiveComponent;
class UProjectileHomingTargetComponent;
class USceneComponent;

UCLASS(Abstract, Blueprintable)
class AProjectile : public AProjectileBase, public IStackingDamageNumberSource {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UPawnStat* GravityModifier;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UPawnStat* VelocityModifier;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, ReplicatedUsing=OnRep_State, meta=(AllowPrivateAccess=true))
    FProjectileState State;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool UseArmorDamageBoneCheck;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<TSubclassOf<AActor>> IgnoreActorClasses;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UFSDProjectileMovementComponent* MovementComponent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UProjectileHomingTargetComponent* ProjectileHomingTargetComponent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FDamageNumberStackingRules DamageNumbersRules;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool CallPenetrateOnOverlap;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool CallImpactOnInTerrain;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    AActor* BlockReplicationToActor;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    bool bIsDamageEnabled;
    
public:
    AProjectile(const FObjectInitializer& ObjectInitializer);

    virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;

    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    AProjectileBase* SpawnProjectileFromSelf(UObject* WorldContextObject, TSubclassOf<AProjectileBase> ProjectileClass, FVector Origin, FRotator velocityDirection);
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static AProjectileBase* SpawnProjectile(UObject* WorldContextObject, TSubclassOf<AProjectileBase> ProjectileClass, APawn* projectileOwner, FVector Origin, FRotator velocityDirection);
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static AProjectileBase* SpawnBallisticProjectile(UObject* WorldContextObject, TSubclassOf<AProjectile> ProjectileClass, APawn* projectileOwner, FVector Origin, FVector Velocity);
    
    UFUNCTION(BlueprintCallable)
    void SetHomingTargetComponent(USceneComponent* HomingTargetComponent, float Delay);
    
    UFUNCTION(BlueprintCallable)
    void SetDamageEnabled(const bool IsEnabled);
    
protected:
    UFUNCTION(BlueprintCallable, Reliable, Server)
    void Server_DisableHoming();
    
    UFUNCTION(BlueprintCallable)
    void OnRep_State(const FProjectileState& oldState);
    
public:
    UFUNCTION(BlueprintCallable)
    void OnPenetration(const FHitResult& HitResult);
    
    UFUNCTION(BlueprintCallable)
    void OnImpact(const FHitResult& HitResult);
    
    UFUNCTION(BlueprintCallable)
    void OnBounce(const FHitResult& ImpactResult, const FVector& ImpactVelocity);
    
    UFUNCTION(BlueprintCallable)
    void OnBeginOverlap(UPrimitiveComponent* OverlappedComponent, AActor* OtherActor, UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool fromSweep, const FHitResult& SweepResult);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsDamageEnabled() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    UFSDPhysicalMaterial* FindBoneIndexFromArmor(const FHitResult& HitResult, int32& outBoneIndex) const;
    

    // Fix for true pure virtual functions not being implemented
    UFUNCTION(BlueprintCallable)
    virtual float GetStackingTimeLimit() const override PURE_VIRTUAL(GetStackingTimeLimit, return 0.0f;);
    
    UFUNCTION(BlueprintCallable)
    virtual int32 GetMaxCombinationsPerentry() const override PURE_VIRTUAL(GetMaxCombinationsPerentry, return 0;);
    
    UFUNCTION(BlueprintCallable)
    virtual EUpdateDamageNumberColor GetColorBehaviour() const override PURE_VIRTUAL(GetColorBehaviour, return EUpdateDamageNumberColor::ENormal;);
    
};

