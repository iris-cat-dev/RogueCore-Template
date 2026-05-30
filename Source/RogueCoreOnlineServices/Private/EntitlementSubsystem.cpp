#include "EntitlementSubsystem.h"

UEntitlementSubsystem::UEntitlementSubsystem() {
}

bool UEntitlementSubsystem::ShowStorepageForEntitlement(const UPlatformStoreEntitlement* entitlementToOpen) {
    return false;
}

void UEntitlementSubsystem::MarkDLCsClaimed(TArray<UBaseEntitlement*>& ClaimedDLCs, TScriptInterface<IEntitlementSaveProvider> SaveProviderObject) {
}

void UEntitlementSubsystem::MarkDLCsAnnounced(TArray<UBaseEntitlement*>& announcedDLCs, TScriptInterface<IEntitlementSaveProvider> SaveProviderObject) {
}

TArray<UPlatformStoreEntitlement*> UEntitlementSubsystem::GetPlatformStoreEntitlements() const {
    return TArray<UPlatformStoreEntitlement*>();
}

UBaseEntitlement* UEntitlementSubsystem::GetPlatformFollowEntitlement() const {
    return NULL;
}

TSet<UBaseEntitlement*> UEntitlementSubsystem::GetAllEntitlements() const {
    return TSet<UBaseEntitlement*>();
}


