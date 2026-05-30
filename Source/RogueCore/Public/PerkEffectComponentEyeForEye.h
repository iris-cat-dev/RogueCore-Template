#pragma once
#include "CoreMinimal.h"
#include "DamageData.h"
#include "PerkEffectComponent.h"
#include "Templates/SubclassOf.h"
#include "PerkEffectComponentEyeForEye.generated.h"

class UDamageClass;
class UHealthComponentBase;
class UStatusEffect;

UCLASS(Abstract, Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class UPerkEffectComponentEyeForEye : public UPerkEffectComponent {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float CoolDown;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftClassPtr<UStatusEffect> EyeForEyeSTE;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UDamageClass* PhysicalDamageClass;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TSubclassOf<UStatusEffect> LoadedSTE;
    
public:
    UPerkEffectComponentEyeForEye(const FObjectInitializer& ObjectInitializer);

protected:
    UFUNCTION(BlueprintCallable)
    void OnHit(float Damage, const FDamageData& DamageData, bool anyHealthLost, UHealthComponentBase* HealthComponent);
    
};

