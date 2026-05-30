#include "DamageParametersReport.h"

FDamageParametersReport::FDamageParametersReport() {
    this->DamageType = nullptr;
    this->Target = nullptr;
    this->Causer = nullptr;
    this->Instigator = nullptr;
    this->Location = FVector::ZeroVector;
}

