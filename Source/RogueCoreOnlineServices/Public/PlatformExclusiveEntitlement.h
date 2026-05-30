#pragma once
#include "CoreMinimal.h"
#include "EFSDTargetPlatform.h"
#include "BaseEntitlement.h"
#include "EFSDTargetPlatform.h"
#include "PlatformExclusiveEntitlement.generated.h"

UCLASS(Blueprintable)
class UPlatformExclusiveEntitlement : public UBaseEntitlement {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EFSDTargetPlatform AllowedPlatforms;
    
    UPlatformExclusiveEntitlement();

};

