#include "CryoSprayProjectileUpgrade.h"
#include "Templates/SubclassOf.h"

UCryoSprayProjectileUpgrade::UCryoSprayProjectileUpgrade() {
    this->MaxFireCost = 0.00f;
    this->BaseArch = 0.00f;
    this->ProjectileClass = nullptr;
}

FUpgradeValues UCryoSprayProjectileUpgrade::GetUpgradedValue(TSubclassOf<AItem> Item, AFSDPlayerState* Player, TSubclassOf<AProjectile> NewProjectileClass) {
    return FUpgradeValues{};
}


