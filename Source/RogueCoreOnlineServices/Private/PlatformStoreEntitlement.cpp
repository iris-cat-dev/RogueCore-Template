#include "PlatformStoreEntitlement.h"

UPlatformStoreEntitlement::UPlatformStoreEntitlement() {
    this->AnnounceOnStart = true;
}

bool UPlatformStoreEntitlement::GetPlatformID(FString& idOut) const {
    return false;
}


