#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Object -FallbackName=Object
#include "EffectTriggerCondition.generated.h"

UCLASS(Abstract, Blueprintable)
class ROGUECORE_API UEffectTriggerCondition : public UObject {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool invertCondition;
    
public:
    UEffectTriggerCondition();

};

