#pragma once
#include "CoreMinimal.h"
#include "Kismet/BlueprintAsyncActionBase.h"
#include "OnMessageFeedCompletedDelegate.h"
#include "WebMessageFeed.generated.h"

class UObject;
class UWebMessageFeed;

UCLASS(Blueprintable)
class UWebMessageFeed : public UBlueprintAsyncActionBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnMessageFeedCompleted success;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnMessageFeedCompleted Failed;
    
    UWebMessageFeed();

    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static UWebMessageFeed* DownloadMessageFeed(UObject* WorldContextObject);
    
};

