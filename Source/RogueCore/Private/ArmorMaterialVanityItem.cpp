#include "ArmorMaterialVanityItem.h"

UArmorMaterialVanityItem::UArmorMaterialVanityItem() {
    this->DynamicIcon = nullptr;
    this->LockedToArmor = nullptr;
}

UMaterialInstanceConstant* UArmorMaterialVanityItem::SetArmorMaterialToTwoSided(UMaterialInstance* Parent) {
    return NULL;
}

UMaterialInstanceDynamic* UArmorMaterialVanityItem::CreateIcon(UObject* Owner) const {
    return NULL;
}

void UArmorMaterialVanityItem::CreateClothMaterialForAmorVanity(UArmorMaterialVanityItem* armorVanity) {
}


