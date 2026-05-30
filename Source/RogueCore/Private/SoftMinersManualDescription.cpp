#include "SoftMinersManualDescription.h"

FSoftMinersManualDescription::FSoftMinersManualDescription() {
    this->Headline = FText::GetEmpty();
    this->RichDescription = FText::GetEmpty();
    this->ImageFront = nullptr;
    this->ImageBackground = nullptr;
}

