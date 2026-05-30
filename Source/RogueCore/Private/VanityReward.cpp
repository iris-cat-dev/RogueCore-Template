#include "VanityReward.h"

UVanityReward::UVanityReward() {
    this->VanityItem = nullptr;
    this->UnlockedPerClass = true;
    this->UsePerClassVanityItems = false;
    this->OptionalCharacterID = nullptr;
}

UVanityItem* UVanityReward::GetVanityItem(const UPlayerCharacterID* InPlayerCharacterID) const {
    return NULL;
}


