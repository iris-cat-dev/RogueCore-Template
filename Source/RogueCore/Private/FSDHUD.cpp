#include "FSDHUD.h"

AFSDHUD::AFSDHUD(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->DebugDisplay.AddDefaulted(1);
    this->IsVisibleFlags = 0;
    this->HUDWidget = nullptr;
}

bool AFSDHUD::ToggleHUDVisibility(EHUDVisibilityReason Reason) {
    return false;
}


void AFSDHUD::SetHUDWidget(UFSDMainHUDWidget* InWidget) {
}

void AFSDHUD::SetHUDVisible(bool IsVisible, EHUDVisibilityReason Reason) {
}





bool AFSDHUD::IsHUDVisibleFlagSet(EHUDVisibilityReason Reason) const {
    return false;
}


UFSDMainHUDWidget* AFSDHUD::GetHUDWidget() {
    return NULL;
}

bool AFSDHUD::GetHUDVisible() const {
    return false;
}

AFSDHUD* AFSDHUD::GetFSDHUD(APlayerController* InPlayerController) {
    return NULL;
}



