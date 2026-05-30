#include "Bosco.h"
#include "Components/AudioComponent.h"
#include "Components/PointLightComponent.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=SkeletalMeshComponent -FallbackName=SkeletalMeshComponent
#include "Components/SpotLightComponent.h"
#include "NiagaraComponent.h"
#include "BobbingComponent.h"
#include "BoscoAbillityComponent.h"
#include "DroneMiningToolBase.h"
#include "DroneSkinnableComponent.h"
#include "HealthComponent.h"
#include "HitscanComponent.h"
#include "Net/UnrealNetwork.h"
#include "UpgradableBoscoComponent.h"

ABosco::ABosco(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->HealthComponent = CreateDefaultSubobject<UHealthComponent>(TEXT("HealthComponent"));
    this->PrimaryAbility = CreateDefaultSubobject<UBoscoAbillityComponent>(TEXT("PrimaryAbility"));
    this->SecondaryAbility = CreateDefaultSubobject<UBoscoAbillityComponent>(TEXT("SecondaryAbility"));
    this->MiningTool = CreateDefaultSubobject<UDroneMiningToolBase>(TEXT("MiningTool"));
    this->BobbingComponent = CreateDefaultSubobject<UBobbingComponent>(TEXT("BobbingComponent"));
    this->BoscoMesh = CreateDefaultSubobject<USkeletalMeshComponent>(TEXT("BoscoMesh"));
    this->DroneHitScan = CreateDefaultSubobject<UHitscanComponent>(TEXT("BoscoHitscan"));
    this->SpotLightComponent = CreateDefaultSubobject<USpotLightComponent>(TEXT("SpotLightComponent"));
    this->PointLightComponent = CreateDefaultSubobject<UPointLightComponent>(TEXT("PointLightComponent"));
    this->LTrailNS = CreateDefaultSubobject<UNiagaraComponent>(TEXT("LTrailNS"));
    this->RTrailNS = CreateDefaultSubobject<UNiagaraComponent>(TEXT("RTrailNS"));
    this->MomentumSound = CreateDefaultSubobject<UAudioComponent>(TEXT("MomentumAudio"));
    this->DefendDrilldozerShout = nullptr;
    this->DefendGenericShout = nullptr;
    this->MineOrderShout = nullptr;
    this->KillOrderShout = nullptr;
    this->GoToOrderShout = nullptr;
    this->ReviveOrderShout = nullptr;
    this->PickupGemShout = nullptr;
    this->ReviveThankShout = nullptr;
    this->GeneralCallShout = nullptr;
    this->VacuumShout = nullptr;
    this->MiningFinishedSound = nullptr;
    this->MineResponse = nullptr;
    this->CombatResponse = nullptr;
    this->LightResponse = nullptr;
    this->ReviveResponse = nullptr;
    this->AbillityResponse = nullptr;
    this->CurrentResponse = nullptr;
    this->ResponseTime = 0.00f;
    this->ShouldSelfDestructOnMultiplePlayers = true;
    this->SeeTargetTime = 0.50f;
    this->AbillityErrorSound = nullptr;
    this->IncreasedMiningArea = 15.00f;
    this->MiningAnimationRate = 1.00f;
    this->TimeToResetMiningBoost = 3.00f;
    this->MiningBoosMultiplier = 7.00f;
    this->RocketAbillity = nullptr;
    this->CryoGrenadeAbillity = nullptr;
    this->ItemID = nullptr;
    this->Upgradable = CreateDefaultSubobject<UUpgradableBoscoComponent>(TEXT("Upgradable"));
    this->SaluteAnimation = nullptr;
    this->PickupGemAnimation = nullptr;
    this->DropGemAnimation = nullptr;
    this->SaluteDuration = 0.00f;
    this->Skinnable = CreateDefaultSubobject<UDroneSkinnableComponent>(TEXT("Skinnable"));
    this->TargetLightSetting = 0;
    this->RotateTarget = nullptr;
    this->ShootSound = nullptr;
    this->ShootSoundFadeout = 0.20f;
    this->ShootSoundTail = nullptr;
    this->ShootSoundInstance = nullptr;
    this->MuzzleEffect = nullptr;
    this->TracerEffect = nullptr;
    this->FireRate = 0.00f;
    this->MinShotsInBurst = 0;
    this->MaxShotsInBurst = 0;
    this->MaxRandomBurstCooldown = 0.00f;
    this->MinRandomBurstCooldown = 0.00f;
    this->MaxFiringAngle = 0.00f;
    this->MaxEngagementRange = 0.00f;
    this->MinTracerDistance = 100.00f;
    this->TracerSpeed = 10000.00f;
    this->ReviveSirens = nullptr;
    this->DistanceToFacePlayer = 0.00f;
    this->RotationSpeed = 0.00f;
    this->PrepareToMineRange = 0.00f;
    this->MiningRange = 0.00f;
    this->MaxRevives = 0;
    this->IsFiring = false;
    this->IsInRangeToMine = false;
    this->IsPreparedToMine = false;
    this->IsMining = false;
    this->IsReviving = false;
    this->IsRotateMode = false;
    this->DroneController = nullptr;
    this->CurrentState = EDroneAIState::Follow;
    this->BobbingComponent->SetupAttachment(RootComponent);
    this->BoscoMesh->SetupAttachment(BobbingComponent);
    this->LTrailNS->SetupAttachment(BoscoMesh);
    this->MomentumSound->SetupAttachment(BoscoMesh);
    this->PointLightComponent->SetupAttachment(BoscoMesh);
    this->RTrailNS->SetupAttachment(BoscoMesh);
    this->SpotLightComponent->SetupAttachment(BoscoMesh);
}

void ABosco::UsePlayerActivatedAbillity(EAbilityIndex Index, AActor* aTarget, const FVector& aLocation) {
}

void ABosco::UseABillity() {
}

void ABosco::StopShootingSound_Implementation() {
}


void ABosco::StartSelfDestruct() {
}

void ABosco::SetIsReviving(bool aIsReviving) {
}

void ABosco::SetIsRepairing(bool isRepairing) {
}


void ABosco::ReviveCounterChanged(int32 remainingCharges) {
}

void ABosco::Respond() {
}

void ABosco::PlaySalute_Implementation() {
}

void ABosco::OnWeaponFired(const FVector& Location) {
}

void ABosco::OnTargetBurrowChange(bool burrowed) {
}

void ABosco::OnRep_State(EDroneAIState prevState) {
}

void ABosco::OnReadyToShoot() {
}

void ABosco::OnNotReadyToShoot() {
}

void ABosco::OnHit(float Amount, float BaseAmount, const FDamageData& DamageData) {
}

void ABosco::OnGrabbedGem() {
}

void ABosco::MineEffects_Implementation(UTerrainMaterial* aTerrainMaterial, FVector_NetQuantize aLocation, FRotator aRotation) {
}

UUpgradableBoscoComponent* ABosco::GetUpgradeComponent() {
    return NULL;
}

TArray<FBXEUnlockInstance> ABosco::GetUnlocks() const {
    return TArray<FBXEUnlockInstance>();
}

int32 ABosco::GetReviveCharges() const {
    return 0;
}

UBoscoAbillityComponent* ABosco::GetPlayerAbillity() const {
    return NULL;
}

EDroneAIState ABosco::GetCurrentState() const {
    return EDroneAIState::Follow;
}

bool ABosco::GetCarryInterrupted() const {
    return false;
}

bool ABosco::DoPickupGemAnimation() {
    return false;
}

void ABosco::All_OnSelfDestruct_Implementation() {
}

void ABosco::AddReviveCharges(int32 charges) {
}

void ABosco::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const {
    Super::GetLifetimeReplicatedProps(OutLifetimeProps);
    
    DOREPLIFETIME(ABosco, RotateTarget);
    DOREPLIFETIME(ABosco, LookAtLocation);
    DOREPLIFETIME(ABosco, IsFiring);
    DOREPLIFETIME(ABosco, IsInRangeToMine);
    DOREPLIFETIME(ABosco, IsPreparedToMine);
    DOREPLIFETIME(ABosco, IsMining);
    DOREPLIFETIME(ABosco, IsReviving);
    DOREPLIFETIME(ABosco, IsRotateMode);
    DOREPLIFETIME(ABosco, CurrentState);
}


