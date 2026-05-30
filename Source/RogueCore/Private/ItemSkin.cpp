#include "ItemSkin.h"

UItemSkin::UItemSkin() {
    this->Aquisition = nullptr;
    this->SkinSet = nullptr;
    this->DynamicIcon = nullptr;
    this->SkinEffect = nullptr;
    this->OwningItem = nullptr;
    this->OwningCharacter = nullptr;
}

bool UItemSkin::Unlock(UObject* WorldContext, UItemID* ItemID, bool broadcast) {
    return false;
}

void UItemSkin::Receive_SkinItem(UObject* Skinnable) const {
}

void UItemSkin::Lock(UObject* WorldContext, UItemID* ItemID) {
}

bool UItemSkin::IsUnlockedFromStart() const {
    return false;
}

bool UItemSkin::IsLocked(UObject* WorldContext, UItemID* skinnableID) const {
    return false;
}

bool UItemSkin::IsEquippedOnItem(UItemID* ItemID, AFSDPlayerState* PlayerState) const {
    return false;
}

EItemSkinType UItemSkin::GetSkinType() const {
    return EItemSkinType::PaintJob;
}

FText UItemSkin::GetSkinName() const {
    return FText::GetEmpty();
}

UItemID* UItemSkin::GetOwningItem() const {
    return NULL;
}

UPlayerCharacterID* UItemSkin::GetOwningCharacter() const {
    return NULL;
}

UMaterialInstanceDynamic* UItemSkin::CreateIcon(UObject* Owner) const {
    return NULL;
}


