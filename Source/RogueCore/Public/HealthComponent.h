#pragma once
#include "CoreMinimal.h"
#include "ArmorHealedSigDelegate.h"
#include "DamageData.h"
#include "DamageSigDelegate.h"
#include "DeathSigDetailedDelegate.h"
#include "DelegateDelegate.h"
#include "EHealthbarType.h"
#include "HealthChangedSigDelegate.h"
#include "HealthComponentBase.h"
#include "HealthSegmentChangeDelegate.h"
#include "HealthComponent.generated.h"

class AActor;
class UHealthModifier;
class UPawnStat;
class UPawnStatsComponent;
class USubHealthComponent;

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class UHealthComponent : public UHealthComponentBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FDelegate OnTemporaryHealthChanged;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FDelegate OnGainedTemporaryHealth;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FDelegate OnLostTemporaryHealth;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FDamageSig OnTemporaryHealthDamaged;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FHealthChangedSig OnArmorChanged;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FDamageSig OnArmorDamaged;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FArmorHealedSig OnArmorHealed;
    
    UPROPERTY(BlueprintAssignable, BlueprintAuthorityOnly, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FDeathSigDetailed OnDeathDetailed;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FHealthSegmentChange OnNewHealthSegment;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<UHealthModifier*> DamageModifiers;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<float> HealthSegmentSizes;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    TArray<USubHealthComponent*> SubHealthComponents;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<UPawnStat*, float> Resistances;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    AActor* LastDamageCauser;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    UPawnStatsComponent* PawnStats;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, ReplicatedUsing=OnRep_Damage, meta=(AllowPrivateAccess=true))
    float Damage;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float EnvironmentalDamageResistance;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool ShouldUseLargestSubhealthDamageTaken;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool InvulnerableToNonDefinedResistances;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool AffectedByGlobalWeakpointDamageMultiplier;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool UseDormancy;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool CanDamageThroughSegments;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    bool CanDieFromDamage;
    
public:
    UHealthComponent(const FObjectInitializer& ObjectInitializer);

    virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;

    UFUNCTION(BlueprintCallable, Reliable, Server)
    void Server_ToggleGodMode();
    
    UFUNCTION(BlueprintCallable, Reliable, Server)
    void Server_SetGodMode(bool Active);
    
    UFUNCTION(BlueprintAuthorityOnly, BlueprintCallable)
    void Resupply(float percentage);
    
protected:
    UFUNCTION(BlueprintCallable)
    void OnRep_Damage(float oldDamage);
    
public:
    UFUNCTION(BlueprintAuthorityOnly, BlueprintCallable)
    void HealArmor(float Amount);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool HasArmor() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float GetTempHealthAmount() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float GetTargetArmorPct() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float GetTargetArmor() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float GetMaxArmor() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    AActor* GetLastDamageCauser() const;
    
    virtual EHealthbarType GetHealthbarType() const override;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    void GetCurrentHealthSegment(int32& Segment, float& segmentHealth, float& segmentHealthPercent);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float GetArmorPct() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float GetArmorDR() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float GetArmor() const;
    
protected:
    UFUNCTION(BlueprintCallable, Client, Reliable)
    void Client_ReceivedHit(float Amount, const FDamageData& DamageData, bool anyHealthLost);
    
public:
    UFUNCTION(BlueprintCallable)
    void AddTemporaryHealth(float Amount);
    
};

