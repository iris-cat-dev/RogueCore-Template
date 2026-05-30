#include "HostileGuntowerModule.h"
#include "Particles/ParticleSystemComponent.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=SkeletalMeshComponent -FallbackName=SkeletalMeshComponent
#include "NiagaraComponent.h"
#include "EnemyComponent.h"
#include "Net/UnrealNetwork.h"

AHostileGuntowerModule::AHostileGuntowerModule(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->DestroyedMesh = CreateDefaultSubobject<USkeletalMeshComponent>(TEXT("DestroyedMesh"));
    this->DestroyedSmoke = CreateDefaultSubobject<UParticleSystemComponent>(TEXT("DestroyedSmoke"));
    this->DestroyedSmokeNS = CreateDefaultSubobject<UNiagaraComponent>(TEXT("DestroyedSmokeNS"));
    this->EnemyComponent = CreateDefaultSubobject<UEnemyComponent>(TEXT("EnemyComponent"));
    this->ModuleMaxHealth = 1.00f;
    this->DestroyedMesh->SetupAttachment(RootComponent);
    this->DestroyedSmoke->SetupAttachment(DestroyedMesh);
    this->DestroyedSmokeNS->SetupAttachment(DestroyedMesh);
}

void AHostileGuntowerModule::OnWeakpointDied(UHealthComponentBase* Health) {
}

void AHostileGuntowerModule::OnRep_ModuleMaxHealth() {
}

void AHostileGuntowerModule::OnModuleDied(UHealthComponentBase* Health) {
}

void AHostileGuntowerModule::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const {
    Super::GetLifetimeReplicatedProps(OutLifetimeProps);
    
    DOREPLIFETIME(AHostileGuntowerModule, ModuleMaxHealth);
    DOREPLIFETIME(AHostileGuntowerModule, CurrentAimRotation);
}


