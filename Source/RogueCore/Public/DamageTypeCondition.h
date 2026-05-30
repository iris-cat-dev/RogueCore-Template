#pragma once
#include "CoreMinimal.h"
#include "DamageCondition.h"
#include "DamageTypeCondition.generated.h"

class UDamageClass;

UCLASS(Blueprintable, EditInlineNew)
class UDamageTypeCondition : public UDamageCondition {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<UDamageClass*> TypeList;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool ListExcludes;
    
    UDamageTypeCondition();

};

