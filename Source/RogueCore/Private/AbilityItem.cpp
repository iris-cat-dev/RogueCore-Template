#include "AbilityItem.h"
#include "Net/UnrealNetwork.h"

AAbilityItem::AAbilityItem(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->AttachSocket = TEXT("Dwarf_Gauntlet_ArmL22Socket");
    this->Item_EquipAnimation = nullptr;
    this->Item_EquipUnavailable = nullptr;
    this->Item_Reactivation = nullptr;
    this->FP_EquipAnimation = nullptr;
    this->FP_EquipUnavailable = nullptr;
    this->TP_EquipAnimation = nullptr;
    this->TP_EquipUnavailable = nullptr;
    this->FP_ActivationAnimation = nullptr;
    this->TP_ActivationAnimation = nullptr;
    this->UnEquipTime = -1.00f;
    this->ActivationDelay = 0.00f;
    this->EquipCost = 1;
    this->EquipDuration = 0.25f;
    this->CharacterAnimationSet = nullptr;
    this->UpperBodyCharacterAnimationSet = nullptr;
    this->ActivationType = EItemActivationType::Immediate;
    this->DeactivateOnUnequip = false;
    this->UnEquipOnActivation = true;
    this->InactiveAndEquippedLastFrame = false;
    this->PlayNoEquipAnimWhenUnavailable = false;
    this->FPSuitMesh = nullptr;
    this->TPSuitMesh = nullptr;
}

void AAbilityItem::ServerTriggerAbilityUpgrades_Implementation() {
}



void AAbilityItem::OnEquipFinished() {
}


void AAbilityItem::OnChargesChanged(int32 charges) {
}


void AAbilityItem::OnAbilityReleased() {
}

void AAbilityItem::OnAbilityPressed() {
}

USkeletalMeshComponent* AAbilityItem::GetTPMesh() const {
    return NULL;
}

USkeletalMeshComponent* AAbilityItem::GetFPMesh() const {
    return NULL;
}

UAbilityComponent* AAbilityItem::GetAbility() const {
    return NULL;
}

void AAbilityItem::AnimFinished(UAnimMontage* Montage, bool interrupted) {
}

void AAbilityItem::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const {
    Super::GetLifetimeReplicatedProps(OutLifetimeProps);
    
    DOREPLIFETIME(AAbilityItem, OnActivationSpawnActorUpgrades);
    DOREPLIFETIME(AAbilityItem, OnActivationProjectiles);
}


