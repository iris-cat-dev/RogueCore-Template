#include "PushSatusEffectDamageBonusUpgrade.h"
#include "Templates/SubclassOf.h"

UPushSatusEffectDamageBonusUpgrade::UPushSatusEffectDamageBonusUpgrade() {
    this->StatusEffect = nullptr;
    this->Chance = 0.00f;
    this->IgnoreArmorHit = false;
    this->Condition = nullptr;
}

FUpgradeValues UPushSatusEffectDamageBonusUpgrade::GetUpgradedValue(TSubclassOf<AActor> Item, AFSDPlayerState* Player, TSubclassOf<UStatusEffect> NewStatusEffect) {
    return FUpgradeValues{};
}


