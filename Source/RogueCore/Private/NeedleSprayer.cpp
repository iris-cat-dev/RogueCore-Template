#include "NeedleSprayer.h"
#include "Components/PointLightComponent.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=SceneComponent -FallbackName=SceneComponent
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=SkeletalMeshComponent -FallbackName=SkeletalMeshComponent
#include "NiagaraComponent.h"
#include "HitscanComponent.h"

ANeedleSprayer::ANeedleSprayer(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->RootComponent = CreateDefaultSubobject<USceneComponent>(TEXT("Root"));
    this->Root = (USceneComponent*)RootComponent;
    this->SKMesh = CreateDefaultSubobject<USkeletalMeshComponent>(TEXT("mesh"));
    this->FireComponent = CreateDefaultSubobject<UHitscanComponent>(TEXT("HitscanComponent"));
    this->OnSpawnedEffectComponent = CreateDefaultSubobject<UHitscanComponent>(TEXT("OnSpawnedEffect"));
    this->MuzzleFlashLight = CreateDefaultSubobject<UPointLightComponent>(TEXT("MuzzleFlash"));
    this->MuzzleFlashParticleSys = CreateDefaultSubobject<UNiagaraComponent>(TEXT("MuzzleFlashNiagara"));
    this->ImpactParticleComponent = CreateDefaultSubobject<UNiagaraComponent>(TEXT("ImpactNiagara"));
    this->ShotOriginPivot = CreateDefaultSubobject<USceneComponent>(TEXT("ShotOriginPivot"));
    this->HitscanComponent = nullptr;
    this->SoundEnd = nullptr;
    this->ReloadAnimation = nullptr;
    this->MaxRotations = 15;
    this->LinesPerRotation = 18;
    this->DeployDelay = 0.50f;
    this->Lifetime = 15.00f;
    this->TimeBetweenRotations = 0.06f;
    this->RearmTime = 1.10f;
    this->AvoidCloseOffset = 350.00f;
    this->ShotOriginOffset = 60.00f;
    this->MaxRearms = 1;
    this->PlayAnimationOnBeginPlay = true;
    this->PlayAnimationOnReload = false;
    this->DrawDebugLines = false;
    this->DebugLinesDuration = 0.40f;
    this->ImpactParticleComponent->SetupAttachment(RootComponent);
    this->MuzzleFlashLight->SetupAttachment(SKMesh);
    this->MuzzleFlashParticleSys->SetupAttachment(MuzzleFlashLight);
    this->SKMesh->SetupAttachment(RootComponent);
    this->ShotOriginPivot->SetupAttachment(SKMesh);
}


void ANeedleSprayer::OnHit(const FHitResult& Result, bool IsPenetrating) {
}


