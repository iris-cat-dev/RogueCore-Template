#pragma once
#include "CoreMinimal.h"
#include "AbilityUpgrade.h"
#include "EWhileRewindActiveUpgrade.h"
#include "WhileTimeRewindActiveUpgrade.generated.h"

class UDamageBonusBase;
class UStatusEffect;

UCLASS(Blueprintable, EditInlineNew)
class UWhileTimeRewindActiveUpgrade : public UAbilityUpgrade {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    EWhileRewindActiveUpgrade Type;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    TArray<UDamageBonusBase*> DamageBonuses;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    TArray<UStatusEffect*> SelfStatusEffects;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    TArray<UStatusEffect*> AlliesStatusEffects;
    
    UWhileTimeRewindActiveUpgrade();

};

