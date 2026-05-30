#include "ConditionalDamageModifierUpgrade.h"
#include "Templates/SubclassOf.h"

UConditionalDamageModifierUpgrade::UConditionalDamageModifierUpgrade() {
    this->Condition = nullptr;
}

FUpgradeValues UConditionalDamageModifierUpgrade::GetUpgradedValue(TSubclassOf<AActor> Item, AFSDPlayerState* Player) {
    return FUpgradeValues{};
}


