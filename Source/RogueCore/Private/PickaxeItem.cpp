#include "PickaxeItem.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=SceneComponent -FallbackName=SceneComponent
#include "Net/UnrealNetwork.h"
#include "WeaponTagContainerComponent.h"

APickaxeItem::APickaxeItem(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->RootComponent = CreateDefaultSubobject<USceneComponent>(TEXT("Root"));
    this->CameraShakeOnStartUsing = true;
    this->QuadDamageCarving = false;
    this->FP_Root = CreateDefaultSubobject<USceneComponent>(TEXT("FP_Root"));
    this->TP_Root = CreateDefaultSubobject<USceneComponent>(TEXT("TP_Root"));
    this->FP_Scale = CreateDefaultSubobject<USceneComponent>(TEXT("FP_Scale"));
    this->TP_Scale = CreateDefaultSubobject<USceneComponent>(TEXT("TP_Scale"));
    this->FPAnimInstance = nullptr;
    this->TPAnimInstance = nullptr;
    this->FP_EquipAnimation = nullptr;
    this->TP_EquipAnimation = nullptr;
    this->EquipDuration = 0.25f;
    this->CharacterAnimationSet = nullptr;
    this->WeaponTags = CreateDefaultSubobject<UWeaponTagContainerComponent>(TEXT("WeaponTagsComponent"));
    this->SpecialCooldown = 30.00f;
    this->SpecialCooldownRemaining = 0.00f;
    this->RockMiningBonus = 0;
    this->DirtMiningBonus = 0;
    this->DamageRange = 200.00f;
    this->ExtraDamageRangeForAnimation = 50.00f;
    this->MiningRange = 300.00f;
    this->DamageRadius = 50.00f;
    this->OnDamageEnemySlowdownEffect = nullptr;
    this->AttackExcertionShout = nullptr;
    this->AttackHitSound = nullptr;
    this->MiningSound = nullptr;
    this->MineRumble = nullptr;
    this->PartialMineRumble = nullptr;
    this->DamageRumble = nullptr;
    this->HitDamage = nullptr;
    this->SpecialDamage = nullptr;
    this->GeneralImpactAudioVolume = 1.00f;
    this->HitCooldown = 1.00f;
    this->MiningDuration = 1.00f;
    this->DistanceConsideredSameHit = 50.00f;
    this->BlockParticlesScaleFP = 1.00f;
    this->BlockParticlesScaleTP = 1.00f;
    this->State = EPickaxeState::Equipping;
    this->PowerAttackRefreshedSound = nullptr;
    this->PreventQMining = true;
    this->QMiningExpectedDelay = 0.67f;
    this->QMiningInitialDelay = 0.45f;
    this->QMiningReducedPlayRatePct = 1.00f;
    this->QMiningLastHitTime = 0.00f;
    this->CanBezerk = false;
    this->BezerkStatusEffect = nullptr;
    this->PowerAttackEnabled = true;
    this->EquippedMaterial = nullptr;
    this->FP_Root->SetupAttachment(RootComponent);
    this->FP_Scale->SetupAttachment(FP_Root);
    this->TP_Root->SetupAttachment(RootComponent);
    this->TP_Scale->SetupAttachment(TP_Root);
}


void APickaxeItem::SetSpecialCoolDownDurationRemaining(float newCooldownRemaining) {
}

void APickaxeItem::SetSpecialCoolDownDuration(float newCooldownDuration) {
}

void APickaxeItem::Server_TriggerBezerk_Implementation() {
}

void APickaxeItem::Server_SetState_Implementation(EPickaxeState NewState) {
}

void APickaxeItem::Server_RemoveDebrisInstance_Implementation(FVector_NetQuantize HitPos, int32 DebrisIndex, int32 remappedIndex) {
}

void APickaxeItem::Server_HitBlock_Implementation(FVector_NetQuantize position, int32 Material, bool removeDebris, bool isSpecial) {
}

void APickaxeItem::Server_DoPowerAttack_Implementation() {
}

void APickaxeItem::Server_DigBlock_Implementation(FVector carvePos, FVector carveDirection, int32 TerrainMaterial, bool isSpecial) {
}

void APickaxeItem::Server_DamageTarget_Implementation(UPrimitiveComponent* TargetComponent, bool isSpecial, const FVector_NetQuantize& ImpactPoint, const FVector_NetQuantizeNormal& ImpactNormal, UFSDPhysicalMaterial* PhysMaterial, uint8 BoneIndex) {
}

void APickaxeItem::RefreshSpecialCooldown() {
}

void APickaxeItem::OnSpecialHitTarget(UHealthComponentBase* Health, float Amount, UPrimitiveComponent* Component, UFSDPhysicalMaterial* PhysicalMaterial) {
}

void APickaxeItem::OnRep_State(EPickaxeState oldState) {
}

void APickaxeItem::OnLoadoutChanged() {
}

float APickaxeItem::GetSpecialCooldownRemaining() const {
    return 0.0f;
}

float APickaxeItem::GetSpecialCooldownProgress() const {
    return 0.0f;
}

float APickaxeItem::GetSpecialCoolDownDuration() const {
    return 0.0f;
}

void APickaxeItem::DecreaseSpecialCooldownDurationRemaining_Percent(float InPercent) {
}

void APickaxeItem::Client_SetSpecialCoolDownDurationRemaining_Implementation(float newCooldownRemaining) {
}

void APickaxeItem::Client_SetSpecialCoolDownDuration_Implementation(float newCooldownDuration) {
}

void APickaxeItem::Client_EnemyKilledWithPowerAttack_Implementation() {
}

void APickaxeItem::Client_DecreaseSpecialCooldownDurationRemaining_Percent_Implementation(float InPercent) {
}

void APickaxeItem::All_SimulateHitBlock_Implementation(FVector_NetQuantize position, int32 materia, bool removeDebris, bool isSpecial) {
}

void APickaxeItem::All_SimulateDigDebris_Implementation(FVector_NetQuantize position, UFXSystemAsset* Particles, USoundCue* cue) {
}

void APickaxeItem::All_SimulateDigBlock_Implementation(FVector_NetQuantize position, bool spawnParticles, int32 Material, float Density, bool isSpecial) {
}

void APickaxeItem::All_SimulateDamageTarget_Implementation(UPrimitiveComponent* TargetComponent, bool isSpecial, const FVector_NetQuantize& ImpactPoint, const FVector_NetQuantizeNormal& ImpactNormal, UFSDPhysicalMaterial* PhysMaterial, uint8 BoneIndex) {
}

void APickaxeItem::All_DoPowerAttack_Implementation() {
}

void APickaxeItem::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const {
    Super::GetLifetimeReplicatedProps(OutLifetimeProps);
    
    DOREPLIFETIME(APickaxeItem, State);
}


