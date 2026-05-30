#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=EmptyOnlineDelegate__DelegateSignature -FallbackName=EmptyOnlineDelegateDelegate
#include "Net/OnlineBlueprintCallProxyBase.h"
#include "RejectInviteBlueprintCallProxy.generated.h"

class UObject;
class URejectInviteBlueprintCallProxy;

UCLASS(Blueprintable)
class URejectInviteBlueprintCallProxy : public UOnlineBlueprintCallProxyBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FEmptyOnlineDelegate OnSuccess;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FEmptyOnlineDelegate OnFailure;
    
    URejectInviteBlueprintCallProxy();

    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static URejectInviteBlueprintCallProxy* RejectInvite(UObject* WorldContextObject, const FString& ListName, const FString& UserId);
    
};

