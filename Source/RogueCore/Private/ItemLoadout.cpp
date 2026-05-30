#include "ItemLoadout.h"

FItemLoadout::FItemLoadout() {
    this->IconIndex = 0;
    this->DebugSource = FString();
    this->PrimaryWeapon = FGuid();
    this->SecondaryWeapon = FGuid();
    this->TraversalTool = FGuid();
    this->ClassTool = FGuid();
    this->Armor = FGuid();
    this->Flare = FGuid();
    this->MiningTool = FGuid();
    this->Grenade = FGuid();
}

