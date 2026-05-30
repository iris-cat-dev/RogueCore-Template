#include "GuntowerLineProjectile.h"
#include "Particles/ParticleSystemComponent.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=SceneComponent -FallbackName=SceneComponent
#include "NiagaraComponent.h"
#include "DamageComponent.h"

AGuntowerLineProjectile::AGuntowerLineProjectile(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->LeftLinePoint = CreateDefaultSubobject<USceneComponent>(TEXT("LeftLinePoint"));
    this->RightLinePoint = CreateDefaultSubobject<USceneComponent>(TEXT("RightLinePoint"));
    this->DamageComponent = CreateDefaultSubobject<UDamageComponent>(TEXT("DamageComponent"));
    this->BeamParticles = CreateDefaultSubobject<UParticleSystemComponent>(TEXT("BeamParticles"));
    this->BeamParticlesNS = CreateDefaultSubobject<UNiagaraComponent>(TEXT("BeamParticlesNS"));
    this->PlatformDissolveRadius = 150.00f;
    this->PlatformDissolveSqueeze = 3.00f;
    this->HitParticles = nullptr;
    this->HitParticlesNS = nullptr;
    this->TimeBetweenLineChecks = 0.00f;
    this->BeamParticles->SetupAttachment(RootComponent);
    this->BeamParticlesNS->SetupAttachment(RootComponent);
    this->LeftLinePoint->SetupAttachment(RootComponent);
    this->RightLinePoint->SetupAttachment(RootComponent);
}

void AGuntowerLineProjectile::TurnOffParticles() {
}

void AGuntowerLineProjectile::Fire(const FVector& Origin, const FVector& Direction, float Distance) {
}


