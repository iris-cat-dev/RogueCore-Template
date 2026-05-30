#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=GameInstanceSubsystem -FallbackName=GameInstanceSubsystem
#include "EFSDLoginState.h"
#include "UserDependentSubSystem.generated.h"

UCLASS(Abstract, Blueprintable)
class ROGUECOREONLINESERVICES_API UUserDependentSubSystem : public UGameInstanceSubsystem {
    GENERATED_BODY()
public:
    UUserDependentSubSystem();

protected:
    UFUNCTION(BlueprintCallable)
    void OnLoginStateChanged(EFSDLoginState LoginStatus, const FString& LoginResult);
    
};

