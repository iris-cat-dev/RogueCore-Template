#include "PlatformSpecificEventPopup.h"

FPlatformSpecificEventPopup::FPlatformSpecificEventPopup() {
    this->TargetPlatform = EFSDTargetPlatform::Steam;
    this->PopupWidget = nullptr;
}

