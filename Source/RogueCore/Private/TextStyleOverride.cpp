#include "TextStyleOverride.h"

FTextStyleOverride::FTextStyleOverride() {
    this->bOverrideFont = false;
    this->bOverrideColor = false;
    this->bOverrideSize = false;
    this->SizeScale = 0.00f;
    this->Font = FSlateFontInfo();
    this->Color = FSlateColor();
}

