#include "SharkEnemy.h"
#include "Perception/PawnSensingComponent.h"
#include "Components/SphereComponent.h"
#include "NiagaraComponent.h"
#include "DamageComponent.h"
#include "EnemyComponent.h"
#include "FakePhysGrabberComponent.h"
#include "InDangerComponent.h"
#include "Net/UnrealNetwork.h"

ASharkEnemy::ASharkEnemy(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->PawnSensing = CreateDefaultSubobject<UPawnSensingComponent>(TEXT("PawnSensing"));
    this->CollisionSphere = CreateDefaultSubobject<USphereComponent>(TEXT("CollisionSphere"));
    this->NearTargetSphere = CreateDefaultSubobject<USphereComponent>(TEXT("NearTargetSphere"));
    this->AirParticles = CreateDefaultSubobject<UNiagaraComponent>(TEXT("AParticles"));
    this->GroundParticles = CreateDefaultSubobject<UNiagaraComponent>(TEXT("GParticles"));
    this->Danger = CreateDefaultSubobject<UInDangerComponent>(TEXT("Danger"));
    this->EnemyComponent = CreateDefaultSubobject<UEnemyComponent>(TEXT("EnemyComponent"));
    this->Damage = CreateDefaultSubobject<UDamageComponent>(TEXT("Damage"));
    this->BumpDamage = CreateDefaultSubobject<UDamageComponent>(TEXT("BumpDamage"));
    this->RestrictedGrabberComponent = CreateDefaultSubobject<UFakePhysGrabberComponent>(TEXT("RestrictedGrabberComponent"));
    this->ImpactCue = nullptr;
    this->JumpSound = nullptr;
    this->DiveForSeconds = 0.00f;
    this->LaunchPower = 0.00f;
    this->GrabTime = 3.00f;
    this->RagdollSpeedFactor = 0.20f;
    this->UpsideDownTime = 0.00f;
    this->TiltOutSpeed = 1.00f;
    this->SafeTimeAfterVounerable = 0.00f;
    this->RaiseHeight = 60.00f;
    this->AttackDuration = 0.00f;
    this->ChanceToGrab = 0.50f;
    this->MinTimeBetweenBumps = 1.00f;
    this->ChanceForJump = 0.30f;
    this->MinJumpCooldown = 0.00f;
    this->MaxJumpCooldown = 0.00f;
    this->JumpForce = 0.00f;
    this->NormalHeight = -60.00f;
    this->DiveHeight = -200.00f;
    this->MinCirclingTime = 0.00f;
    this->MaxCirclingTime = 0.00f;
    this->CircleSetttings = nullptr;
    this->AttackSettings = nullptr;
    this->PostHitSettings = nullptr;
    this->JumpSettings = nullptr;
    this->VulnerableSettings = nullptr;
    this->MaxInGroundTime = 0.00f;
    this->MinInGroundTime = 0.00f;
    this->StartParticleTime = 0.00f;
    this->EndParticleTime = 0.00f;
    this->DiveParticles = nullptr;
    this->State = ESharkEnemyState::Idle;
    this->AirParticles->SetupAttachment(RootComponent);
    this->CollisionSphere->SetupAttachment(mesh);
    this->GroundParticles->SetupAttachment(RootComponent);
    this->NearTargetSphere->SetupAttachment(mesh);
}

void ASharkEnemy::SetVulnerable() {
}

void ASharkEnemy::ReleasePlayer(AActor* playerchar, bool fullGrabElapsed) {
}

void ASharkEnemy::PopRecentlyBumpedPlayer() {
}


void ASharkEnemy::OnSeePawn(APawn* aPawn) {
}

void ASharkEnemy::OnRep_State(ESharkEnemyState oldState) {
}

void ASharkEnemy::OnRep_DiveTime() {
}

void ASharkEnemy::OnNearTarget(UPrimitiveComponent* OverlappedComponent, AActor* OtherActor, UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const FHitResult& SweepResult) {
}



void ASharkEnemy::OnHit(float HitDamage, const FDamageData& DamageData, bool anyHealthLost, UHealthComponentBase* InHealthComponent) {
}



void ASharkEnemy::OnDeathDetailed(UHealthComponent* aHealthComponent, float damageAmount, const FDamageData& DamageData, const TArray<UDamageTag*>& dTags) {
}

void ASharkEnemy::OnCollided(UPrimitiveComponent* OverlappedComponent, AActor* OtherActor, UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const FHitResult& SweepResult) {
}

void ASharkEnemy::Jumped_Implementation() {
}

void ASharkEnemy::ImpactSound_Implementation() {
}

void ASharkEnemy::DiveShow() {
}

void ASharkEnemy::DiveHide() {
}

void ASharkEnemy::All_DoRagdollImpact_Implementation(const FVector_NetQuantize& Direction) {
}

void ASharkEnemy::ActivateDanger() {
}

void ASharkEnemy::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const {
    Super::GetLifetimeReplicatedProps(OutLifetimeProps);
    
    DOREPLIFETIME(ASharkEnemy, DiveForSeconds);
    DOREPLIFETIME(ASharkEnemy, State);
}


