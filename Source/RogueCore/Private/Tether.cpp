#include "Tether.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=SkeletalMeshComponent -FallbackName=SkeletalMeshComponent
#include "Components/SphereComponent.h"
#include "NiagaraComponent.h"
#include "CarriableComponent.h"
#include "DamageComponent.h"
#include "InstantUsable.h"
#include "Net/UnrealNetwork.h"

ATether::ATether(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->bNetLoadOnClient = false;
    this->bReplicates = true;
    const FProperty* p_RemoteRole = GetClass()->FindPropertyByName("RemoteRole");
    (*p_RemoteRole->ContainerPtrToValuePtr<TEnumAsByte<ENetRole>>(this)) = ROLE_SimulatedProxy;
    this->RootComponent = CreateDefaultSubobject<USphereComponent>(TEXT("PhysCollision"));
    this->BaseMesh = CreateDefaultSubobject<USkeletalMeshComponent>(TEXT("BaseMesh"));
    this->UsableComponent = CreateDefaultSubobject<UInstantUsable>(TEXT("usable"));
    this->Carry = CreateDefaultSubobject<UCarriableComponent>(TEXT("CarryComponent"));
    this->UseTrigger = CreateDefaultSubobject<USphereComponent>(TEXT("UseTrigger"));
    this->TetherBeam = CreateDefaultSubobject<UNiagaraComponent>(TEXT("TetherBeam"));
    this->PysicalCollision = static_cast<USphereComponent*>(RootComponent);
    this->ExplosionDamage = CreateDefaultSubobject<UDamageComponent>(TEXT("ExplosionDamage"));
    this->ExplosionParticle = nullptr;
    this->ExplosionSound = nullptr;
    this->IsOnGround = false;
    this->KnockBackForce = 300.00f;
    this->BaseMesh->SetupAttachment(RootComponent);
    this->TetherBeam->SetupAttachment(BaseMesh);
    this->UseTrigger->SetupAttachment(BaseMesh);
}

void ATether::SetIsOnGround(bool NewIsOnGround) {
}




void ATether::Explode_Implementation() {
}

UNiagaraComponent* ATether::DuplicateTetherBeam() {
    return NULL;
}

void ATether::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const {
    Super::GetLifetimeReplicatedProps(OutLifetimeProps);
    
    DOREPLIFETIME(ATether, IsOnGround);
}


