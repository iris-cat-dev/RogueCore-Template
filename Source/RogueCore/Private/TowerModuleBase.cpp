#include "TowerModuleBase.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=SceneComponent -FallbackName=SceneComponent
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=SkeletalMeshComponent -FallbackName=SkeletalMeshComponent
#include "EnemyHealthComponent.h"
#include "Net/UnrealNetwork.h"

ATowerModuleBase::ATowerModuleBase(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->RootComponent = CreateDefaultSubobject<USceneComponent>(TEXT("Root"));
    this->Root = (USceneComponent*)RootComponent;
    this->ModuleMesh = CreateDefaultSubobject<USkeletalMeshComponent>(TEXT("mesh"));
    this->ArmorPlates.AddDefaulted(3);
    this->Health = CreateDefaultSubobject<UEnemyHealthComponent>(TEXT("Heath"));
    this->DestroyedMesh = nullptr;
    this->deathSound = nullptr;
    this->deathParticles = nullptr;
    this->ArmorLaunchPower = 100.00f;
    this->HideArmorTime = 0.00f;
    this->ModuleRotationSpeed = 0.00f;
    this->ConstantRotation = false;
    this->State = EGuntowerModuleState::EDormant;
    this->ModuleMesh->SetupAttachment(RootComponent);
}

void ATowerModuleBase::SetState(EGuntowerModuleState NewState) {
}

void ATowerModuleBase::OnRep_State(EGuntowerModuleState prevState) {
}

void ATowerModuleBase::HideArmorPlates() {
}


void ATowerModuleBase::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const {
    Super::GetLifetimeReplicatedProps(OutLifetimeProps);
    
    DOREPLIFETIME(ATowerModuleBase, State);
}


