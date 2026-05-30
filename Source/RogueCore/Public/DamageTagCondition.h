#pragma once
#include "CoreMinimal.h"
#include "DamageCondition.h"
#include "ETagConditionType.h"
#include "DamageTagCondition.generated.h"

class UDamageTag;

UCLASS(Blueprintable, EditInlineNew)
class UDamageTagCondition : public UDamageCondition {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<UDamageTag*> HasTags;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ETagConditionType Type;
    
    UDamageTagCondition();

};

