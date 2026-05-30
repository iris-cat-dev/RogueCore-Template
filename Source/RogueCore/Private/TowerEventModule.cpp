#include "TowerEventModule.h"
#include "Particles/ParticleSystemComponent.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=SceneComponent -FallbackName=SceneComponent
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=SkeletalMeshComponent -FallbackName=SkeletalMeshComponent
#include "ArmorHealthDamageComponent.h"
#include "EnemyHealthComponent.h"
#include "Net/UnrealNetwork.h"
#include "WeakpointGlowComponent.h"

ATowerEventModule::ATowerEventModule(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->RootComponent = CreateDefaultSubobject<USceneComponent>(TEXT("RootComponent"));
    this->Root = (USceneComponent*)RootComponent;
    this->mesh = CreateDefaultSubobject<USkeletalMeshComponent>(TEXT("MeshComponent"));
    this->Health = CreateDefaultSubobject<UEnemyHealthComponent>(TEXT("HealthComponent"));
    this->ArmorDamage = CreateDefaultSubobject<UArmorHealthDamageComponent>(TEXT("ArmorDamageComponent"));
    this->WeakpointGlow = CreateDefaultSubobject<UWeakpointGlowComponent>(TEXT("WeakpointGlowComponent"));
    this->SmokeParticles = CreateDefaultSubobject<UParticleSystemComponent>(TEXT("SmokeParticlesComponent"));
    this->SmokeParticlesNS = CreateDefaultSubobject<UParticleSystemComponent>(TEXT("SmokeParticlesNS"));
    this->DestroyedMesh = nullptr;
    this->ExplosionSound = nullptr;
    this->ExplosionEffect = nullptr;
    this->PreviousModule = nullptr;
    this->NextModule = nullptr;
    this->ArmorMesh = nullptr;
    this->ArmorPieces = 3;
    this->ArmorLifetime = 3.00f;
    this->ArmorPopForce = 300.00f;
    this->ArmorShedDelay = 0.50f;
    this->SmokeParticles->SetupAttachment(mesh);
    this->SmokeParticlesNS->SetupAttachment(mesh);
    this->mesh->SetupAttachment(RootComponent);
}


void ATowerEventModule::HideArmorPlates() {
}

void ATowerEventModule::DestroyArmor() {
}

void ATowerEventModule::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const {
    Super::GetLifetimeReplicatedProps(OutLifetimeProps);
    
    DOREPLIFETIME(ATowerEventModule, PreviousModule);
    DOREPLIFETIME(ATowerEventModule, NextModule);
}


