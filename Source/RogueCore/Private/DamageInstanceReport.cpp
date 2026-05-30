#include "DamageInstanceReport.h"

FDamageInstanceReport::FDamageInstanceReport() {
    this->DamageType = nullptr;
    this->Damage = 0.00f;
    this->Method = EDamageMethod::Direct;
    this->Radius = 0.00f;
}

