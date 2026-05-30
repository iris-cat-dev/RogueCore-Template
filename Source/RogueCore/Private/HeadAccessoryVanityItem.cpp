#include "HeadAccessoryVanityItem.h"

UHeadAccessoryVanityItem::UHeadAccessoryVanityItem() {
    this->HeadVanityType = EHeadVanityType::HairOnly;
    this->HideEyebrows = false;
    this->HideSideburns = false;
    this->HideMoustache = false;
    this->HideBeard = false;
    this->HideAll = false;
    this->RequiresSlimArmor = false;
    this->HideHead = false;
    this->HeadMesh = ECharacterHeadMesh::Full;
}


