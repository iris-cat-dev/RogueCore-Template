#include "FlatDamageUpgrade.h"
#include "Templates/SubclassOf.h"

UFlatDamageUpgrade::UFlatDamageUpgrade() {
    this->Damage = 0.00f;
    this->DamageClass = nullptr;
    this->RequiredClass = nullptr;
    this->MergeWithOtherFlatDamageUpgrades = true;
    this->Condition = nullptr;
}

FUpgradeValues UFlatDamageUpgrade::GetUpgradedValue(TSubclassOf<AActor> Item, AFSDPlayerState* Player, UDamageClass* NewDamageClass) {
    return FUpgradeValues{};
}


