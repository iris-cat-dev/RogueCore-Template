#pragma once
#include "CoreMinimal.h"
#include "RandRange.h"
#include "StatusEffectItem.h"
#include "InfectionStatusEffectItem.generated.h"

UCLASS(Blueprintable, Deprecated, EditInlineNew, NotPlaceable)
class UDEPRECATED_InfectionStatusEffectItem : public UStatusEffectItem {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FRandRange InfectionChangeAmount;
    
public:
    UDEPRECATED_InfectionStatusEffectItem();

};

