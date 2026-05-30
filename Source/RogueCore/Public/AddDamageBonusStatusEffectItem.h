#pragma once
#include "CoreMinimal.h"
#include "EDamageBonusApplicationType.h"
#include "EDamageUpgrade.h"
#include "EDamagebonusMode.h"
#include "StatusEffectItem.h"
#include "Templates/SubclassOf.h"
#include "AddDamageBonusStatusEffectItem.generated.h"

class AActor;
class UDamageBonusBase;

UCLASS(Blueprintable, EditInlineNew)
class UAddDamageBonusStatusEffectItem : public UStatusEffectItem {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<TSubclassOf<AActor>> OnlyApplyToActorTypes;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UDamageBonusBase* DamageBonus;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString ValueName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float Value;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EDamagebonusMode Mode;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EDamageUpgrade BonusType;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EDamageBonusApplicationType ApplicationType;
    
public:
    UAddDamageBonusStatusEffectItem();

};

