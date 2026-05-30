#pragma once
#include "CoreMinimal.h"
#include "Kismet/BlueprintAsyncActionBase.h"
#include "EFSDLoginState.h"
#include "FSDOnLoginStatusChangedDelegate.h"
#include "Kismet/BlueprintAsyncActionBase.h"
#include "AsyncAction_Login.generated.h"

class UAsyncAction_Login;
class UObject;

UCLASS(Blueprintable)
class ROGUECOREONLINESERVICES_API UAsyncAction_Login : public UBlueprintAsyncActionBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FFSDOnLoginStatusChanged OnProgress;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FFSDOnLoginStatusChanged OnFail;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FFSDOnLoginStatusChanged OnSuccess;
    
    UAsyncAction_Login();

private:
    UFUNCTION(BlueprintCallable)
    void OnLoginStateChanged(EFSDLoginState LoginStatus, const FString& LoginResult);
    
public:
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static UAsyncAction_Login* Login(UObject* WorldContextObject);
    
};

