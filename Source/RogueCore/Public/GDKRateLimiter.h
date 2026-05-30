#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=GameInstanceSubsystem -FallbackName=GameInstanceSubsystem
#include "GDKRateLimiter.generated.h"

class UFSDRateLimiter;

UCLASS(Blueprintable)
class UGDKRateLimiter : public UGameInstanceSubsystem {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UFSDRateLimiter* Handler;
    
    UGDKRateLimiter();

};

