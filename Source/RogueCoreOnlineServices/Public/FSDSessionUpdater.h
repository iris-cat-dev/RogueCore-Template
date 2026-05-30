#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Object -FallbackName=Object
#include "NewFSDSessionIDDelegate.h"
#include "FSDSessionUpdater.generated.h"

class UFSDSessionHandler;

UCLASS(Blueprintable)
class ROGUECOREONLINESERVICES_API UFSDSessionUpdater : public UObject {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FNewFSDSessionID OnNewFSDSessionId;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UFSDSessionHandler* SessionHandler;
    
public:
    UFSDSessionUpdater();

};

