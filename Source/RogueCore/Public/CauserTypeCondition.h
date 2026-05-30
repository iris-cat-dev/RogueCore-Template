#pragma once
#include "CoreMinimal.h"
#include "DamageCondition.h"
#include "Templates/SubclassOf.h"
#include "CauserTypeCondition.generated.h"

class AActor;

UCLASS(Blueprintable, EditInlineNew)
class UCauserTypeCondition : public UDamageCondition {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<AActor> CauserType;
    
    UCauserTypeCondition();

};

