#include "CharacterVanityLoadout.h"

FCharacterVanityLoadout::FCharacterVanityLoadout() {
    this->UsingSleevelessArmor = false;
    this->DoesArmorPaintApplyToUndersuit = false;
    this->DoesArmorPaintApplyToGauntlets = false;
    this->HasMedbaySuit = false;
    this->EquippedHeadItemID = FGuid();
    this->EquippedBeardItemID = FGuid();
    this->EquippedArmorItemID = FGuid();
    this->EquippedArmorMaterialID = FGuid();
    this->EquippedBeardColorItemID = FGuid();
    this->EquippedSkinColorItemID = FGuid();
    this->EquippedEyebrowsItemID = FGuid();
    this->EquippedMoustacheItemID = FGuid();
    this->EquippedSideburnsItemID = FGuid();
    this->EquippedHeadAccessoryItemID = FGuid();
}

