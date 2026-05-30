#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=Vector_NetQuantize -FallbackName=Vector_NetQuantize
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=Vector_NetQuantizeNormal -FallbackName=Vector_NetQuantizeNormal
#include "HitscanWeapon.h"
#include "Templates/SubclassOf.h"
#include "ElectricalSMG.generated.h"

class UFSDPhysicalMaterial;
class UFXSystemAsset;
class UHealthComponentBase;
class UPrimitiveComponent;
class USoundCue;
class UStatusEffect;

UCLASS(Blueprintable)
class AElectricalSMG : public AHitscanWeapon {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<UStatusEffect> AoEStatusEffect;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UFXSystemAsset* AoEParticle;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    USoundCue* AoESound;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float AoEStatusEffectChance;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float AoEStatusEffectRange;
    
public:
    AElectricalSMG(const FObjectInitializer& ObjectInitializer);

protected:
    UFUNCTION(BlueprintCallable)
    void OnTargetDamaged(UHealthComponentBase* Health, float Amount, UPrimitiveComponent* HitComponent, UFSDPhysicalMaterial* PhysicalMaterial);
    
    UFUNCTION(BlueprintCallable)
    void OnStatusEffectPushed(UHealthComponentBase* Health);
    
    UFUNCTION(BlueprintCallable, NetMulticast, Unreliable)
    void All_OnAoETriggered(const FVector_NetQuantize& Location, const FVector_NetQuantizeNormal& Normal) const;
    
};

