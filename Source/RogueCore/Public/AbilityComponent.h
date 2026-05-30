#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=ActorComponent -FallbackName=ActorComponent
#include "DelegateDelegate.h"
#include "EAbilityActivationType.h"
#include "EAbilityBlockedOn.h"
#include "EAbilityDeactivationType.h"
#include "FloatDelegateDelegate.h"
#include "IntDelegateDelegate.h"
#include "AbilityComponent.generated.h"

class AAbilityItem;
class APlayerCharacter;
class UAbilityData;
class UDialogDataAsset;

UCLASS(Abstract, Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class UAbilityComponent : public UActorComponent {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FFloatDelegate OnAbilityActivated;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FDelegate OnAbilityDeactivated;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FFloatDelegate CooldownStarted;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FFloatDelegate OnCooldownUpdated;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FIntDelegate OnChargesChanged;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FIntDelegate OnMaxChargesChanged;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FDelegate OnChargeConsumed;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FIntDelegate OnTempChargesChanged;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UAbilityData* AbilityData;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float CoolDownTime;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float EffectTime;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    float CooldownTimer;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    float EffectTimer;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float RangeMultiplier;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 UseCost;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 charges;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 MaxCharges;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 TempCharges;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EAbilityBlockedOn AbilityBlockedOn;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EAbilityActivationType ActivationType;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EAbilityDeactivationType DeactivationType;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UDialogDataAsset* FullyChargedShout;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, ReplicatedUsing=OnRep_IsEffectActive, meta=(AllowPrivateAccess=true))
    bool IsEffectActive;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Replicated, Transient, meta=(AllowPrivateAccess=true))
    bool AnyTeamAbilityActive;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Replicated, Transient, meta=(AllowPrivateAccess=true))
    bool AnyAbilityOfThisTypeActive;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool CanActivateWhenDead;
    
public:
    UAbilityComponent(const FObjectInitializer& ObjectInitializer);

    virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;

    UFUNCTION(BlueprintCallable, BlueprintPure)
    AAbilityItem* TryGetAbilityItem() const;
    
    UFUNCTION(BlueprintCallable)
    void SetRegenBlocked(bool IsBlocked);
    
protected:
    UFUNCTION(BlueprintCallable, Reliable, Server)
    void Server_DeactivateAbility();
    
    UFUNCTION(BlueprintCallable, Reliable, Server)
    void Server_ActivateAbility();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void Receive_EffectTimerFinishedAll();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void Receive_EffectTimerFinished();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void Receive_ActivatedAbilityServer();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void Receive_ActivatedAbilityLocal();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void Receive_ActivatedAbilityAll();
    
public:
    UFUNCTION(BlueprintCallable)
    void QueueDeactivation();
    
protected:
    UFUNCTION(BlueprintCallable)
    void OnRep_IsEffectActive();
    
public:
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool HasTotalChargePct(float pct) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 GetMaxCharges() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool GetIsEffectActive() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float GetCoolDownRemainingPct() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 GetCharges() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    APlayerCharacter* GetCharacter() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    UAbilityData* GetAbilityData() const;
    
    UFUNCTION(BlueprintCallable)
    void DecreaseCurrentCooldownBySeconds(const float InSeconds);
    
    UFUNCTION(BlueprintCallable)
    void DecreaseCurrentCooldownByPercent(const float InPercent);
    
    UFUNCTION(BlueprintCallable)
    void DeactivateAbility();
    
    UFUNCTION(BlueprintCallable)
    void ConsumeCharge(int32 Amount);
    
protected:
    UFUNCTION(BlueprintCallable, Client, Reliable)
    void Client_DecreaseCurrentCooldownBySeconds(const float InSeconds);
    
    UFUNCTION(BlueprintCallable, Client, Reliable)
    void Client_DecreaseCurrentCooldownByPercent(const float InPercent);
    
public:
    UFUNCTION(BlueprintCallable)
    void AddCharges(int32 Amount);
    
    UFUNCTION(BlueprintCallable)
    void ActivateAbility(bool ReleaseToDeactivate);
    
};

