#include "LocalizedLanguageInfo.h"

FLocalizedLanguageInfo::FLocalizedLanguageInfo() {
    this->CommunityTranslated = false;
    this->TranslatedPercent = 0;
    this->EnglishName = FString();
    this->NativeName = FString();
    this->CodeName = FString();
}

