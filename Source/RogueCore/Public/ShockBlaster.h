#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=HitResult -FallbackName=HitResult
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=Vector_NetQuantize -FallbackName=Vector_NetQuantize
#include "AmmoDrivenWeapon.h"
#include "DamageInstance.h"
#include "ShockBlaster.generated.h"

class AActor;
class AFSDPawn;
class UHitscanComponent;
class UNiagaraSystem;
class UPhysicalMaterial;
class USoundCue;

UCLASS(Blueprintable)
class AShockBlaster : public AAmmoDrivenWeapon {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UHitscanComponent* HitscanComponent;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UNiagaraSystem* ImpactEffect;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UNiagaraSystem* BeamEffect;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    USoundCue* ImpactSound;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TArray<AActor*> ArcList;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FDamageInstance BaseDamage;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName BeamStartPositionParam;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName BeamTargetPositionParam;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName BeamDistanceParam;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float BounceDelay;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float RicochetRange;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float AmmoCostPerBounce;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 AttitudeQuery;
    
public:
    AShockBlaster(const FObjectInitializer& ObjectInitializer);

protected:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void SpawnRicochetEffects(const TArray<AFSDPawn*>& InPawnsHit);
    
    UFUNCTION(BlueprintCallable, Reliable, Server)
    void Server_RegisterHit(AActor* Hit, float Damage, UPhysicalMaterial* PhysMaterial, int32 clipAmount);
    
    UFUNCTION(Reliable, Server)
    void Server_OnHitScan_Hit(const FHitResult& InHitResult, const float InDamage, const uint32 InRicochetCount);
    
    UFUNCTION(BlueprintCallable)
    void OnHitScan_Hit(const FHitResult& InHitResult, const bool InAlwaysPenetrate);
    
    UFUNCTION(BlueprintCallable)
    void DoBounce();
    
    UFUNCTION(BlueprintCallable, NetMulticast, Unreliable)
    void All_ShowHit(AActor* Hit);
    
    UFUNCTION(BlueprintCallable, NetMulticast, Reliable)
    void All_OnHitScan_Hit(FVector_NetQuantize InHitLocation);
    
};

