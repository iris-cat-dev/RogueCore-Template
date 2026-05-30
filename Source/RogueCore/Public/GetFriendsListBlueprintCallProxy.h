#pragma once
#include "CoreMinimal.h"
#include "Net/OnlineBlueprintCallProxyBase.h"
#include "BlueprintGetFriendsListDelegateDelegate.h"
#include "GetFriendsListBlueprintCallProxy.generated.h"

class UGetFriendsListBlueprintCallProxy;
class UObject;

UCLASS(Blueprintable)
class UGetFriendsListBlueprintCallProxy : public UOnlineBlueprintCallProxyBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FBlueprintGetFriendsListDelegate OnSuccess;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FBlueprintGetFriendsListDelegate OnFailure;
    
    UGetFriendsListBlueprintCallProxy();

    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static UGetFriendsListBlueprintCallProxy* GetFriendsList(UObject* WorldContextObject, const FString& ListName);
    
};

