#include "LoadoutCopy.h"

FLoadoutCopy::FLoadoutCopy() {
    this->ItemLoadout = FItemLoadout();
    this->UpgradeLoadout = FUpgradeLoadout();
    this->PerkLoadout = FCharacterEnhancementsSave();
    this->VanityLoadout = FCharacterVanityLoadout();
}

