#pragma once
#include "CoreMinimal.h"
#include "DamageCondition.h"
#include "EDamageVector.h"
#include "DamageVectorCondition.generated.h"

UCLASS(Blueprintable, EditInlineNew)
class UDamageVectorCondition : public UDamageCondition {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EDamageVector Vector;
    
    UDamageVectorCondition();

};

