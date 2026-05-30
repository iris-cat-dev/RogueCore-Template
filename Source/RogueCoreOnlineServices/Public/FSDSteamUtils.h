#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=BlueprintFunctionLibrary -FallbackName=BlueprintFunctionLibrary
#include "FSDSteamUtils.generated.h"

class APlayerState;

UCLASS(Blueprintable)
class ROGUECOREONLINESERVICES_API UFSDSteamUtils : public UBlueprintFunctionLibrary {
    GENERATED_BODY()
public:
    UFSDSteamUtils();

    UFUNCTION(BlueprintCallable)
    static bool PlayerIsFollowingUsOnSteam();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static bool IsTextFilteringInitialized();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static bool IsDev(APlayerState* PlayerState);
    
    UFUNCTION(BlueprintCallable)
    static bool InitializeFilterText();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static bool HasSupporterUpgrade();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static bool HasContentCreatorEdition();
    
    UFUNCTION(BlueprintCallable)
    static FString GetPlayerSteamID();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static FString FilterProfanityText(const FString& inputMessage);
    
};

