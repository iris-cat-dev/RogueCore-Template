#include "ControllerIconSettings.h"

UControllerIconSettings::UControllerIconSettings() {
    this->Xbox_KeyIcons.AddDefaulted(21);
    this->Playstation_KeyIcons.AddDefaulted(21);
    this->Playstation5_KeyIcons.AddDefaulted(21);
    this->MouseKeyboard_KeyIcons.AddDefaulted(58);
}

bool UControllerIconSettings::FindMouseKeyboardKeyIcon(FKey Key, FActionIconMapping& KeyIcon) {
    return false;
}

bool UControllerIconSettings::FindKeyIcon(FKey Key, FActionIconMapping& KeyIcon) {
    return false;
}

bool UControllerIconSettings::FindControllerKeyIcon(FKey Key, FActionIconMapping& KeyIcon) {
    return false;
}


