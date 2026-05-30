#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=BlueprintFunctionLibrary -FallbackName=BlueprintFunctionLibrary
#include "EFSDTargetPlatform.h"
#include "FrontendBlueprintLibrary.generated.h"

UCLASS(Blueprintable)
class ROGUECOREUTILS_API UFrontendBlueprintLibrary : public UBlueprintFunctionLibrary {
    GENERATED_BODY()
public:
    UFrontendBlueprintLibrary();

    UFUNCTION(BlueprintCallable)
    static void OpenURLInExternalBrowser(const FString& URL);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static bool IsShippingBuild();
    
    UFUNCTION(BlueprintCallable)
    static void GetStringFromClipboard(FString& fromClipboard);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static bool FSDTargetPlatformIsXSX();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static EFSDTargetPlatform FSDTargetPlatform();
    
    UFUNCTION(BlueprintCallable)
    static void CopyStringToClipboard(const FString& toClipboard);
    
};

