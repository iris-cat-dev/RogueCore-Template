#pragma once
#include "CoreMinimal.h"
#include "BaseEntitlement.h"
#include "AndEntitlement.generated.h"

UCLASS(Blueprintable)
class UAndEntitlement : public UBaseEntitlement {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<UBaseEntitlement*> DLCs;
    
    UAndEntitlement();

};

