#include "JetBootsMovementComponent.h"
#include "Net/UnrealNetwork.h"

UJetBootsMovementComponent::UJetBootsMovementComponent(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->Settings = nullptr;
    this->UseAudioComponent = nullptr;
    this->OverHeatAudioComponent = nullptr;
    this->DeactivatedAudioComponent = nullptr;
    this->TP_UseAudioComponent = nullptr;
    this->TP_OverHeatAudioComponent = nullptr;
    this->TP_DeactivatedAudioComponent = nullptr;
    this->FootSocketNameLeft = TEXT("Dwarf_LegLHeelSocket");
    this->FootSocketNameRight = TEXT("Dwarf_LegRHeelSocket");
    this->FootAttachMesh = nullptr;
    this->LFootAttachMeshComponent = nullptr;
    this->RFootAttachMeshComponent = nullptr;
    this->LeftFootParticles = nullptr;
    this->RightFootParticles = nullptr;
    this->FPFootParticles = nullptr;
    this->Character = nullptr;
    this->FromJumpDelay = 0.35f;
    this->FromTerrainStartDelay = 0.20f;
    this->OverHeatAtPercent = 0.98f;
    this->AddPlayerAirVelocityToThrowFactor = 1.00f;
    this->CurrentJetFuel = 0.00f;
    this->isUsing = false;
    this->isFromTakeOff = false;
    this->overheated = false;
}

void UJetBootsMovementComponent::Server_SetOverheated_Implementation(bool Current) {
}

void UJetBootsMovementComponent::Server_SetIsUsing_Implementation(bool Current, bool Last, bool NewIsFromTakeOff) {
}

void UJetBootsMovementComponent::Server_SetCurrentJetFuel_Implementation(float Current) {
}

void UJetBootsMovementComponent::RemoveJetBoots() {
}








void UJetBootsMovementComponent::OnStateChanged(ECharacterState State) {
}

void UJetBootsMovementComponent::OnRep_OverHeated(bool lastOverheated) {
}

void UJetBootsMovementComponent::OnRep_IsUsing(bool lastUsing) {
}

void UJetBootsMovementComponent::OnRep_CurrentJetFuel() {
}

void UJetBootsMovementComponent::OnPlayerCharacterHit(UPrimitiveComponent* HitComponent, AActor* OtherActor, UPrimitiveComponent* OtherComp, FVector NormalImpulse, const FHitResult& Hit) {
}

void UJetBootsMovementComponent::OnJumpReleased() {
}

void UJetBootsMovementComponent::OnJumpPressed(APlayerCharacter* InPlayer) {
}

void UJetBootsMovementComponent::OnCameraModeChanged(ECharacterCameraMode newCameraMode, ECharacterCameraMode OldCameraMode) {
}

void UJetBootsMovementComponent::Client_SetIsUsing_Implementation(bool NewIsUsing) {
}

void UJetBootsMovementComponent::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const {
    Super::GetLifetimeReplicatedProps(OutLifetimeProps);
    
    DOREPLIFETIME(UJetBootsMovementComponent, CurrentJetFuel);
    DOREPLIFETIME(UJetBootsMovementComponent, isUsing);
    DOREPLIFETIME(UJetBootsMovementComponent, isFromTakeOff);
    DOREPLIFETIME(UJetBootsMovementComponent, overheated);
}


