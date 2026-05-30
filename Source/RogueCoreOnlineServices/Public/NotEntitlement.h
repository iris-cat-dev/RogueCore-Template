#pragma once
#include "CoreMinimal.h"
#include "BaseEntitlement.h"
#include "NotEntitlement.generated.h"

UCLASS(Blueprintable)
class UNotEntitlement : public UBaseEntitlement {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UBaseEntitlement* DLC;
    
    UNotEntitlement();

};

