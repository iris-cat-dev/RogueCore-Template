#include "ConstructionItem.h"

FConstructionItem::FConstructionItem() {
    this->SpawnBudgetCost = 0;
    this->SpawnWeight = 0.00f;
    this->StructureClass = nullptr;
    this->Tags = FGameplayTagContainer();
}

