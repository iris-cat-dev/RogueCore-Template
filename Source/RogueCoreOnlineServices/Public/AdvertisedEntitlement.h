#pragma once
#include "CoreMinimal.h"
#include "BaseEntitlement.h"
#include "OnEntitlementAnnouncedDelegate.h"
#include "AdvertisedEntitlement.generated.h"

class APlayerController;
class IEntitlementSaveProvider;
class UEntitlementSaveProvider;
class UFileMediaSource;
class UObject;
class UTexture2D;

UCLASS(Abstract, Blueprintable)
class ROGUECOREONLINESERVICES_API UAdvertisedEntitlement : public UBaseEntitlement {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool ShowOnDLCScreen;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FText HeaderText;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FText> EntitlementContentList;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FText ContentLocation;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FText ClaimButtonText;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftObjectPtr<UTexture2D> banner;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftObjectPtr<UTexture2D> Banner_16_9;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftObjectPtr<UTexture2D> InfoScreenOverlay;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftObjectPtr<UFileMediaSource> Movie;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnEntitlementAnnounced OnEntitlementAnnounced;
    
public:
    UAdvertisedEntitlement();

    UFUNCTION(BlueprintCallable, BlueprintPure, meta=(WorldContext="WorldContextObject"))
    bool ShouldBeAnnounced(TScriptInterface<IEntitlementSaveProvider> SaveProviderObject, UObject* WorldContextObject) const;
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    void OnEntitlementClaimButtonClicked(APlayerController* ClaimingPlayerController, TScriptInterface<IEntitlementSaveProvider> SaveProviderObject, UObject* WorldContextObject);
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContext"))
    bool OnAdvertisementClicked(UObject* WorldContext);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    UTexture2D* GetInfoScreenOverlay() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    UTexture2D* GetBanner_16_9() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    UTexture2D* GetBanner() const;
    
protected:
    UFUNCTION(BlueprintCallable)
    void ClearCheckHandle();
    
};

