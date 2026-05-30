#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Object -FallbackName=Object
#include "FindAllyConditionBase.generated.h"

UCLASS(Abstract, Blueprintable, EditInlineNew)
class UFindAllyConditionBase : public UObject {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool Invert;
    
public:
    UFindAllyConditionBase();

};

