#include "FadeData.h"

FFadeData::FFadeData() {
    this->bEnabled = false;
    this->bShowDebugOutput = false;
    this->WidgetType = nullptr;
    this->Widget = nullptr;
    this->CurrentFade = 0.00f;
    this->TargetFade = 0.00f;
    this->FadeSpeed = 0.00f;
    this->Delay = 0.00f;
    this->bFadeWorldOnly = false;
    this->bCapFramerate = false;
    this->FadingImage = nullptr;
    this->DebugMsg = FString();
}

