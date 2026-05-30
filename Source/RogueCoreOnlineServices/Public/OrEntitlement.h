#pragma once
#include "CoreMinimal.h"
#include "BaseEntitlement.h"
#include "OrEntitlement.generated.h"

UCLASS(Blueprintable)
class UOrEntitlement : public UBaseEntitlement {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<UBaseEntitlement*> DLCs;
    
    UOrEntitlement();

};

