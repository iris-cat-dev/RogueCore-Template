#include "VanityCharacterSetup.h"

FVanityCharacterSetup::FVanityCharacterSetup() {
    this->CharacterClass = nullptr;
    this->ArmorType = EArmorMeshType::None;
    this->VanityItems = FEquippedVanity();
    this->VanityColors = FVanityColors();
}

