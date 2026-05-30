#include "DoubleDrillItem.h"
#include "DamageComponent.h"
#include "DoubleDrillAggregator.h"
#include "FSDAudioComponent.h"
#include "FirstPersonNiagaraComponent.h"
#include "Net/UnrealNetwork.h"
#include "WeaponTagContainerComponent.h"

ADoubleDrillItem::ADoubleDrillItem(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->FP_Left_DrillParticlesNS = CreateDefaultSubobject<UFirstPersonNiagaraComponent>(TEXT("FP_Left_DrillParticlesNS"));
    this->FP_Right_DrillParticlesNS = CreateDefaultSubobject<UFirstPersonNiagaraComponent>(TEXT("FP_Right_DrillParticlesNS"));
    this->DamageComponent = CreateDefaultSubobject<UDamageComponent>(TEXT("Damage"));
    this->WeaponTags = CreateDefaultSubobject<UWeaponTagContainerComponent>(TEXT("WeaponTagComp"));
    this->AudioComponent = CreateDefaultSubobject<UFSDAudioComponent>(TEXT("Audio"));
    this->Aggregator = CreateDefaultSubobject<UDoubleDrillAggregator>(TEXT("Aggregator"));
    this->FPMineMontage = nullptr;
    this->TPMineMontage = nullptr;
    this->FPOverheat = nullptr;
    this->TPOverheat = nullptr;
    this->FPGunsling = nullptr;
    this->TPGunsling = nullptr;
    this->Damage = nullptr;
    this->DrillParticles = nullptr;
    this->DrillRumble = nullptr;
    this->BlockParticlesScaleFP = 1.00f;
    this->BlockParticlesScaleTP = 1.00f;
    this->State = EDoubleDrillState::Equipping;
    this->MovementPenalty = 0.70f;
    this->MiningRate = 0.00f;
    this->HeatReductionPerKill = 0.00f;
    this->CarveNoise = 0.10f;
    this->CarverRayCastLength = 200.00f;
    this->CarveTerrainDistanceCheck = 2.00f;
    this->TimeToNextMine = 0.00f;
    this->CurrentDrillSpeed = 0.00f;
    this->DamageDistance = 150.00f;
    this->DamageRadius = 50.00f;
    this->FriendlyDamageRadius = 20.00f;
    this->DamageRate = 3.00f;
    this->armorDamageMultiplier = 1.00f;
    this->DamageClass = nullptr;
    this->FriendlyFireModifier = 0.10f;
    this->MaxFuel = 0.00f;
    this->Fuel = 0.00f;
    this->FuelUsePerDig = 0.25f;
    this->FuelUsePerMelee = 0.15f;
    this->SupplyStatusWeight = 1.00f;
    this->ShoutOutOfFuel = nullptr;
    this->DrillParticlesDuration = 0.25f;
    this->IsMining = false;
    this->IsGunslinging = false;
    this->AudioComponent->SetupAttachment(RootComponent);
    this->FP_Left_DrillParticlesNS->SetupAttachment(FPLMesh);
    this->FP_Right_DrillParticlesNS->SetupAttachment(FPRMesh);
}

void ADoubleDrillItem::Server_StopMining_Implementation() {
}

void ADoubleDrillItem::Server_StartMining_Implementation() {
}

void ADoubleDrillItem::Server_DoDamage_Implementation(const TArray<FDoubleDrillDamageItem>& Targets) {
}

void ADoubleDrillItem::Server_DigBlock_Implementation(FVector_NetQuantize Start, FVector_NetQuantize End) {
}

void ADoubleDrillItem::ResupplyAmount(float Amount) {
}

void ADoubleDrillItem::OnTargetKilled(AActor* Target, UFSDPhysicalMaterial* PhysMat, bool wasDirectHit) {
}



void ADoubleDrillItem::OnRep_SimulatingMining() {
}

void ADoubleDrillItem::OnRep_IsGunslinging() {
}

void ADoubleDrillItem::OnDrillParticlesTimerElapsed() {
}

void ADoubleDrillItem::OnCharacterStatsChanged(UPawnStat* Stat) {
}

void ADoubleDrillItem::Client_SetAmmoScalePercent_Implementation(float Percent) {
}

void ADoubleDrillItem::Client_ResupplyAmount_Implementation(float Amount) {
}

void ADoubleDrillItem::Client_Resupply_Implementation(float percentage) {
}


void ADoubleDrillItem::All_SimulateDigDebris_Implementation(FVector_NetQuantize position, int32 DebrisIndex) {
}

void ADoubleDrillItem::All_SimulateDigBlock_Implementation(FVector_NetQuantize position, bool spawnParticles, int32 Material) {
}

void ADoubleDrillItem::All_SimulateDamage_Implementation(const TArray<FDoubleDrillDamageItem>& Targets) {
}

void ADoubleDrillItem::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const {
    Super::GetLifetimeReplicatedProps(OutLifetimeProps);
    
    DOREPLIFETIME(ADoubleDrillItem, IsMining);
    DOREPLIFETIME(ADoubleDrillItem, IsGunslinging);
}


