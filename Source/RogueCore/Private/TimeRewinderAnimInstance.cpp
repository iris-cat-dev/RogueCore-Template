#include "TimeRewinderAnimInstance.h"

UTimeRewinderAnimInstance::UTimeRewinderAnimInstance() {
    this->AngleShift = 6.00f;
    this->IdleAnimprogress = 0.00f;
    this->MinKnobIdleCooldown = 1.00f;
    this->MaxKnobIdleCooldown = 1.00f;
    this->RewindPointPlaced = false;
    this->IsMoving = false;
}

void UTimeRewinderAnimInstance::Tick() {
}


