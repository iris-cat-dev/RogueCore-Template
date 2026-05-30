#include "RiftCrystal.h"
#include "Components/AudioComponent.h"
#include "Components/CapsuleComponent.h"
#include "Components/PointLightComponent.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=SceneComponent -FallbackName=SceneComponent
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=SkeletalMeshComponent -FallbackName=SkeletalMeshComponent
#include "NiagaraComponent.h"
#include "DamageComponent.h"
#include "EnemyComponent.h"
#include "EnemyHealthComponent.h"
#include "MeshCarverComponent.h"
#include "Net/UnrealNetwork.h"
#include "PathfinderCollisionComponent.h"
#include "RiftSpawnerComponent.h"
#include "RotatingSceneComponent.h"
#include "SpawnActorWithDebrisPosComponent.h"

ARiftCrystal::ARiftCrystal(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->RootComponent = CreateDefaultSubobject<USceneComponent>(TEXT("RootComponent"));
    this->Root = (USceneComponent*)RootComponent;
    this->FlightRoot = CreateDefaultSubobject<USceneComponent>(TEXT("FlightRootComponent"));
    this->Bobber = CreateDefaultSubobject<URotatingSceneComponent>(TEXT("BobbingComponent"));
    this->Rotator = CreateDefaultSubobject<URotatingSceneComponent>(TEXT("RotatorComponent"));
    this->CrystalMesh = CreateDefaultSubobject<USkeletalMeshComponent>(TEXT("SKMeshComponent"));
    this->WeakpointCollision = CreateDefaultSubobject<UCapsuleComponent>(TEXT("WeakpointCollisionComponent"));
    this->Light = CreateDefaultSubobject<UPointLightComponent>(TEXT("LightComponent"));
    this->LargeLight = CreateDefaultSubobject<UPointLightComponent>(TEXT("LargeLightComponent"));
    this->KnockBackCapsule = CreateDefaultSubobject<UCapsuleComponent>(TEXT("KnockbackTriggerComponent"));
    this->SpaceCarver = CreateDefaultSubobject<UMeshCarverComponent>(TEXT("SpaceCarverComponent"));
    this->TerrainDetectors.AddDefaulted(3);
    this->EnergyParticles = CreateDefaultSubobject<UNiagaraComponent>(TEXT("EnergyParticleComponent"));
    this->PillarParticles = CreateDefaultSubobject<UNiagaraComponent>(TEXT("PillarParticlesComponent"));
    this->RockIdleSound = CreateDefaultSubobject<UAudioComponent>(TEXT("RockIdleComponent"));
    this->CrystalIdleSound = CreateDefaultSubobject<UAudioComponent>(TEXT("CrystalIdleComponent"));
    this->InvulnerableParticles = CreateDefaultSubobject<UNiagaraComponent>(TEXT("RockShieldComponent"));
    this->EscortBlocker = CreateDefaultSubobject<UPathfinderCollisionComponent>(TEXT("EscortblockerComponent"));
    this->DebrisSpawner = CreateDefaultSubobject<USpawnActorWithDebrisPosComponent>(TEXT("DebrisSpawnerComponent"));
    this->Health = CreateDefaultSubobject<UEnemyHealthComponent>(TEXT("HealthComponent"));
    this->RiftSpawner = CreateDefaultSubobject<URiftSpawnerComponent>(TEXT("SpawnerComponent"));
    this->Enemy = CreateDefaultSubobject<UEnemyComponent>(TEXT("EnemyComponent"));
    this->KnockBackDamge = CreateDefaultSubobject<UDamageComponent>(TEXT("KnockbackDamageComponent"));
    this->EndExplosionDamage = CreateDefaultSubobject<UDamageComponent>(TEXT("EndExplosionDamageComponent"));
    this->BeamTargetParamName = TEXT("Beam_EndPosition");
    this->DeathRattle = nullptr;
    this->DroppedActorClass = nullptr;
    this->ExtractionPodClass = nullptr;
    this->ExtractionPodPositioning = nullptr;
    this->ExtractionPodCostCurve = nullptr;
    this->InvulnerableOverride = nullptr;
    this->WeakPointMaterial = nullptr;
    this->InitialBreakFreeSound = nullptr;
    this->BreakFreeSound = nullptr;
    this->ActivatedWarningSound = nullptr;
    this->BeamShootSound = nullptr;
    this->BeamImpactSound = nullptr;
    this->EmbeddedSound = nullptr;
    this->PushBackSound = nullptr;
    this->PushBackEffect = nullptr;
    this->BeamEffect = nullptr;
    this->BeamImpactEffect = nullptr;
    this->DeathDisplayTime = 3.00f;
    this->SafetyDistance = 0.00f;
    this->TargetFlightHeight = 0.00f;
    this->KnockBackInterval = 0.66f;
    this->MaxFallSpeed = 0.00f;
    this->FallAcceleration = 0.00f;
    this->CheckPathsInterval = 5.00f;
    this->ReinforcementCooldown = 10.00f;
    this->BossHealthBarDelay = 3.00f;
    this->InitialCarvingDone = false;
    this->RotateBeamComponents = false;
    this->State = Default;
    this->Bobber->SetupAttachment(FlightRoot);
    this->CrystalIdleSound->SetupAttachment(CrystalMesh);
    this->CrystalMesh->SetupAttachment(Rotator);
    this->EnergyParticles->SetupAttachment(CrystalMesh);
    this->EscortBlocker->SetupAttachment(RootComponent);
    this->FlightRoot->SetupAttachment(RootComponent);
    this->InvulnerableParticles->SetupAttachment(CrystalMesh);
    this->KnockBackCapsule->SetupAttachment(RootComponent);
    this->LargeLight->SetupAttachment(CrystalMesh);
    this->Light->SetupAttachment(CrystalMesh);
    this->PillarParticles->SetupAttachment(RootComponent);
    this->RockIdleSound->SetupAttachment(RootComponent);
    this->Rotator->SetupAttachment(Bobber);
    this->SpaceCarver->SetupAttachment(RootComponent);
    this->WeakpointCollision->SetupAttachment(CrystalMesh);
}


void ARiftCrystal::StopRumble() {
}


void ARiftCrystal::StartRumble() {
}



void ARiftCrystal::ShowHeathBar() {
}

void ARiftCrystal::ShowCallingEffects() const {
}

void ARiftCrystal::SetState(TEnumAsByte<ERiftCrystalState> NewState) {
}

void ARiftCrystal::OnTerrainPointRemoved(USceneComponent* Point) {
}

void ARiftCrystal::OnRiftSpawned(AActor* rift) {
}

void ARiftCrystal::OnRep_State(TEnumAsByte<ERiftCrystalState> oldState) {
}

void ARiftCrystal::OnNewHealthSegment(int32 currentSegment, int32 prevSegment) {
}

void ARiftCrystal::OnExitedKnockbackZone(UPrimitiveComponent* OverlappedComponent, AActor* OtherActor, UPrimitiveComponent* OtherComp, int32 OtherBodyIndex) {
}

void ARiftCrystal::OnEnteredKnockbackZone(UPrimitiveComponent* OverlappedComponent, AActor* OtherActor, UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const FHitResult& SweepResult) {
}

void ARiftCrystal::OnDeath(UHealthComponent* HealthComponent, float damageAmount, const FDamageData& DamageData, const TArray<UDamageTag*>& DamageTags) {
}

void ARiftCrystal::OnDamaged(float Damage, const FDamageData& DamageData, bool anyHealthLost, UHealthComponentBase* HealthComponent) {
}

void ARiftCrystal::OnAllRiftsOpened() {
}

void ARiftCrystal::EnableTerrainDetection() {
}

void ARiftCrystal::DisableTerrainDetection() {
}



void ARiftCrystal::All_ShowRiftSpawnEffects_Implementation(FVector_NetQuantize riftLocation) {
}

void ARiftCrystal::All_AddKnockBack_Implementation(FVector_NetQuantize Direction, float Force) {
}

void ARiftCrystal::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const {
    Super::GetLifetimeReplicatedProps(OutLifetimeProps);
    
    DOREPLIFETIME(ARiftCrystal, State);
}


