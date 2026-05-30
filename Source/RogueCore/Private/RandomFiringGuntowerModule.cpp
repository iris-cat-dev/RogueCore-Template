#include "RandomFiringGuntowerModule.h"
#include "Components/AudioComponent.h"
#include "Particles/ParticleSystemComponent.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=StaticMeshComponent -FallbackName=StaticMeshComponent
#include "NiagaraComponent.h"
#include "DamageComponent.h"
#include "Net/UnrealNetwork.h"

ARandomFiringGuntowerModule::ARandomFiringGuntowerModule(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->LaserFrontTop = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("LaserFrontTop"));
    this->LaserFrontBottom = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("LaserFrontBottom"));
    this->LaserBackTop = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("LaserBackTop"));
    this->LaserBackBottom = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("LaserBackBottom"));
    this->FrontTopLaserMuzzle = CreateDefaultSubobject<UParticleSystemComponent>(TEXT("FrontTopMuzzleEffect"));
    this->FrontBottomLaserMuzzle = CreateDefaultSubobject<UParticleSystemComponent>(TEXT("FrontBottomMuzzleEffect"));
    this->BackTopLaserMuzzle = CreateDefaultSubobject<UParticleSystemComponent>(TEXT("BackMuzzleEffect"));
    this->BackBottomLaserMuzzle = CreateDefaultSubobject<UParticleSystemComponent>(TEXT("BackBottimMuzzleEffect"));
    this->FrontTopLaserMuzzleNS = CreateDefaultSubobject<UNiagaraComponent>(TEXT("FrontTopMuzzleEffectNS"));
    this->FrontBottomLaserMuzzleNS = CreateDefaultSubobject<UNiagaraComponent>(TEXT("FrontBottomMuzzleEffectNS"));
    this->BackTopLaserMuzzleNS = CreateDefaultSubobject<UNiagaraComponent>(TEXT("BackMuzzleEffectNS"));
    this->BackBottomLaserMuzzleNS = CreateDefaultSubobject<UNiagaraComponent>(TEXT("BackBottimMuzzleEffectNS"));
    this->LaserImpact = nullptr;
    this->LaserSound = CreateDefaultSubobject<UAudioComponent>(TEXT("LaserSound"));
    this->Damage = CreateDefaultSubobject<UDamageComponent>(TEXT("Damage"));
    this->BoneSpaceTurretMaxYaw = 0.00f;
    this->BoneSpaceTurretMaxPitch = 0.00f;
    this->TimeBetweenAttacks = 0.00f;
    this->TimeUntilNextAttack = 3.00f;
    this->ModuleRotationSpeed = 0.00f;
    this->TurretAimSpeed = 0.00f;
    this->LaserLeghtRatio = 1.00f;
    this->TimeBetweenHits = 0.25f;
    this->ChanceToInvert = 0.50f;
    this->PlatformDissolveRadius = 100.00f;
    this->PlatformDissolveSqueeze = 3.00f;
    this->IsAttacking = false;
    this->BackBottomLaserMuzzle->SetupAttachment(ModuleMesh);
    this->BackBottomLaserMuzzleNS->SetupAttachment(ModuleMesh);
    this->BackTopLaserMuzzle->SetupAttachment(ModuleMesh);
    this->BackTopLaserMuzzleNS->SetupAttachment(ModuleMesh);
    this->FrontBottomLaserMuzzle->SetupAttachment(ModuleMesh);
    this->FrontBottomLaserMuzzleNS->SetupAttachment(ModuleMesh);
    this->FrontTopLaserMuzzle->SetupAttachment(ModuleMesh);
    this->FrontTopLaserMuzzleNS->SetupAttachment(ModuleMesh);
    this->LaserBackBottom->SetupAttachment(ModuleMesh);
    this->LaserBackTop->SetupAttachment(ModuleMesh);
    this->LaserFrontBottom->SetupAttachment(ModuleMesh);
    this->LaserFrontTop->SetupAttachment(ModuleMesh);
    this->LaserSound->SetupAttachment(ModuleMesh);
}

void ARandomFiringGuntowerModule::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const {
    Super::GetLifetimeReplicatedProps(OutLifetimeProps);
    
    DOREPLIFETIME(ARandomFiringGuntowerModule, OtherCurrentRotation);
    DOREPLIFETIME(ARandomFiringGuntowerModule, IsAttacking);
}


