#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=ActorComponent -FallbackName=ActorComponent
#include "DamageRelevant.h"
#include "EDamageUpgrade.h"
#include "FloatUpgradePair.h"
#include "UpgradeContainerComponent.generated.h"

class AActor;
class UDamageBonusBase;
class UDamageParamBonus;
class UMiscUpgradeKey;

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class ROGUECORE_API UUpgradeContainerComponent : public UActorComponent, public IDamageRelevant {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Replicated, Transient, meta=(AllowPrivateAccess=true))
    TArray<FFloatUpgradePair> MiscUpgrades;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Replicated, Transient, meta=(AllowPrivateAccess=true))
    TArray<UDamageBonusBase*> DamageBonusUpgrades;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Replicated, Transient, meta=(AllowPrivateAccess=true))
    TArray<UDamageParamBonus*> DamageParamBonuses;
    
    UPROPERTY(EditAnywhere, Replicated, Transient, meta=(AllowPrivateAccess=true))
    float NumericalDamageUpgrades[14];
    
    UPROPERTY(EditAnywhere, Replicated, Transient, meta=(AllowPrivateAccess=true))
    float NumericalUpgrades[5];
    
public:
    UUpgradeContainerComponent(const FObjectInitializer& ObjectInitializer);

    virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;

    UFUNCTION(BlueprintAuthorityOnly, BlueprintCallable)
    static void RemoveMiscUpgrade(AActor* Target, UMiscUpgradeKey* Key, float Value);
    
    UFUNCTION(BlueprintAuthorityOnly, BlueprintCallable)
    static void RemoveFloatUpgrade(AActor* Target, EDamageUpgrade upgradeType, float Value);
    
    UFUNCTION(BlueprintAuthorityOnly, BlueprintCallable)
    static void RemoveDynamicUpgrade(AActor* Target, UDamageBonusBase* DamageBonus);
    
    UFUNCTION(BlueprintAuthorityOnly, BlueprintCallable)
    static void RemoveDamageParamBonus(AActor* Target, UDamageParamBonus* DamageBonus);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static float GetMiscUpgradeValue(AActor* Target, UMiscUpgradeKey* Key);
    
    UFUNCTION(BlueprintAuthorityOnly, BlueprintCallable)
    static void ChangeMiscUpgrade(AActor* Target, UMiscUpgradeKey* Key, float Value);
    
    UFUNCTION(BlueprintAuthorityOnly, BlueprintCallable)
    static void AddFloatUpgrade(AActor* Target, EDamageUpgrade upgradeType, float Value);
    
    UFUNCTION(BlueprintAuthorityOnly, BlueprintCallable)
    static void AddDynamicUpgrade(AActor* Target, UDamageBonusBase* DamageBonus);
    
    UFUNCTION(BlueprintAuthorityOnly, BlueprintCallable)
    static void AddDamageParamBonus(AActor* Target, UDamageParamBonus* DamageBonus);
    

    // Fix for true pure virtual functions not being implemented
};

