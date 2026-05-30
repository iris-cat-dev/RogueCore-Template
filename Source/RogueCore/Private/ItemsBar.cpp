#include "ItemsBar.h"

UItemsBar::UItemsBar() {
    this->DefaultItemWidget = nullptr;
    this->bShowSupplyItem = false;
    this->SupplyIcon = nullptr;
    this->SelectedIcon = nullptr;
}





void UItemsBar::OnItemsLoaded() {
}





void UItemsBar::ItemEquipped(AItem* NewItem) {
}

void UItemsBar::ItemClicked(AItem* NewItem) {
}


