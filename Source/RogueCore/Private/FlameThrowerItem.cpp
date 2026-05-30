#include "FlameThrowerItem.h"
#include "BasicWeaponFireComponent.h"
#include "DamageComponent.h"
#include "MotionAudioController.h"
#include "ProjectileLauncherComponent.h"
#include "StickyFlameSpawner.h"

AFlameThrowerItem::AFlameThrowerItem(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->WeaponFire = CreateDefaultSubobject<UBasicWeaponFireComponent>(TEXT("WeaponFire"));
    this->FlameParticleComponent = nullptr;
    this->DamageComponent = CreateDefaultSubobject<UDamageComponent>(TEXT("Damage"));
    this->StickyFlames = CreateDefaultSubobject<UStickyFlameSpawner>(TEXT("StickyFlames"));
    this->AoEHeatDamageComponent = CreateDefaultSubobject<UDamageComponent>(TEXT("AoEHeatDamage"));
    this->ExplodingTargetsDamageComponent = CreateDefaultSubobject<UDamageComponent>(TEXT("ExplodingTargetsDamage"));
    this->MotionAudio = CreateDefaultSubobject<UMotionAudioController>(TEXT("MotionAudio"));
    this->ShotCostProjectile = 10;
    this->DecalDelay = 0.20f;
    this->CurrentDecalDelay = 0.00f;
    this->ImpactParticles = nullptr;
    this->ImpactParticleInstance = nullptr;
    this->FP_LongReachParticles = nullptr;
    this->TP_LongReachParticles = nullptr;
    this->VeryLongReachThreshold = 2000.00f;
    this->FP_VeryLongReachParticles = nullptr;
    this->TP_VeryLongReachParticles = nullptr;
    this->DamageSphereRadius = 25.00f;
    this->MaxFlameDistance = 5000.00f;
    this->FlameGrowthPerSecond = 1000.00f;
    this->FlameEndPointResponsiveness = 0.25f;
    this->FlameIntensityPerSecond = 1.00f;
    this->OnFireStatusEffect = nullptr;
    this->ChanceToFleeOnDamage = 0.00f;
    this->MeltPointRadius = 40.00f;
    this->MeltPointBuildTime = 0.10f;
    this->MeltCarveTime = 1.00f;
    this->MeltSteamParticle = nullptr;
    this->LongReachEnabled = false;
    this->AoEHeatEnabled = false;
    this->KilledTargetsExplosionChance = 0.00f;
    this->ShowDamageParticle = 1.00f;
    this->DamangeTargetsParticles = nullptr;
    this->KilledTargetsExplodingParticles = nullptr;
    this->KilledTargetsExplodingSound = nullptr;
    this->ProjectileLancher = CreateDefaultSubobject<UProjectileLauncherComponent>(TEXT("projectileLauncher"));
    this->MotionAudio->SetupAttachment(FPMesh);
}

void AFlameThrowerItem::TriggerAoEHeat() {
}

void AFlameThrowerItem::ServerMeltIce_Implementation(const TArray<FVector>& meltPoints) {
}

void AFlameThrowerItem::ServerDoDamage_Implementation(FVector_NetQuantize Start, FVector_NetQuantize End) {
}

void AFlameThrowerItem::OnTargetKilled(AActor* Target, UFSDPhysicalMaterial* PhysMat, bool wasDirectHit) {
}

void AFlameThrowerItem::OnTargetDamaged(UHealthComponentBase* Health, float Amount, UPrimitiveComponent* HitComponent, UFSDPhysicalMaterial* PhysicalMaterial) {
}

void AFlameThrowerItem::All_ShowTargetBurstIntoFire_Implementation(FVector_NetQuantize Location, FRotator Rotation) {
}

void AFlameThrowerItem::All_FlameFeedback_Implementation(FVector_NetQuantize Location, FRotator Rotation) {
}


