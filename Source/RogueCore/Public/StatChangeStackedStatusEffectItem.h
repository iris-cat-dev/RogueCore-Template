#pragma once
#include "CoreMinimal.h"
#include "EItemUpgradeNumberTransformType.h"
#include "StatusEffectItem.h"
#include "StatChangeStackedStatusEffectItem.generated.h"

class UPawnStat;

UCLASS(Blueprintable, EditInlineNew)
class UStatChangeStackedStatusEffectItem : public UStatusEffectItem {
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
    UStatChangeStackedStatusEffectItem();

};

