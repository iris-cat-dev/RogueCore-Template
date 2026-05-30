#include "AdvertisedEntitlement.h"

UAdvertisedEntitlement::UAdvertisedEntitlement() {
    this->ShowOnDLCScreen = true;
}

bool UAdvertisedEntitlement::ShouldBeAnnounced(TScriptInterface<IEntitlementSaveProvider> SaveProviderObject, UObject* WorldContextObject) const {
    return false;
}

void UAdvertisedEntitlement::OnEntitlementClaimButtonClicked(APlayerController* ClaimingPlayerController, TScriptInterface<IEntitlementSaveProvider> SaveProviderObject, UObject* WorldContextObject) {
}

bool UAdvertisedEntitlement::OnAdvertisementClicked(UObject* WorldContext) {
    return false;
}

UTexture2D* UAdvertisedEntitlement::GetInfoScreenOverlay() const {
    return NULL;
}

UTexture2D* UAdvertisedEntitlement::GetBanner_16_9() const {
    return NULL;
}

UTexture2D* UAdvertisedEntitlement::GetBanner() const {
    return NULL;
}

void UAdvertisedEntitlement::ClearCheckHandle() {
}


