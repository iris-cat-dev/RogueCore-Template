#include "NetDamageInstance.h"

FNetDamageInstance::FNetDamageInstance() {
    this->ArmorPiercing = 0.00f;
    this->ArmorDamage = 0.00f;
    this->WeakpointMultiplier = 0.00f;
    this->Notify = false;
    this->ElementParams = FElementParams();
}

