#include "PlayerCharacterData.h"

UPlayerCharacterData::UPlayerCharacterData() {
    this->characterID = nullptr;
    this->AbilityData = nullptr;
    this->Gender = ECharacterGender::Neutral;
}

FDialogVoiceSettings UPlayerCharacterData::GetVoiceSettings() const {
    return FDialogVoiceSettings{};
}

bool UPlayerCharacterData::GetUseFeminineVanityAssets() const {
    return false;
}

UTexture2D* UPlayerCharacterData::GetSmallIconSimplified() const {
    return NULL;
}

UTexture2D* UPlayerCharacterData::GetSmallIconDropShadow() const {
    return NULL;
}

UTexture2D* UPlayerCharacterData::GetSmallIcon() const {
    return NULL;
}

FText UPlayerCharacterData::GetShortDescription() const {
    return FText::GetEmpty();
}

FText UPlayerCharacterData::GetName() const {
    return FText::GetEmpty();
}

FText UPlayerCharacterData::GetLongDescription() const {
    return FText::GetEmpty();
}

UTexture2D* UPlayerCharacterData::GetIconType(ECharacterIconType InType) {
    return NULL;
}

UTexture2D* UPlayerCharacterData::GetIcon() const {
    return NULL;
}

UTexture2D* UPlayerCharacterData::GetFullSizeImage() const {
    return NULL;
}

FLinearColor UPlayerCharacterData::GetColor() const {
    return FLinearColor{};
}

UClassAnimationSet* UPlayerCharacterData::GetClassAnimationSet() const {
    return NULL;
}


