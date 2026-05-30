#pragma once
#include "CoreMinimal.h"
#include "Net/OnlineBlueprintCallProxyBase.h"
#include "ChallengeModeSeedResponse.h"
#include "DelegateDelegate.h"
#include "FSDFetchChallengeModeSeedProxy.generated.h"

class UFSDFetchChallengeModeSeedProxy;
class UObject;

UCLASS(Blueprintable, MinimalAPI)
class UFSDFetchChallengeModeSeedProxy : public UOnlineBlueprintCallProxyBase {
    GENERATED_BODY()
public:
    DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FFetchWeeklyChallengeSeedDelegate, FChallengeModeSeedResponse, Response);
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FFetchWeeklyChallengeSeedDelegate OnSuccess;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FDelegate OnFailure;
    
    UFSDFetchChallengeModeSeedProxy();

    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContext"))
    static UFSDFetchChallengeModeSeedProxy* FetchChallengeModeSeed(const UObject* WorldContext);
    
};

