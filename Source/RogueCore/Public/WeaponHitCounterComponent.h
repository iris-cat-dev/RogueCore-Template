#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=ActorComponent -FallbackName=ActorComponent
#include "GameplayTagContainer.h"
#include "DamageListener.h"
#include "WeaponHitCounterComponent.generated.h"

class AActor;
class UWeaponHitCountEffect;

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class UWeaponHitCounterComponent : public UActorComponent, public IDamageListener {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UWeaponHitCountEffect* HitEffect;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool RequiresWeakpointHit;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGameplayTagQuery TargetFilter;
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    uint32 DamageListenerProfile;
    
public:
    UWeaponHitCounterComponent(const FObjectInitializer& ObjectInitializer);

protected:
    UFUNCTION(BlueprintCallable, Reliable, Server)
    void Server_OnReloading();
    
    UFUNCTION(BlueprintCallable)
    void OnStoppedUsing();
    
    UFUNCTION(BlueprintCallable)
    void OnReloading();
    
    UFUNCTION(NetMulticast, Unreliable)
    void All_ShowDamageEffects(const TArray<TWeakObjectPtr<AActor>>& Targets);
    

    // Fix for true pure virtual functions not being implemented
};

