#include "CoreCrusherActor.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=SceneComponent -FallbackName=SceneComponent
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=SkeletalMeshComponent -FallbackName=SkeletalMeshComponent
#include "Components/SphereComponent.h"
#include "FriendlyHealthComponent.h"
#include "Net/UnrealNetwork.h"
#include "PathfinderCollisionComponent.h"
#include "RepairableComponent.h"
#include "RepairableUsable.h"
#include "SingleUsableComponent.h"

ACoreCrusherActor::ACoreCrusherActor(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->bReplicates = true;
    const FProperty* p_RemoteRole = GetClass()->FindPropertyByName("RemoteRole");
    (*p_RemoteRole->ContainerPtrToValuePtr<TEnumAsByte<ENetRole>>(this)) = ROLE_SimulatedProxy;
    this->RootComponent = CreateDefaultSubobject<USceneComponent>(TEXT("Root"));
    this->Root = (USceneComponent*)RootComponent;
    this->CoreCrusherMesh = CreateDefaultSubobject<USkeletalMeshComponent>(TEXT("CoreCrusherMesh"));
    this->PathfinderCollision = CreateDefaultSubobject<UPathfinderCollisionComponent>(TEXT("PathfinderCollision"));
    this->RepairableUsable = CreateDefaultSubobject<URepairableUsable>(TEXT("RepairableUsable"));
    this->FriendlyHealth = CreateDefaultSubobject<UFriendlyHealthComponent>(TEXT("FriendlyHealth"));
    this->RevivableUsable = CreateDefaultSubobject<USingleUsableComponent>(TEXT("RevivableUsable"));
    this->RunningRepairUsable = CreateDefaultSubobject<USingleUsableComponent>(TEXT("RunningRepairUsable"));
    this->UsableCollider = CreateDefaultSubobject<USphereComponent>(TEXT("UsableCollider"));
    this->Repairable = CreateDefaultSubobject<URepairableComponent>(TEXT("Repairable"));
    this->InitialBootTime = 5.00f;
    this->RebootTime = 5.00f;
    this->State = ECoreCrusherState::Disassembled;
    this->HealPerUse = 100.00f;
    this->CurrentBootLeft = 0.00f;
    this->DrainImmunityTime = 3.00f;
    this->CoreCrusherMesh->SetupAttachment(RootComponent);
    this->PathfinderCollision->SetupAttachment(RootComponent);
    this->UsableCollider->SetupAttachment(RootComponent);
}

void ACoreCrusherActor::RepairableUsableOnUsedBy(APlayerCharacter* User, EInputKeys Key) {
}


void ACoreCrusherActor::OnRunningRepairUsedBy(APlayerCharacter* User, EInputKeys Key) {
}

void ACoreCrusherActor::OnRevivableUsedBy(APlayerCharacter* User, EInputKeys Key) {
}

void ACoreCrusherActor::OnRep_State() {
}

void ACoreCrusherActor::OnDeath(UHealthComponentBase* HealthComponent) {
}

void ACoreCrusherActor::OnDamage(float Amount) {
}

void ACoreCrusherActor::OnAllResourcesAcquiredEvent(URepairableComponent* Component) {
}

void ACoreCrusherActor::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const {
    Super::GetLifetimeReplicatedProps(OutLifetimeProps);
    
    DOREPLIFETIME(ACoreCrusherActor, State);
    DOREPLIFETIME(ACoreCrusherActor, CurrentBootLeft);
}


