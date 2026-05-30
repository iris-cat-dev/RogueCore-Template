#include "AbilityItemAnimInstance.h"

UAbilityItemAnimInstance::UAbilityItemAnimInstance() {
    this->IsEqupped = false;
    this->IsAbilityAvailable = false;
    this->Item = nullptr;
    this->ShowRoomIdleBreak = false;
}

void UAbilityItemAnimInstance::OnUnequipped() {
}

void UAbilityItemAnimInstance::OnEquipped() {
}

bool UAbilityItemAnimInstance::IsInShowRoom() const {
    return false;
}

bool UAbilityItemAnimInstance::EquippedAndAvailable() const {
    return false;
}


