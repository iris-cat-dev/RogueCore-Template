#include "CharacterSettings.h"

UCharacterSettings::UCharacterSettings() {
    this->BoscoID = nullptr;
    this->DefaultCharacterID = nullptr;
    this->DefaultEditorCharacterID = nullptr;
    this->ThrowItemAnimSettings = nullptr;
    this->AutoReloadShout = nullptr;
    this->TeleportPositioning = nullptr;
    this->TeleportPlacement = nullptr;
}

UPlayerCharacterID* UCharacterSettings::GetPlayerCharacterID(const FGuid& ID) const {
    return NULL;
}

UInventoryList* UCharacterSettings::GetInventoryList() const {
    return NULL;
}


