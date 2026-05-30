#pragma once
#include "CoreMinimal.h"
#include "UserDependentSubSystem.h"
#include "EntitlementSubsystem.generated.h"

class IEntitlementSaveProvider;
class UEntitlementSaveProvider;
class UBaseEntitlement;
class UEntitlementSettings;
class UPlatformStoreEntitlement;

UCLASS(Blueprintable)
class ROGUECOREONLINESERVICES_API UEntitlementSubsystem : public UUserDependentSubSystem {
    GENERATED_BODY()
public:
    DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FEntitlementUpdateComplete, bool, bIsSuccessful, const UEntitlementSettings*, UpdatedSettings);
    
protected:
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FEntitlementUpdateComplete OnUpdateRequestComplete;
    
public:
    UEntitlementSubsystem();

    UFUNCTION(BlueprintCallable)
    bool ShowStorepageForEntitlement(const UPlatformStoreEntitlement* entitlementToOpen);
    
    UFUNCTION(BlueprintCallable)
    void MarkDLCsClaimed(TArray<UBaseEntitlement*>& ClaimedDLCs, TScriptInterface<IEntitlementSaveProvider> SaveProviderObject);
    
    UFUNCTION(BlueprintCallable)
    void MarkDLCsAnnounced(TArray<UBaseEntitlement*>& announcedDLCs, TScriptInterface<IEntitlementSaveProvider> SaveProviderObject);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    TArray<UPlatformStoreEntitlement*> GetPlatformStoreEntitlements() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    UBaseEntitlement* GetPlatformFollowEntitlement() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    TSet<UBaseEntitlement*> GetAllEntitlements() const;
    
};

