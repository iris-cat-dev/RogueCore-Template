#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Vector -FallbackName=Vector
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=TimerHandle -FallbackName=TimerHandle
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=Vector_NetQuantize -FallbackName=Vector_NetQuantize
#include "AbilityItem.h"
#include "DamageInstance.h"
#include "RewindData.h"
#include "Templates/SubclassOf.h"
#include "TimeRewinder.generated.h"

class AActor;
class UAnimMontage;
class UAudioComponent;
class UCurveFloat;
class UDamageBonusBase;
class UHealthComponentBase;
class UItemCharacterAnimationSet;
class UMaterialInterface;
class UMiscUpgradeKey;
class UNiagaraComponent;
class UNiagaraSystem;
class USoundBase;
class UStatusEffect;

UCLASS(Blueprintable)
class ROGUECORE_API ATimeRewinder : public AAbilityItem {
    GENERATED_BODY()
public:
    DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FProgressDelegate, float, InProgress);
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FProgressDelegate OnDrainingProgressChanged;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UCurveFloat* FoVModulation;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    USoundBase* ActivationSound;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    USoundBase* AciveSoundLoop;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    USoundBase* DeactivateSound;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UAnimMontage* Item_SaveRewindPoint;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UAnimMontage* Item_RewindToPoint;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UAnimMontage* Item_Equip_Active;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UAnimMontage* FP_Equip_Active;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UAnimMontage* FP_RewindToPoint;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UAnimMontage* TP_Equip_Active;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UAnimMontage* TP_Recall;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UMaterialInterface* PostProcessMaterial;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UMaterialInterface* ActiveOverlayMaterial;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UMaterialInterface* TP_ActiveOverlayMaterial;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UNiagaraSystem* ActiveTrail;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TArray<UDamageBonusBase*> BonusesWhileActive;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TArray<UStatusEffect*> SelfEffectsWhileActive;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TArray<UStatusEffect*> AlliesEffectWhileActive;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UMiscUpgradeKey* DurationUpgradeKey;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Export, Transient, meta=(AllowPrivateAccess=true))
    TWeakObjectPtr<UNiagaraComponent> ActiveTrailInstance;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Export, Transient, meta=(AllowPrivateAccess=true))
    TWeakObjectPtr<UAudioComponent> LoopSoundInstance;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FDamageInstance EndExplosionDamage;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    FRewindData RewindData;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FTimerHandle Handle_RewindindTimeLimit;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FTimerHandle Handle_RewindStarted;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FTimerHandle Handle_RewindUnEquip;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FTimerHandle Handle_Terminating;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FTimerHandle Handle_AlmostOverWarning;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<AActor> HologramClass;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TWeakObjectPtr<AActor> HologramInstance;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UItemCharacterAnimationSet* ActiveAnimationSet;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float WarntAtTimeRemaining;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float TimePerChargeDrain;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float RewindDelay;
    
public:
    ATimeRewinder(const FObjectInitializer& ObjectInitializer);

protected:
    UFUNCTION(BlueprintCallable)
    void Terminate();
    
    UFUNCTION(BlueprintCallable, Server, Unreliable)
    void Server_ShowTPRecall();
    
    UFUNCTION(BlueprintCallable, Server, Unreliable)
    void Server_ShowTPActivation();
    
    UFUNCTION(BlueprintCallable, Reliable, Server)
    void Server_SavedRewindSpot(FRewindData Data);
    
    UFUNCTION(BlueprintCallable, Reliable, Server)
    void Server_RewindStarted(FRewindData Data);
    
    UFUNCTION(BlueprintCallable, Reliable, Server)
    void Server_Rewind(FRewindData Data);
    
    UFUNCTION(BlueprintCallable, Reliable, Server)
    void Server_DeactivateEffects();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void Receive_ShowOnCooldownEffects();
    
public:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void Receive_RewindPointPlaced();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void Receive_Rewind();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void Receive_PopSoundMixes();
    
protected:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void Receive_OnParadoxBlastTriggered(FVector Location);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void Receive_HideOnCooldownEffects();
    
public:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void Receive_AlmonstOverWarning();
    
    UFUNCTION(BlueprintCallable)
    void OnDeath(UHealthComponentBase* Health);
    
    UFUNCTION(BlueprintCallable)
    void InvalidatePositioningAbilities();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool GetIsDraining() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float GetDrainingProgress() const;
    
protected:
    UFUNCTION(BlueprintCallable)
    void DrainTick();
    
    UFUNCTION(BlueprintCallable)
    void DeactivateAfterRewind();
    
    UFUNCTION(BlueprintCallable, Client, Reliable)
    void Client_OnDeath();
    
    UFUNCTION(BlueprintCallable, NetMulticast, Unreliable)
    void All_ShowTPRecall();
    
    UFUNCTION(BlueprintCallable, NetMulticast, Unreliable)
    void All_ShowTPActivation();
    
    UFUNCTION(BlueprintCallable, NetMulticast, Unreliable)
    void All_ShowEndExplosion(FVector_NetQuantize Location);
    
    UFUNCTION(BlueprintCallable, NetMulticast, Reliable)
    void All_DeactivateEffects();
    
};

