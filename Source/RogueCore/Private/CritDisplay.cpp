#include "CritDisplay.h"

FCritDisplay::FCritDisplay() {
    this->SoundEffect = nullptr;
    this->DisplayColor = FLinearColor::White;
    this->DisplayFont = FSlateFontInfo();
    this->Suffix = FString();
}

