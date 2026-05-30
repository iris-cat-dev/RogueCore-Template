#pragma once
#include "CoreMinimal.h"
#include "Net/OnlineBlueprintCallProxyBase.h"
#include "BlueprintFriend.h"
#include "RegisterInviteNotificationBlueprintCallProxy.generated.h"

class UObject;
class URegisterInviteNotificationBlueprintCallProxy;

UCLASS(Blueprintable)
class URegisterInviteNotificationBlueprintCallProxy : public UOnlineBlueprintCallProxyBase {
    GENERATED_BODY()
public:
    DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FBlueprintRegisterInvitiNotificationDelegate, const FBlueprintFriend&, Results);
    DECLARE_DYNAMIC_MULTICAST_DELEGATE(FBlueprintRegisterInviteFailedDelegate);
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FBlueprintRegisterInvitiNotificationDelegate OnInviteReceived;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FBlueprintRegisterInvitiNotificationDelegate OnInviteAccepted;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FBlueprintRegisterInvitiNotificationDelegate OnInviteRejected;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FBlueprintRegisterInviteFailedDelegate OnInviteFailed;
    
    URegisterInviteNotificationBlueprintCallProxy();

    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static URegisterInviteNotificationBlueprintCallProxy* RegisterInvitiNotification(UObject* WorldContextObject);
    
};

