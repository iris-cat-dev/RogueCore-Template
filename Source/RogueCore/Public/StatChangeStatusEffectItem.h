#pragma once
#include "CoreMinimal.h"
#include "EItemUpgradeNumberTransformType.h"
#include "StatusEffectItem.h"
#include "StatChangeStatusEffectItem.generated.h"

class UObject;
class UPawnStat;
class UStatusEffect;

UCLASS(Blueprintable, EditInlineNew)
class UStatChangeStatusEffectItem : public UStatusEffectItem {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UPawnStat* Stat;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString StatName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EItemUpgradeNumberTransformType StatDisplayTransform;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float StatChange;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool AffectedByResistances;
    
public:
    UStatChangeStatusEffectItem();

    UFUNCTION(BlueprintCallable)
    static UStatusEffect* CreateStatSTE(UObject* Owner, UPawnStat* PawnStat, float StartingValue);
    
};

