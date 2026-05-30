#include "ItemSkinSchematicCollection.h"

UItemSkinSchematicCollection::UItemSkinSchematicCollection() {
    this->Skin = nullptr;
    this->Category = nullptr;
    this->PricingTier = nullptr;
    this->Rarity = nullptr;
    this->CollectionType = EItemSkinCollectionType::PerCharacter;
    this->LastGeneratedCollectionType = EItemSkinCollectionType::PerCharacter;
}


