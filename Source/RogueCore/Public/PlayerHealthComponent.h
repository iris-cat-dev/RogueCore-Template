#pragma once
#include "CoreMinimal.h"
#include "AudioWithCooldown.h"
#include "DamageData.h"
#include "DelegateDelegate.h"
#include "FullHealthSignatureDelegate.h"
#include "HealthChangedSigDelegate.h"
#include "HealthComponent.h"
#include "HealthRegeneratingChangedDelegate.h"
#include "HealthRegenerationParams.h"
#include "OnPlayerShieldDestroyedDelegate.h"
#include "PlayerHitSigDelegate.h"
#include "RejoinListener.h"
#include "Templates/SubclassOf.h"
#include "PlayerHealthComponent.generated.h"

class AActor;
class AController;
class APlayerCharacter;
class UCurveFloat;
class UDamageClass;
class UDamageTag;
class UDialogDataAsset;
class UFXSystemAsset;
class UFXSystemComponent;
class UPlayerDamageTakenMutator;
class UStatusEffect;

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class UPlayerHealthComponent : public UHealthComponent, public IRejoinListener {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FHealthChangedSig OnMaxHealthChanged;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FHealthChangedSig OnTargetArmorChanged;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FFullHealthSignature OnFullHealthCannotHeal;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FFullHealthSignature OnHealedFromCrystalEvent;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FHealthRegeneratingChanged OnHealthRegeneratingChanged;
    
    UPROPERTY(BlueprintAssignable, BlueprintCallable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnPlayerShieldDestroyed OnPlayerShieldDestroyed;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FPlayerHitSig OnPlayerHit;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FDelegate OnIronWillActivated;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FDelegate OnArmorUpgraded;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UDamageClass* FallingDamageClass;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UDialogDataAsset* OnHealedShout;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UCurveFloat* ArmorRegenCurve;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    APlayerCharacter* Character;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UFXSystemAsset* GenericImpactParticles;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UFXSystemAsset* ShieldLinkEffect;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UPlayerDamageTakenMutator* DamageTakenMutator;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UStatusEffect* IronWillStatusEffect;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TSubclassOf<UStatusEffect> DodgeStatusEffectClass;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    UFXSystemComponent* ShieldLinkInstance;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TSubclassOf<UStatusEffect> IronWillStatusEffectClass;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, ReplicatedUsing=OnRep_MaxHealth, meta=(AllowPrivateAccess=true))
    float MaxHealth;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, ReplicatedUsing=OnRep_MaxArmor, meta=(AllowPrivateAccess=true))
    float MaxArmor;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float ArmorDamageReduction;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float ArmorDegradationRate;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float TemporaryHealthDecayRate;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, ReplicatedUsing=OnRep_TemporaryHealth, meta=(AllowPrivateAccess=true))
    float TemporaryHealth;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float MaxTemporaryHealth;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, ReplicatedUsing=OnRep_ArmorDamage, meta=(AllowPrivateAccess=true))
    float ArmorDamage;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, ReplicatedUsing=OnRep_TargetArmorDamage, meta=(AllowPrivateAccess=true))
    float TargetArmorDamage;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float IronWillTimeToActivate;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float MaxArmorBase;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float ReviveHealthReturnRatio;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float ReviveArmorReturnRatio;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float HealthPerCrystalVolume;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float ShieldRegenDelay;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float InvulnerabilityDuration;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float ReviveInvulnerabilityTime;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float HealthRegenTarget;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Replicated, Transient, meta=(AllowPrivateAccess=true))
    float InvulnerabiltyTimeLeft;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FHealthRegenerationParams HealthRegeneration;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FAudioWithCooldown AudioFriendlyFire;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Replicated, Transient, meta=(AllowPrivateAccess=true))
    bool IronWillActive;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UClass* CauseOfDeathClass;
    
public:
    UPlayerHealthComponent(const FObjectInitializer& ObjectInitializer);

    virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;

    UFUNCTION(BlueprintCallable)
    void UpgradeShield(float CapacityAmount, float RegenAmount, float DegradationRate);
    
    UFUNCTION(BlueprintCallable)
    float TakeDamageWithoutDelegates(float damageAmount, const FDamageData& DamageData, const TArray<UDamageTag*>& Tags, bool ignoreModifiers);
    
    UFUNCTION(BlueprintCallable)
    void SetMaxShield(float max);
    
    UFUNCTION(BlueprintAuthorityOnly, BlueprintCallable)
    UStatusEffect* SetIronWillStatusEffect(TSubclassOf<UStatusEffect> steClass);
    
    UFUNCTION(BlueprintCallable, Reliable, Server)
    void Server_TryActivateIronWill();
    
    UFUNCTION(BlueprintCallable, Reliable, Server)
    void Server_HealArmor(float Amount);
    
    UFUNCTION(BlueprintCallable)
    void ResetTimeSinceLastDamage();
    
    UFUNCTION(BlueprintCallable)
    void RemoveShieldUpgrade(float CapacityAmount, float RegenAmount, float DegradationRate);
    
protected:
    UFUNCTION(BlueprintCallable)
    void OnRep_TemporaryHealth(float oldTempHealth);
    
    UFUNCTION(BlueprintCallable)
    void OnRep_TargetArmorDamage(float oldDamage);
    
    UFUNCTION(BlueprintCallable)
    void OnRep_MaxHealth();
    
    UFUNCTION(BlueprintCallable)
    void OnRep_MaxArmor();
    
    UFUNCTION(BlueprintCallable)
    void OnRep_ArmorDamage(float oldDamage);
    
public:
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsLowHealth() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsLocallyControlled() const;
    
    UFUNCTION(BlueprintCallable)
    float HealWithoutShout(float Amount);
    
    UFUNCTION(BlueprintCallable)
    static float GetTargetArmorPctFromValues(float max, float Target);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float GetShieldRegenFactor() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float GetRemainingIronWillActivationTime() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float GetMaxArmorUpgrades() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool GetIsHealthRegenerating() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool GetIronWillActive() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float GetHealthRegenThreshold() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float GetHealthRegeneratingTargetRatio() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float GetBaseMaxHealth() const;
    
    UFUNCTION(BlueprintCallable)
    void DamageArmor(float Amount);
    
private:
    UFUNCTION(BlueprintCallable, Client, Reliable)
    void ClientNotifyDeath(const FString& CauseOfDeath, const float SecondsSinceLastDamageTaken, const float SecondsSinceLastRevive);
    
protected:
    UFUNCTION(BlueprintCallable, Client, Reliable)
    void Client_TemporaryHealthDamaged(float Amount);
    
    UFUNCTION(BlueprintCallable, Client, Reliable)
    void Client_SetHealthRegenerating(bool isRegenerating);
    
    UFUNCTION(BlueprintCallable, Client, Unreliable)
    void Client_OnFriendlyFire(AController* EventInstigator, AActor* DamageCauser);
    
    UFUNCTION(BlueprintCallable, Client, Reliable)
    void Client_HealthFullCannotHeal();
    
    UFUNCTION(BlueprintCallable, Client, Reliable)
    void Client_ArmorDamaged(float Amount);
    
    UFUNCTION(BlueprintCallable, Reliable, Server)
    void Cheat_Revive();
    
    UFUNCTION(BlueprintCallable, Reliable, Server)
    void Cheat_KillPlayer();
    
public:
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool CanActivateIronWill() const;
    

    // Fix for true pure virtual functions not being implemented
};

