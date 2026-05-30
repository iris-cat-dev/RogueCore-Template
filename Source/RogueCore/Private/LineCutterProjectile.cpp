#include "LineCutterProjectile.h"
#include "Particles/ParticleSystemComponent.h"
#include "NiagaraComponent.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=SceneComponent -FallbackName=SceneComponent

#include "DamageComponent.h"
#include "Net/UnrealNetwork.h"

ALineCutterProjectile::ALineCutterProjectile(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->SwipeRadius = 5.00f;
    this->DoubleLineDistanceMultiplier = 2.00f;
    this->OverlapRadius = 5.00f;
    this->DestroyOnTerrainCollision = true;
    this->IsDead = false;
    this->bHasReversedDirection = false;
    this->FlyStraighTime = 0.20f;
    this->EletricDecalSize = EImpactDecalSize::Small;
    this->ImpactDecalSize = EImpactDecalSize::Small;
    this->LineRoot = CreateDefaultSubobject<USceneComponent>(TEXT("LineRoot"));
    this->LeftSphere = nullptr;
    this->RightSphere = nullptr;
    this->LeftSphere2 = nullptr;
    this->RightSphere2 = nullptr;
    this->LeftSphere3 = nullptr;
    this->RightSphere3 = nullptr;
    this->BeamParticle = nullptr;
    this->BeamParticle2 = nullptr;
    this->BeamParticle3 = nullptr;
    this->BeamParticle1NS = nullptr;
    this->BeamParticle2NS = nullptr;
    this->BeamParticle3NS = nullptr;
    this->LeftHitParticles = CreateDefaultSubobject<UParticleSystemComponent>(TEXT("LeftImpact"));
    this->RightHitParticles = CreateDefaultSubobject<UParticleSystemComponent>(TEXT("RightImpact"));
    this->LeftHitParticlesNS = CreateDefaultSubobject<UNiagaraComponent>(TEXT("LeftImpactNS"));
    this->RightHitParticlesNS = CreateDefaultSubobject<UNiagaraComponent>(TEXT("RightImpactNS"));
    this->RotationSpeed = 400.00f;
    this->RotationMode = ELineRotation::None;
    this->ShouldExplode = false;
    this->OnlyOne = false;
    this->IsDoubleLine = false;
    this->HasPlasmaTrail = false;
    this->LineMaxSize = 150.00f;
    this->LineExpansionDelay = 0.25f;
    this->TimeToLineExpansion = 0.35f;
    this->FireRate = 0.01f;
    this->DamageComponent = CreateDefaultSubobject<UDamageComponent>(TEXT("DamageComponent"));
    this->InitialDamageComponent = CreateDefaultSubobject<UDamageComponent>(TEXT("InitialDamageComponent"));
    this->InitialHitDamageMultiplier = 5;
    this->InhibitImpactDecalsTime = 0.00f;
    this->MinTimeBetweenImpactDecals = 0.15f;
    this->ExplosionDamageComponent = CreateDefaultSubobject<UDamageComponent>(TEXT("ExplosionDamageComponent"));
    this->LeftHitParticles->SetupAttachment(RootComponent);
    this->LeftHitParticlesNS->SetupAttachment(RootComponent);
    this->LineRoot->SetupAttachment(RootComponent);
    this->RightHitParticles->SetupAttachment(RootComponent);
    this->RightHitParticlesNS->SetupAttachment(RootComponent);
}

void ALineCutterProjectile::UpdateBeamLocations() {
}

void ALineCutterProjectile::TerrainSweep(const FVector& Left, const FVector& Right) {
}


void ALineCutterProjectile::SpawnDecal(FHitResult& Result) {
}


void ALineCutterProjectile::Server_RemoveDebris_Implementation(int32 instance, int32 Component) {
}

void ALineCutterProjectile::OnRep_LineRotation() {
}

void ALineCutterProjectile::Fire(const FVector& Origin, const FVector& Direction, float Distance) {
}

void ALineCutterProjectile::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const {
    Super::GetLifetimeReplicatedProps(OutLifetimeProps);
    
    DOREPLIFETIME(ALineCutterProjectile, LineRotation);
    DOREPLIFETIME(ALineCutterProjectile, RotationMode);
}


