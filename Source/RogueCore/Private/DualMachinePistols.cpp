#include "DualMachinePistols.h"

ADualMachinePistols::ADualMachinePistols(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->EmptyClipStatusEffect = nullptr;
}

void ADualMachinePistols::Server_TriggerStatusEffect_Implementation() {
}


