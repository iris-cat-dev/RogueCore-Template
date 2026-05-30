#include "WorkbenchItemWidget.h"

UWorkbenchItemWidget::UWorkbenchItemWidget() {
    this->ChoiceCount = 2;
    this->WorkbenchCollectionTag = nullptr;
    this->ItemData = nullptr;
    this->ItemUnlock = nullptr;
    this->Rarity = nullptr;
}

bool UWorkbenchItemWidget::SelectItemUpgrade(UObject* InUpgrade) {
    return false;
}


