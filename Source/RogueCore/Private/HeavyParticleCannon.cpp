#include "HeavyParticleCannon.h"
#include "NiagaraComponent.h"
#include "DamageComponent.h"
#include "FirstPersonNiagaraComponent.h"
#include "Net/UnrealNetwork.h"
#include "ReflectionHitscanComponent.h"
#include "StickyFlameSpawner.h"

AHeavyParticleCannon::AHeavyParticleCannon(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->Damage = CreateDefaultSubobject<UDamageComponent>(TEXT("Damage"));
    this->HitscanComponent = CreateDefaultSubobject<UReflectionHitscanComponent>(TEXT("ReflectionHitscanComponent"));
    this->StickyFlamesSpawner = CreateDefaultSubobject<UStickyFlameSpawner>(TEXT("StickyFlames"));
    this->FirstPersonBeam = CreateDefaultSubobject<UFirstPersonNiagaraComponent>(TEXT("FirstPersonBeam"));
    this->FirstPersonLaserSight = CreateDefaultSubobject<UFirstPersonNiagaraComponent>(TEXT("FirstPersonLaserSight"));
    this->ThirdPersonBeam = CreateDefaultSubobject<UNiagaraComponent>(TEXT("ThirdPersonBeam"));
    this->BeamHitLocationGenericSound = nullptr;
    this->BeamHitLocationEnemySound = nullptr;
    this->BeamHitLocationEnemy_Local_Sound = nullptr;
    this->BeamHitSoundFadeSwitchTime = 0.10f;
    this->BeamHitLocationTailSound = nullptr;
    this->BoosterModuleActivated = nullptr;
    this->ReflectedBeam = nullptr;
    this->ReflectedBeam_PhotoSensitive = nullptr;
    this->ReflectedLaserSight = nullptr;
    this->ImpactParticle = nullptr;
    this->ImpactParticle_PhotoSensitive = nullptr;
    this->ProjectionModuleParticle = nullptr;
    this->ImpactParticleComp = nullptr;
    this->bReloadOnButtonRelease = false;
    this->MinTimeBetweenBiomassGain = 0.25f;
    this->BulkyBeam = false;
    this->NormalBeamWidth = 3.00f;
    this->BulkyBeamWidth = 6.00f;
    this->ExtraRadialDamagePerSec = 0.00f;
    this->ExtraRadialRangePerSec = 0.00f;
    this->CancelCostPercentage = 0.20f;
    this->ChargeupTime = 0.10f;
    this->StartChargeSound = nullptr;
    this->IsNewDecalBeam = true;
    this->ProjectionModuleDamage = 0.00f;
    this->PlatformTerrainType = nullptr;
    this->BoostActive = false;
    this->bReloadBoostsBeam = false;
    this->ExtraReloadTimeAfterBoost = 1.00f;
    this->BoostExtraAmmoCost = 2.00f;
    this->BeamDependentReloadDuration = 0.00f;
    this->bIsBeamActive = false;
    this->FirstPersonBeam->SetupAttachment(FPMesh);
    this->FirstPersonLaserSight->SetupAttachment(FPMesh);
    this->ThirdPersonBeam->SetupAttachment(TPMesh);
}

void AHeavyParticleCannon::UpdateBeamsVisibility_Implementation(bool isBeamVisible) {
}

void AHeavyParticleCannon::UpdateBeam(const FReflectionTraceResult& Path) {
}

void AHeavyParticleCannon::ServerSetBoostActive_Implementation(bool NewActive) {
}

void AHeavyParticleCannon::Server_SetBeamActive_Implementation(bool inIsBeamActive) {
}


void AHeavyParticleCannon::OnTargetKilled(AActor* Target, UFSDPhysicalMaterial* PhysMat, bool wasDirectHit) {
}

void AHeavyParticleCannon::OnRep_BoostActive() {
}

void AHeavyParticleCannon::OnRep_bIsBeamActive() {
}


void AHeavyParticleCannon::Client_AddAmmoOnKill_Implementation() {
}

void AHeavyParticleCannon::ChargeUpComplete() {
}


void AHeavyParticleCannon::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const {
    Super::GetLifetimeReplicatedProps(OutLifetimeProps);
    
    DOREPLIFETIME(AHeavyParticleCannon, BoostActive);
    DOREPLIFETIME(AHeavyParticleCannon, bIsBeamActive);
}


