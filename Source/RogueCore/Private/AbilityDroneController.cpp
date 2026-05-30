#include "AbilityDroneController.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=SceneComponent -FallbackName=SceneComponent
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=SkeletalMeshComponent -FallbackName=SkeletalMeshComponent
#include "Net/UnrealNetwork.h"

AAbilityDroneController::AAbilityDroneController(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->RootComponent = CreateDefaultSubobject<USceneComponent>(TEXT("Root"));
    this->FPBirdMesh = CreateDefaultSubobject<USkeletalMeshComponent>(TEXT("FP_BirdMeshComp"));
    this->TPBirdMesh = CreateDefaultSubobject<USkeletalMeshComponent>(TEXT("TP_BirdMeshComp"));
    this->BaseExtraBurstSize = 2;
    this->SentOutStatus = nullptr;
    this->FP_PetDrone = nullptr;
    this->TP_PetDrone = nullptr;
    this->Bird_Pet = nullptr;
    this->Bird_Equip = nullptr;
    this->Item_AlternateEquip = nullptr;
    this->Bird_ReceivedBird = nullptr;
    this->Item_ReceivedBird = nullptr;
    this->FP_ReceivedBird = nullptr;
    this->TP_ReceivedBird = nullptr;
    this->Item_Activation = nullptr;
    this->RecallAnim = nullptr;
    this->TP_RecallAnim = nullptr;
    this->FP_ReactivateDroneAnim = nullptr;
    this->TP_ReactivateDroneAnim = nullptr;
    this->Bird_JumpStart = nullptr;
    this->Bird_JumpEnd = nullptr;
    this->PrimaryCommandedShout = nullptr;
    this->SecondaryCommandedShout = nullptr;
    this->Range = 5000.00f;
    this->DroneClass = nullptr;
    this->RangeForReviveWithoutLineOfSight = 2000.00f;
    this->FPBirdMesh->SetupAttachment(RootComponent);
    this->TPBirdMesh->SetupAttachment(RootComponent);
}

void AAbilityDroneController::Server_UseSecondary_Implementation(FDroneControllerUseInfo droneInfo) {
}

void AAbilityDroneController::Server_UsePrimary_Implementation(FDroneControllerUseInfo droneInfo) {
}

void AAbilityDroneController::Server_ShowRecall_Implementation(bool sentOut) {
}

void AAbilityDroneController::Server_ShowActivation_Implementation(bool sentOut) {
}

void AAbilityDroneController::Server_RecallDrones_Implementation() {
}

void AAbilityDroneController::OnUsingFinished() {
}

void AAbilityDroneController::OnReviveActionTriggered() {
}

void AAbilityDroneController::OnRep_DroneInstances() {
}

void AAbilityDroneController::OnDroneStateChanged(EAbilityDroneState State) {
}



void AAbilityDroneController::OnDroneDestroyed(AActor* Drone) {
}

void AAbilityDroneController::OnDroneAttacked() {
}

void AAbilityDroneController::OnCharacterStateChanged(ECharacterState NewState) {
}

AActor* AAbilityDroneController::GetReviveTarget() const {
    return NULL;
}

void AAbilityDroneController::All_ShowRecall_Implementation(bool sentOut) {
}

void AAbilityDroneController::All_ShowActivation_Implementation(bool sentOut) {
}

void AAbilityDroneController::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const {
    Super::GetLifetimeReplicatedProps(OutLifetimeProps);
    
    DOREPLIFETIME(AAbilityDroneController, DroneInstances);
}


