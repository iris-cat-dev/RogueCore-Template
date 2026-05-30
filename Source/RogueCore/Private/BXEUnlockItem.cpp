#include "BXEUnlockItem.h"

UBXEUnlockItem::UBXEUnlockItem() {
    this->ItemID = nullptr;
}

FText UBXEUnlockItem::GetItemName() const {
    return FText::GetEmpty();
}

FText UBXEUnlockItem::GetItemFunctionalDescription() const {
    return FText::GetEmpty();
}

FText UBXEUnlockItem::GetItemDescription() const {
    return FText::GetEmpty();
}

bool UBXEUnlockItem::GetIsGrenadeItem() const {
    return false;
}


