#include "ExpeniteProcessingMachineAnimInstance.h"

UExpeniteProcessingMachineAnimInstance::UExpeniteProcessingMachineAnimInstance() {
    this->ExpenitePotZOffset = 0.00f;
    this->ExpenitePotScale = 1.00f;
    this->ShrinkCurve = nullptr;
    this->ShouldStartShrinking = false;
}

void UExpeniteProcessingMachineAnimInstance::SetMaxTime(const float Time) {
}


