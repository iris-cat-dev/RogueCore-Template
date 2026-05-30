#include "MicrowaveWeapon.h"
#include "CapsuleHitscanComponent.h"
#include "DamageComponent.h"

AMicrowaveWeapon::AMicrowaveWeapon(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->DamageComp = CreateDefaultSubobject<UDamageComponent>(TEXT("MicrowaveDamage"));
    this->CapsuleHitscanComp = CreateDefaultSubobject<UCapsuleHitscanComponent>(TEXT("CapsuleHitscanComponent"));
    this->FP_MuzzleParticle = nullptr;
    this->TP_MuzzleParticle = nullptr;
    this->ExplodingTargetsDamageComponent = CreateDefaultSubobject<UDamageComponent>(TEXT("ExplodingTargetsDamage"));
    this->RadiantSuperheaterHeat = CreateDefaultSubobject<UDamageComponent>(TEXT("RadiantSuperheaterHeat"));
    this->RadiantSuperheaterFrostShock = CreateDefaultSubobject<UDamageComponent>(TEXT("RadiantSuperheaterFrostShock"));
    this->SwitchTime = 0.15f;
    this->GammaContaminationSTE = nullptr;
    this->GammaContaminationZoneSTE = nullptr;
    this->GammaContaminationRange = 300.00f;
    this->ExplodableBlisterClass = nullptr;
    this->BlisteringNecrosisChance = 0.10f;
    this->MinTimeBetweenBlisteringNecrosis = 0.10f;
    this->FireEffect = nullptr;
    this->NeuroToSpread = nullptr;
    this->SlowEffect = nullptr;
    this->ImpactParticleEnemies = nullptr;
    this->ImpactParticleTerrain = nullptr;
    this->NeuroSpreadParticles = nullptr;
    this->P_NeuroSpreadParticles = nullptr;
    this->NeuroSpreadSound = nullptr;
    this->MicrowaveMuzzle = nullptr;
    this->MuzzleComp = nullptr;
    this->WeaponRange = 1000.00f;
    this->ShotWidth = 300.00f;
    this->DamageInterval = 1.00f;
    this->KilledTargetsExplosionChance = 0.00f;
    this->ExplosionOCSystem = nullptr;
    this->NeuroSpreadRadius = 200.00f;
    this->TemperatureAmplification = 0.00f;
    this->RadiantSuperheaterActive = false;
    this->RadiantSuperheaterFrostShockChance = 0.50f;
    this->RadiantSuperheaterHeatShockChance = 0.50f;
    this->RadiantSuperheaterMinColdDamage = 50.00f;
    this->RadiantSuperheaterMinHeatDamage = 50.00f;
    this->RadiantSuperheaterFrostTransferFactor = 0.50f;
    this->RadiantSuperheaterHeatTransferFactor = 0.50f;
    this->ColdTempAmpMultiplier = 1.50f;
    this->SlowOnHit = false;
    this->HeatSink = nullptr;
}

void AMicrowaveWeapon::UpdateMuzzleAnim(bool InIsFiring) {
}

void AMicrowaveWeapon::SpawnExplosiveBoil(UPrimitiveComponent* Target, const FMultiHitscanHit& Hit) {
}

void AMicrowaveWeapon::ShowBoilerRayExplosion_Server_Implementation(FVector_NetQuantize Location, FRotator Rotation) {
}

void AMicrowaveWeapon::ShowBoilerRayExplosion_Implementation(FVector_NetQuantize Location, FRotator Rotation) {
}

void AMicrowaveWeapon::Server_SetLensePower_Implementation(float lensepower) {
}

void AMicrowaveWeapon::OnTargetKilled(AActor* Target, UFSDPhysicalMaterial* PhysMat, bool wasDirectHit) {
}

void AMicrowaveWeapon::OnShowHitEffect(const FVector& ImpactPoint, const FVector& ImpactNormal, bool hitEnemy) {
}

void AMicrowaveWeapon::OnServerHitscanHit(const FMultiHitScanHits& Hits) {
}

void AMicrowaveWeapon::OnRadiantSuperHeaterAoe() {
}

void AMicrowaveWeapon::OnPushedDamageEffect(UHealthComponentBase* healthComp) {
}


void AMicrowaveWeapon::EndCharacterOverheatAnim() {
}

void AMicrowaveWeapon::All_ShowNeuroSpread_Implementation(const FVector& Location) {
}


