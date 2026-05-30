#include "CryoSprayAnimInstance.h"

UCryoSprayAnimInstance::UCryoSprayAnimInstance() {
    this->Weapon = nullptr;
    this->IsFiring = false;
    this->ChargeProgress = 0.00f;
    this->ChargeBlend = 0.00f;
    this->Pressure = 0.00f;
}


