#include "StandardItemUpgrade.h"

UStandardItemUpgrade::UStandardItemUpgrade() {
    this->Amount = 0.00f;
    this->DisplayTransform = EItemUpgradeNumberTransformType::None;
    this->IsPercentage = false;
    this->AlwaysRoundValueUp = false;
}


