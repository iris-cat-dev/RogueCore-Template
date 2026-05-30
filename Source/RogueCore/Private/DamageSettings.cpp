#include "DamageSettings.h"

UDamageSettings::UDamageSettings() {
    this->TemperatureChangePerColdDamagePoint = -5.00f;
    this->TemperatureChangePerIceDamagePoint = -2.00f;
    this->TemperatureChangePerHeatDamagePoint = 5.00f;
    this->TemperatureChangePerFireDamagePoint = 2.00f;
    this->TemperatureShockActivationWindow = 10.00f;
    this->FrozenDamageBonus = 3.00f;
    this->EnemyOnFireStatusEffect = nullptr;
    this->PlayerOnFireStatusEffect = nullptr;
    this->TemperatureShockFromFrozenStatusEffect = nullptr;
    this->TemperatureShockFromBurningStatusEffect = nullptr;
    this->InfectionPerDamagePoint = 0.00f;
    this->ArmorShatterDamage = nullptr;
    this->ChemicalExplosionDamage = nullptr;
    this->ArmorShatterEmitter = nullptr;
    this->ArmorShatterSound = nullptr;
    this->ImpactDecals.AddDefaulted(3);
    this->RadialHealthArmorDamageFalloff = 0.25f;
    this->HealthArmorBonesAffectedByRadialDamage = 4;
    this->DetonateFrozen = nullptr;
    this->DetonateOnFire = nullptr;
    this->DirectHit = nullptr;
    this->MeltTarget = nullptr;
    this->CookTarget = nullptr;
    this->GibTarget = nullptr;
    this->ExplodeOnDeath = nullptr;
    this->IgnoreBodypartDamageReduction = nullptr;
    this->DefaultDamageImpulse = nullptr;
    this->DoTDamageImpulse = nullptr;
    this->RagdollGlobalForceMultiplier = 8000.00f;
}


