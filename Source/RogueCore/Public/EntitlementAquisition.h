#pragma once
#include "CoreMinimal.h"
#include "AquisitionBase.h"
#include "EntitlementAquisition.generated.h"

class UBaseEntitlement;

UCLASS(Blueprintable, EditInlineNew)
class ROGUECORE_API UEntitlementAquisition : public UAquisitionBase {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UBaseEntitlement* RequiredEntitlement;
    
public:
    UEntitlementAquisition();

};

