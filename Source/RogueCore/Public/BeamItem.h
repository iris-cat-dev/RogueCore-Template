#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=HitResult -FallbackName=HitResult
#include "AbilityItem.h"
#include "BeamItem.generated.h"

class UAnimMontage;
class UNiagaraComponent;

UCLASS(Blueprintable)
class ROGUECORE_API ABeamItem : public AAbilityItem {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UNiagaraComponent* FP_BeamEffect;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UNiagaraComponent* TP_BeamEffect;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UNiagaraComponent* ValidTargetImpactEffect;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UNiagaraComponent* InvalidTargetImpactEffect;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UAnimMontage* EndBeamAnim;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float Interval;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float CostInterval;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, ReplicatedUsing=OnRep_IsBeamActive, meta=(AllowPrivateAccess=true))
    bool IsBeamActive;
    
public:
    ABeamItem(const FObjectInitializer& ObjectInitializer);

    virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;

protected:
    UFUNCTION(BlueprintCallable, Server, Unreliable)
    void Server_SetBeamActive(bool IsActive);
    
    UFUNCTION(BlueprintCallable, Reliable, Server)
    void Server_HitTarget(const FHitResult& Hit);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void SecondaryUsed();
    
public:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void Receive_OnHitTarget(FHitResult Hit);
    
protected:
    UFUNCTION(BlueprintCallable)
    void OnRep_IsBeamActive();
    
public:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnBeamDeactivated();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnBeamActivated();
    
};

