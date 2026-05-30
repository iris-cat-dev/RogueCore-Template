#include "PerkState.h"

FPerkState::FPerkState() {
    this->Perk = nullptr;
    this->IsBlocked = false;
    this->UseCount = 0;
    this->MaxUses = 0;
    this->LastUseTime = 0.00f;
    this->CoolDown = 0.00f;
}

