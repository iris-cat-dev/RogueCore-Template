#include "InputTranslation.h"

FInputTranslation::FInputTranslation() {
    this->bControllerOverride = false;
    this->Default = FInputTranslationEntry();
    this->ControllerOverride = FInputTranslationEntry();
}

