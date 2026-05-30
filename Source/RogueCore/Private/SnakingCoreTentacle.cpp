#include "SnakingCoreTentacle.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=SceneComponent -FallbackName=SceneComponent
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=SkeletalMeshComponent -FallbackName=SkeletalMeshComponent
#include "Components/SphereComponent.h"
#include "Components/SplineComponent.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=StaticMeshComponent -FallbackName=StaticMeshComponent
#include "DamageListenerComponent.h"
#include "GrabberComponent.h"
#include "InDangerComponent.h"
#include "Net/UnrealNetwork.h"
#include "TerrainPlacementComponent.h"

ASnakingCoreTentacle::ASnakingCoreTentacle(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->RootComponent = CreateDefaultSubobject<USceneComponent>(TEXT("Root"));
    this->Root = (USceneComponent*)RootComponent;
    this->TerrainDetect = nullptr;
    this->ActivateTrigger = CreateDefaultSubobject<USphereComponent>(TEXT("PlayerTrigger"));
    this->DeactivateTrigger = CreateDefaultSubobject<USphereComponent>(TEXT("PlayerLeaveTrigger"));
    this->WarningTrigger = CreateDefaultSubobject<USphereComponent>(TEXT("WarningTriggerComp"));
    this->ArmMesh = nullptr;
    this->HeadMesh = CreateDefaultSubobject<USkeletalMeshComponent>(TEXT("HeadMesh"));
    this->Spline = CreateDefaultSubobject<USplineComponent>(TEXT("SplineComponent"));
    this->StartSpline = CreateDefaultSubobject<USplineComponent>(TEXT("StartSplineComponent"));
    this->Head = CreateDefaultSubobject<USceneComponent>(TEXT("Head"));
    this->SnakingWobble = CreateDefaultSubobject<USceneComponent>(TEXT("SnakingWobbleComponent"));
    this->GrabTrigger = CreateDefaultSubobject<USphereComponent>(TEXT("GrabTrigger"));
    this->MoundMesh = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("MoundMeshComponent"));
    this->InDangerRetreat = CreateDefaultSubobject<UInDangerComponent>(TEXT("InDangerComponent"));
    this->InDangerStunned = CreateDefaultSubobject<UInDangerComponent>(TEXT("InDangerStunnedComponent"));
    this->SpawnFinder = CreateDefaultSubobject<UTerrainPlacementComponent>(TEXT("SpawnFinder"));
    this->DebrisPositioning = nullptr;
    this->GrabberComponent = CreateDefaultSubobject<UGrabberComponent>(TEXT("GrabberComp"));
    this->DamageListener = CreateDefaultSubobject<UDamageListenerComponent>(TEXT("DamageListener"));
    this->MoundMaterial = nullptr;
    this->SegmentMesh = nullptr;
    this->NeckMesh = nullptr;
    this->ReachingSpeed = 200.00f;
    this->RetractionSpeed = 100.00f;
    this->GrabbedTargetRetractionSpeed = 100.00f;
    this->AttackingSpeed = 800.00f;
    this->AttackCooldown = 1.00f;
    this->MaxOvershootDistance = 100.00f;
    this->BodyRadius = 50.00f;
    this->SegmentScale = 1.00f;
    this->SegmentOverlap = 0.00f;
    this->SegmentLength = 100.00f;
    this->RetreatTime = 3.00f;
    this->RetreatSpeed = 500.00f;
    this->BigRetreatTime = 8.00f;
    this->BurrowCheckInterval = 3.00f;
    this->BurrowCooldown = 1.00f;
    this->FaceTargetRotationSpeed = 5.00f;
    this->AnticipationTime = 1.00f;
    this->SnakingFrequency = 1.00f;
    this->SnakingSize = 10.00f;
    this->SnakingDirection = 1.00f;
    this->WallSafetyDistance = 50.00f;
    this->CheckLoSInterval = 0.33f;
    this->MaxNoTargetTime = 10.00f;
    this->StunDuration = 10.00f;
    this->ExtendTime = 2.00f;
    this->GenerateBodyEverySegment = 2;
    this->State = ESnakingTentacleState::Idle;
    this->Snaking = false;
    this->ShowBodyCollisions = false;
    this->ActivateTrigger->SetupAttachment(RootComponent);
    this->DeactivateTrigger->SetupAttachment(RootComponent);
    this->GrabTrigger->SetupAttachment(Head);
    this->Head->SetupAttachment(RootComponent);
    this->HeadMesh->SetupAttachment(SnakingWobble);
    this->MoundMesh->SetupAttachment(RootComponent);
    this->SnakingWobble->SetupAttachment(Head);
    this->Spline->SetupAttachment(RootComponent);
    this->StartSpline->SetupAttachment(RootComponent);
    this->WarningTrigger->SetupAttachment(Head);
}

void ASnakingCoreTentacle::ReleaseTarget() {
}



void ASnakingCoreTentacle::PlayerExitedTrigger(UPrimitiveComponent* OverlappedComponent, AActor* OtherActor, UPrimitiveComponent* OtherComp, int32 OtherBodyIndex) {
}

void ASnakingCoreTentacle::PlayerEnteredTrigger(UPrimitiveComponent* OverlappedComponent, AActor* OtherActor, UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const FHitResult& SweepResult) {
}

void ASnakingCoreTentacle::PlayerEnteredGrabTrigger(UPrimitiveComponent* OverlappedComponent, AActor* OtherActor, UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const FHitResult& SweepResult) {
}

void ASnakingCoreTentacle::OnTargetReleased(AActor* GrabbedActor, bool fullGrabElapsed) {
}

void ASnakingCoreTentacle::OnRep_TargetTransform() {
}

void ASnakingCoreTentacle::OnRep_State(ESnakingTentacleState oldState) {
}

void ASnakingCoreTentacle::OnReleasedTarget(AActor* GrabTarget, bool fullDuration) {
}

void ASnakingCoreTentacle::OnInDangerStunned() {
}

void ASnakingCoreTentacle::OnInDanger() {
}

void ASnakingCoreTentacle::OnGrabbedTarget(AActor* GrabTarget) {
}

void ASnakingCoreTentacle::OnExitedAttackRange(UPrimitiveComponent* OverlappedComponent, AActor* OtherActor, UPrimitiveComponent* OtherComp, int32 OtherBodyIndex) {
}

void ASnakingCoreTentacle::OnEnteredAttackRange(UPrimitiveComponent* OverlappedComponent, AActor* OtherActor, UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const FHitResult& SweepResult) {
}

void ASnakingCoreTentacle::OnDamageTaken(const TArray<FDamageListenerData>& listenerData, const FDamageParams& Params, const FDamageInfo& Damage, int32 eventInfo) {
}

void ASnakingCoreTentacle::ActorCountChanged() {
}

void ASnakingCoreTentacle::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const {
    Super::GetLifetimeReplicatedProps(OutLifetimeProps);
    
    DOREPLIFETIME(ASnakingCoreTentacle, TargetTransform);
    DOREPLIFETIME(ASnakingCoreTentacle, TargetLocation);
    DOREPLIFETIME(ASnakingCoreTentacle, TargetRotation);
    DOREPLIFETIME(ASnakingCoreTentacle, CurrentTarget);
    DOREPLIFETIME(ASnakingCoreTentacle, SnakingDirection);
    DOREPLIFETIME(ASnakingCoreTentacle, State);
}


