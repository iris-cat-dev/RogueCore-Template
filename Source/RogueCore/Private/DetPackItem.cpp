#include "DetPackItem.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=SkeletalMeshComponent -FallbackName=SkeletalMeshComponent
#include "CapacityHoldingItemAggregator.h"
#include "FirstPersonSkeletalMeshComponent.h"
#include "Net/UnrealNetwork.h"

ADetPackItem::ADetPackItem(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->DetPackClass = nullptr;
    this->LoadoutProxy = nullptr;
    this->FPThrowMontage = nullptr;
    this->TPThrowMontage = nullptr;
    this->FP_DetonateAnim = nullptr;
    this->WPN_DetonateAnim = nullptr;
    this->FP_EquipDetonatorAnimation = nullptr;
    this->WPN_EquipDetonatorAnimation = nullptr;
    this->DetonatorFPMesh = CreateDefaultSubobject<UFirstPersonSkeletalMeshComponent>(TEXT("DetonatorFPMesh"));
    this->DetonatorTPMesh = CreateDefaultSubobject<USkeletalMeshComponent>(TEXT("DetonatorTPMesh"));
    this->DetonatorTriggerForceFeedback = nullptr;
    this->Capacity = CreateDefaultSubobject<UCapacityHoldingItemAggregator>(TEXT("Aggregator"));
    this->SupplyStatusWeight = 1.00f;
    this->ThrowVelocity = 0.00f;
    this->EnheiritOwnerVelocityScale = 0.00f;
    this->ThrowAngle = 0.00f;
    this->CooldownAfterThrow = 1.00f;
    this->CooldownAfterDetonation = 2.00f;
    this->ThrowDelay = 0.00f;
    this->ThrowZOffset = 0.00f;
    this->ShoutDetPackPlaced = nullptr;
    this->ShoutOutOfAmmo = nullptr;
    this->CooldownLeft = 0.00f;
    this->IsDetonatorOut = false;
    this->HasThrownPack = false;
    this->DetonatorFPMesh->SetupAttachment(RootComponent);
    this->DetonatorTPMesh->SetupAttachment(RootComponent);
}

void ADetPackItem::Simulate_ThrowGrenade_Implementation() {
}

void ADetPackItem::Server_ThrowGrenade_Implementation() {
}

void ADetPackItem::Server_Detonate_Implementation() {
}

void ADetPackItem::Server_CycleItem_Implementation() {
}


void ADetPackItem::OnRep_IsDetonatorOut() {
}

void ADetPackItem::OnDetonatingFinished() {
}

int32 ADetPackItem::GetCurrentGrenades() const {
    return 0;
}

void ADetPackItem::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const {
    Super::GetLifetimeReplicatedProps(OutLifetimeProps);
    
    DOREPLIFETIME(ADetPackItem, IsDetonatorOut);
    DOREPLIFETIME(ADetPackItem, HasThrownPack);
}


