#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Vector -FallbackName=Vector
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=Vector_NetQuantize -FallbackName=Vector_NetQuantize
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=Vector_NetQuantizeNormal -FallbackName=Vector_NetQuantizeNormal
#include "GameplayTagContainer.h"
#include "CoolDownProgressStyle.h"
#include "DelegateDelegate.h"
#include "EPickaxePartLocation.h"
#include "EPickaxeState.h"
#include "EUpdateDamageNumberColor.h"
#include "Item.h"
#include "PickaxeMeshInstance.h"
#include "PickaxePartEquip.h"
#include "StackingDamageNumberSource.h"
#include "Templates/SubclassOf.h"
#include "UpgradableGear.h"
#include "PickaxeItem.generated.h"

class UAnimMontage;
class UDamageAsset;
class UDialogDataAsset;
class UFSDPhysicalMaterial;
class UFXSystemAsset;
class UForceFeedbackEffect;
class UHealthComponentBase;
class UItemCharacterAnimationSet;
class UMaterialInterface;
class UPickaxePart;
class UPlayerAnimInstance;
class UPrimitiveComponent;
class USceneComponent;
class USoundCue;
class UStatusEffect;
class UWeaponTagContainerComponent;

UCLASS(Abstract, Blueprintable)
class APickaxeItem : public AItem, public IUpgradableGear, public IPickaxePartEquip, public IStackingDamageNumberSource {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    bool QuadDamageCarving;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FDelegate OnPowerAttackRecharged;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FDelegate OnTerrainDug;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    USceneComponent* FP_Root;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    USceneComponent* TP_Root;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    USceneComponent* FP_Scale;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    USceneComponent* TP_Scale;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UPlayerAnimInstance* FPAnimInstance;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UPlayerAnimInstance* TPAnimInstance;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UAnimMontage* FP_EquipAnimation;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UAnimMontage* TP_EquipAnimation;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float EquipDuration;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UItemCharacterAnimationSet* CharacterAnimationSet;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UWeaponTagContainerComponent* WeaponTags;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float SpecialCooldown;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    float SpecialCooldownRemaining;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FCoolDownProgressStyle SpecialCooldownUI;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 RockMiningBonus;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 DirtMiningBonus;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float DamageRange;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float ExtraDamageRangeForAnimation;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float MiningRange;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float DamageRadius;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<UStatusEffect> OnDamageEnemySlowdownEffect;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGameplayTagContainer WideDamageTrackingTags;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UDialogDataAsset* AttackExcertionShout;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    USoundCue* AttackHitSound;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    USoundCue* MiningSound;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UForceFeedbackEffect* MineRumble;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UForceFeedbackEffect* PartialMineRumble;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UForceFeedbackEffect* DamageRumble;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UDamageAsset* HitDamage;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UDamageAsset* SpecialDamage;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float GeneralImpactAudioVolume;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float HitCooldown;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float MiningDuration;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float DistanceConsideredSameHit;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float BlockParticlesScaleFP;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float BlockParticlesScaleTP;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, ReplicatedUsing=OnRep_State, meta=(AllowPrivateAccess=true))
    EPickaxeState State;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    USoundCue* PowerAttackRefreshedSound;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool PreventQMining;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float QMiningExpectedDelay;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float QMiningInitialDelay;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float QMiningReducedPlayRatePct;
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    double QMiningLastHitTime;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool CanBezerk;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<UStatusEffect> BezerkStatusEffect;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool PowerAttackEnabled;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TMap<EPickaxePartLocation, FPickaxeMeshInstance> EquippedParts;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UMaterialInterface* EquippedMaterial;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TArray<UPickaxePart*> AllEquippedParts;
    
public:
    APickaxeItem(const FObjectInitializer& ObjectInitializer);

    virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;

protected:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void SpecialTargetDamageEffects(const FVector& ImpactPoint, const FVector& ImpactNormal);
    
public:
    UFUNCTION(BlueprintCallable)
    void SetSpecialCoolDownDurationRemaining(float newCooldownRemaining);
    
    UFUNCTION(BlueprintCallable)
    void SetSpecialCoolDownDuration(float newCooldownDuration);
    
protected:
    UFUNCTION(BlueprintCallable, Reliable, Server)
    void Server_TriggerBezerk();
    
    UFUNCTION(BlueprintCallable, Reliable, Server)
    void Server_SetState(EPickaxeState NewState);
    
    UFUNCTION(BlueprintCallable, Reliable, Server)
    void Server_RemoveDebrisInstance(FVector_NetQuantize HitPos, int32 DebrisIndex, int32 remappedIndex);
    
    UFUNCTION(BlueprintCallable, Server, Unreliable)
    void Server_HitBlock(FVector_NetQuantize position, int32 Material, bool removeDebris, bool isSpecial);
    
    UFUNCTION(BlueprintCallable, Reliable, Server)
    void Server_DoPowerAttack();
    
    UFUNCTION(BlueprintCallable, Reliable, Server)
    void Server_DigBlock(FVector carvePos, FVector carveDirection, int32 TerrainMaterial, bool isSpecial);
    
    UFUNCTION(BlueprintCallable, Reliable, Server)
    void Server_DamageTarget(UPrimitiveComponent* TargetComponent, bool isSpecial, const FVector_NetQuantize& ImpactPoint, const FVector_NetQuantizeNormal& ImpactNormal, UFSDPhysicalMaterial* PhysMaterial, uint8 BoneIndex);
    
public:
    UFUNCTION(BlueprintCallable)
    void RefreshSpecialCooldown();
    
    UFUNCTION(BlueprintCallable)
    void OnSpecialHitTarget(UHealthComponentBase* Health, float Amount, UPrimitiveComponent* Component, UFSDPhysicalMaterial* PhysicalMaterial);
    
protected:
    UFUNCTION(BlueprintCallable)
    void OnRep_State(EPickaxeState oldState);
    
    UFUNCTION(BlueprintCallable)
    void OnLoadoutChanged();
    
public:
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float GetSpecialCooldownRemaining() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float GetSpecialCooldownProgress() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float GetSpecialCoolDownDuration() const;
    
    UFUNCTION(BlueprintCallable)
    void DecreaseSpecialCooldownDurationRemaining_Percent(float InPercent);
    
protected:
    UFUNCTION(BlueprintCallable, Client, Reliable)
    void Client_SetSpecialCoolDownDurationRemaining(float newCooldownRemaining);
    
    UFUNCTION(BlueprintCallable, Client, Reliable)
    void Client_SetSpecialCoolDownDuration(float newCooldownDuration);
    
    UFUNCTION(BlueprintCallable, Client, Reliable)
    void Client_EnemyKilledWithPowerAttack();
    
    UFUNCTION(BlueprintCallable, Client, Reliable)
    void Client_DecreaseSpecialCooldownDurationRemaining_Percent(float InPercent);
    
    UFUNCTION(BlueprintCallable, NetMulticast, Unreliable)
    void All_SimulateHitBlock(FVector_NetQuantize position, int32 materia, bool removeDebris, bool isSpecial);
    
    UFUNCTION(BlueprintCallable, NetMulticast, Unreliable)
    void All_SimulateDigDebris(FVector_NetQuantize position, UFXSystemAsset* Particles, USoundCue* cue);
    
    UFUNCTION(BlueprintCallable, NetMulticast, Unreliable)
    void All_SimulateDigBlock(FVector_NetQuantize position, bool spawnParticles, int32 Material, float Density, bool isSpecial);
    
    UFUNCTION(BlueprintCallable, NetMulticast, Unreliable)
    void All_SimulateDamageTarget(UPrimitiveComponent* TargetComponent, bool isSpecial, const FVector_NetQuantize& ImpactPoint, const FVector_NetQuantizeNormal& ImpactNormal, UFSDPhysicalMaterial* PhysMaterial, uint8 BoneIndex);
    
    UFUNCTION(BlueprintCallable, NetMulticast, Unreliable)
    void All_DoPowerAttack();
    

    // Fix for true pure virtual functions not being implemented
public:
    UFUNCTION(BlueprintCallable)
    virtual float GetStackingTimeLimit() const override PURE_VIRTUAL(GetStackingTimeLimit, return 0.0f;);
    
    UFUNCTION(BlueprintCallable)
    virtual int32 GetMaxCombinationsPerentry() const override PURE_VIRTUAL(GetMaxCombinationsPerentry, return 0;);
    
    UFUNCTION(BlueprintCallable)
    virtual EUpdateDamageNumberColor GetColorBehaviour() const override PURE_VIRTUAL(GetColorBehaviour, return EUpdateDamageNumberColor::ENormal;);
    
};

