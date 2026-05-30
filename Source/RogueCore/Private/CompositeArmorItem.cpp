#include "CompositeArmorItem.h"

FCompositeArmorItem::FCompositeArmorItem() {
    this->Component = nullptr;
    this->Health = 0.00f;
    this->OverrideAffectedByArmorBreak = false;
    this->MyAffectedByAmorBreak = false;
}

