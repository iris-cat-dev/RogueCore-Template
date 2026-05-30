#include "WeaponHitCounterUpgrade.h"
#include "Templates/SubclassOf.h"

UWeaponHitCounterUpgrade::UWeaponHitCounterUpgrade() {
    this->ComponentClass = nullptr;
}

FUpgradeValues UWeaponHitCounterUpgrade::GetUpgradedValue(AFSDPlayerState* Player, TSubclassOf<AActor> Item, TSubclassOf<UWeaponHitCounterComponent> NewComponentClass) {
    return FUpgradeValues{};
}


