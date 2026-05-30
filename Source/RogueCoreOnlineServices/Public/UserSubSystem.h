#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=GameInstanceSubsystem -FallbackName=GameInstanceSubsystem
#include "EFSDLoginState.h"
#include "FSDOnLoginStatusChangedDelegate.h"
#include "UserSubSystem.generated.h"

class UObject;

UCLASS(Blueprintable)
class ROGUECOREONLINESERVICES_API UUserSubSystem : public UGameInstanceSubsystem {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FFSDOnLoginStatusChanged LoginStatusChanged;
    
public:
    UUserSubSystem();

private:
    UFUNCTION(BlueprintCallable)
    void OnLoginStateChanged(EFSDLoginState LoginStatus, const FString& LoginResult);
    
public:
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContext"))
    static bool IsCurrentUserLoggedIn(const UObject* WorldContext);
    
};

