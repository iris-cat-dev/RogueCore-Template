#include "RockCrackedAnimInstance.h"

URockCrackedAnimInstance::URockCrackedAnimInstance() {
    this->Pod = nullptr;
    this->PodState = ERockCrackerstate::Init;
    this->IsActive = false;
    this->IsBroken = false;
}


