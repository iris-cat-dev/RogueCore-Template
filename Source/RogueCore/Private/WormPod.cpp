#include "WormPod.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=SceneComponent -FallbackName=SceneComponent
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=SkeletalMeshComponent -FallbackName=SkeletalMeshComponent
#include "Net/UnrealNetwork.h"
#include "SimpleHealthComponent.h"

AWormPod::AWormPod(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->RootComponent = CreateDefaultSubobject<USceneComponent>(TEXT("Root"));
    this->Root = (USceneComponent*)RootComponent;
    this->ScalePoint = CreateDefaultSubobject<USceneComponent>(TEXT("ScalePoint"));
    this->PodMesh = CreateDefaultSubobject<USkeletalMeshComponent>(TEXT("PodMesh"));
    this->Health = CreateDefaultSubobject<USimpleHealthComponent>(TEXT("Health"));
    this->Grown = false;
    this->GrowthAnimation = nullptr;
    this->PopAnimation = nullptr;
    this->CarcasActor = nullptr;
    this->WormDescriptor = nullptr;
    this->PopParticles = nullptr;
    this->deathParticles = nullptr;
    this->PopSound = nullptr;
    this->deathSound = nullptr;
    this->ParentDeathDelay = 1.00f;
    this->DeathDelayVariance = 0.50f;
    this->WormCount = 1;
    this->PodMesh->SetupAttachment(ScalePoint);
    this->ScalePoint->SetupAttachment(RootComponent);
}

void AWormPod::SpawnWorms() {
}

void AWormPod::OnRep_Grown() {
}

void AWormPod::OnParentDeath(UHealthComponentBase* ParentHealth) {
}

void AWormPod::OnDeath(UHealthComponentBase* aHealth) {
}

void AWormPod::OnAnimEnded(UAnimMontage* Montage, bool bInterrupted) {
}

void AWormPod::Kill() {
}

void AWormPod::All_ShowDeath_Implementation(bool success) {
}

void AWormPod::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const {
    Super::GetLifetimeReplicatedProps(OutLifetimeProps);
    
    DOREPLIFETIME(AWormPod, Grown);
}


