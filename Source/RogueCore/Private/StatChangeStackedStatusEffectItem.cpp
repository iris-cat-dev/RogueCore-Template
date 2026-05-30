#include "StatChangeStackedStatusEffectItem.h"

UStatChangeStackedStatusEffectItem::UStatChangeStackedStatusEffectItem() {
    this->Stat = nullptr;
    this->StatDisplayTransform = EItemUpgradeNumberTransformType::None;
    this->StatChange = 0.00f;
    this->AffectedByResistances = false;
}


