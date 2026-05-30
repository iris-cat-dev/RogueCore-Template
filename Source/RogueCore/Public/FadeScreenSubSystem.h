#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=GameInstanceSubsystem -FallbackName=GameInstanceSubsystem
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=LatentActionInfo -FallbackName=LatentActionInfo
#include "EFadeScreenType.h"
#include "FadeData.h"
#include "FadeScreenSubSystem.generated.h"

class UFSDGameInstance;
class UObject;
class UTexture;

UCLASS(Abstract, Blueprintable)
class ROGUECORE_API UFadeScreenSubSystem : public UGameInstanceSubsystem {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FFadeData Fading;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UFSDGameInstance* GameInstance;
    
public:
    UFadeScreenSubSystem();

    UFUNCTION(BlueprintCallable, meta=(Latent, LatentInfo="LatentInfo", WorldContext="WorldContext"))
    static void WaitForLoadingScreenToFinish(const FLatentActionInfo LatentInfo, const UObject* WorldContext);
    
    UFUNCTION(BlueprintCallable, meta=(Latent, LatentInfo="LatentInfo", WorldContext="WorldContext"))
    static void WaitForFade(const FLatentActionInfo LatentInfo, const UObject* WorldContext, const EFadeScreenType FadeType);
    
    UFUNCTION(BlueprintCallable, BlueprintPure, meta=(WorldContext="WorldContext"))
    static bool IsScreenFadingToBlack(const UObject* WorldContext);
    
    UFUNCTION(BlueprintCallable, BlueprintPure, meta=(WorldContext="WorldContext"))
    static bool IsScreenFadingFromBlack(const UObject* WorldContext);
    
    UFUNCTION(BlueprintCallable, BlueprintPure, meta=(WorldContext="WorldContext"))
    static bool IsScreenFading(const UObject* WorldContext);
    
    UFUNCTION(BlueprintCallable, meta=(Latent, LatentInfo="LatentInfo", WorldContext="WorldContext"))
    static void FadeScreenToBlackWithWait(const FLatentActionInfo LatentInfo, UObject* WorldContext, float FadeTime, float Delay, bool ResetExistingFades, bool CapFramerate, bool FadeWorldOnly, UTexture* LoadingImage);
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContext"))
    static void FadeScreenToBlackInstantly(const UObject* WorldContext, bool FadeWorldOnly);
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContext"))
    static float FadeScreenToBlack(const UObject* WorldContext, float FadeTime, float Delay, bool ResetExistingFades, bool CapFramerate, bool FadeWorldOnly, UTexture* FadingImage);
    
    UFUNCTION(BlueprintCallable, meta=(Latent, LatentInfo="LatentInfo", WorldContext="WorldContext"))
    static void FadeScreenFromBlackWithWait(const FLatentActionInfo LatentInfo, UObject* WorldContext, float FadeTime, float Delay, bool ResetExistingFades, bool CapFramerate, bool FadeWorldOnly, UTexture* LoadingImage);
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContext"))
    static void FadeScreenFromBlackInstantly(const UObject* WorldContext, bool FadeWorldOnly);
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContext"))
    static float FadeScreenFromBlack(const UObject* WorldContext, float FadeTime, float Delay, bool ResetExistingFades, bool CapFramerate, bool FadeWorldOnly, UTexture* FadingImage);
    
};

