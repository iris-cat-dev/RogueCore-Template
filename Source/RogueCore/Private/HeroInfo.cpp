#include "HeroInfo.h"

FHeroInfo::FHeroInfo() {
    this->HeroIcon = nullptr;
    this->CharacterSelectorIcon = nullptr;
    this->SmallHeroIcon = nullptr;
    this->SmallSimpleHeroIcon = nullptr;
    this->SmallSimpleHeroIconDropShadow = nullptr;
    this->HeroFullSizeImage = nullptr;
    this->AbilityIcon = nullptr;
    this->ClassAnimationSet = nullptr;
    this->MedbayVanityItem = nullptr;
    this->HeroName = FText::GetEmpty();
    this->HeroColor = FLinearColor::White;
    this->HeroShortDescription = FText::GetEmpty();
    this->HeroLongDescription = FText::GetEmpty();
}

