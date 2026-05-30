#include "PrimaryMutator.h"

UPrimaryMutator::UPrimaryMutator() {
    this->StageLogic = nullptr;
    this->HazardBonus = 0.00f;
    this->ShowInUserInterface = true;
    this->Icon = nullptr;
    this->CompletionStat = nullptr;
}

TArray<URiskVector*> UPrimaryMutator::GetRiskVectors() {
    return TArray<URiskVector*>();
}

TArray<UMutator*> UPrimaryMutator::GetMutators() {
    return TArray<UMutator*>();
}


