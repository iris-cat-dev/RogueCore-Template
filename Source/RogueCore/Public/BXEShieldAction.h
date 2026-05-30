#pragma once
#include "CoreMinimal.h"
#include "BXEUnlockAction.h"
#include "BXEShieldAction.generated.h"

UCLASS(Blueprintable, EditInlineNew)
class UBXEShieldAction : public UBXEUnlockAction {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString Name;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 CapacityAddition;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float RegenFactorAddition;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float DegredationRateAddition;
    
public:
    UBXEShieldAction();

};

