#include "PlatformExclusiveEntitlement.h"

#include "EFSDTargetPlatform.h"

UPlatformExclusiveEntitlement::UPlatformExclusiveEntitlement() {
    this->AllowedPlatforms = EFSDTargetPlatform::Steam;
}


