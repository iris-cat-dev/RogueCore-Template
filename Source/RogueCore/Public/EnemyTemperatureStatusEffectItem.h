#pragma once
#include "CoreMinimal.h"
#include "StatusEffectItem.h"
#include "EnemyTemperatureStatusEffectItem.generated.h"

UCLASS(Blueprintable, Deprecated, EditInlineNew, NotPlaceable)
class UDEPRECATED_EnemyTemperatureStatusEffectItem : public UStatusEffectItem {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float WarmingRate;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float UnFreezeTemperature;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float TemperatureChangeScaleModifier;
    
public:
    UDEPRECATED_EnemyTemperatureStatusEffectItem();

};

