#pragma once
#include "CoreMinimal.h"
#include "AbilityUpgrade.h"
#include "Templates/SubclassOf.h"
#include "ProjectileAbilityUpgrade.generated.h"

class AProjectile;
class UDamageBonusBase;

UCLASS(Blueprintable, EditInlineNew)
class UProjectileAbilityUpgrade : public UAbilityUpgrade {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<AProjectile> ProjectileClass;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UDamageBonusBase* DamageScaling;
    
public:
    UProjectileAbilityUpgrade();

};

