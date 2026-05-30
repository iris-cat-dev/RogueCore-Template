#include "HitscanBaseUpgrade.h"
#include "Templates/SubclassOf.h"

UHitscanBaseUpgrade::UHitscanBaseUpgrade() {
    this->upgradeType = EHitScanBaseUpgradeType::MinimumVerticalSpread;
}

FUpgradeValues UHitscanBaseUpgrade::GetUpgradedValue(TSubclassOf<AItem> Item, AFSDPlayerState* Player, EHitScanBaseUpgradeType NewUpgradeType) {
    return FUpgradeValues{};
}


