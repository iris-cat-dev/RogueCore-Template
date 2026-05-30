#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=BlueprintFunctionLibrary -FallbackName=BlueprintFunctionLibrary
#include "FSDOnlineUtils.generated.h"

UCLASS(Blueprintable)
class ROGUECOREONLINESERVICES_API UFSDOnlineUtils : public UBlueprintFunctionLibrary {
    GENERATED_BODY()
public:
    UFSDOnlineUtils();

    UFUNCTION(BlueprintCallable)
    static void ResetSteamTicket();
    
    UFUNCTION(BlueprintCallable)
    static FString GetPlatformTicket();
    
    UFUNCTION(BlueprintCallable)
    static bool GenerateTokenIfNeeded();
    
};

