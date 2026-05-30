#include "NetRadialDamageInstance.h"

FNetRadialDamageInstance::FNetRadialDamageInstance() {
    this->Target = nullptr;
    this->ArmorPiercing = 0.00f;
    this->ArmorDamage = 0.00f;
    this->Location = FVector::ZeroVector;
    this->ElementParams = FElementParams();
}

