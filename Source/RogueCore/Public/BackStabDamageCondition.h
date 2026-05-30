#pragma once
#include "CoreMinimal.h"
#include "DamageCondition.h"
#include "BackStabDamageCondition.generated.h"

UCLASS(Blueprintable, EditInlineNew)
class UBackStabDamageCondition : public UDamageCondition {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float BackStabAngle;
    
public:
    UBackStabDamageCondition();

};

