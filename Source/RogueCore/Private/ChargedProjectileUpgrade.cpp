#include "ChargedProjectileUpgrade.h"
#include "Templates/SubclassOf.h"

UChargedProjectileUpgrade::UChargedProjectileUpgrade() {
    this->upgradeType = EChargedProjectileUpgrades::ExplodesOnDamage;
    this->ProjectileClass = nullptr;
}

FUpgradeValues UChargedProjectileUpgrade::GetUpgradedValue(TSubclassOf<AItem> Item, TSubclassOf<AActor> upgradedActor, AFSDPlayerState* Player, EChargedProjectileUpgrades NewUpgradeType) {
    return FUpgradeValues{};
}


