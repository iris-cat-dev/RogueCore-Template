#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Object -FallbackName=Object
#include "BXEUnlockConditionBase.generated.h"

UCLASS(Abstract, Blueprintable)
class UBXEUnlockConditionBase : public UObject {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool InvertResult;
    
public:
    UBXEUnlockConditionBase();

};

