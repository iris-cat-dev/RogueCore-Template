#pragma once
#include "CoreMinimal.h"
#include "StatusEffectItem.h"
#include "EnemyDetonationStatusEffectItem.generated.h"

UCLASS(Blueprintable, Deprecated, EditInlineNew, NotPlaceable)
class UDEPRECATED_EnemyDetonationStatusEffectItem : public UStatusEffectItem {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool FireDetonation;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool IceDetonation;
    
public:
    UDEPRECATED_EnemyDetonationStatusEffectItem();

};

