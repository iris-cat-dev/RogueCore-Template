#include "StatChangeStatusEffectItem.h"

UStatChangeStatusEffectItem::UStatChangeStatusEffectItem() {
    this->Stat = nullptr;
    this->StatDisplayTransform = EItemUpgradeNumberTransformType::None;
    this->StatChange = 0.00f;
    this->AffectedByResistances = false;
}

UStatusEffect* UStatChangeStatusEffectItem::CreateStatSTE(UObject* Owner, UPawnStat* PawnStat, float StartingValue) {
    return NULL;
}


