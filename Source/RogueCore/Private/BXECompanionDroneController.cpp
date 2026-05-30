#include "BXECompanionDroneController.h"

ABXECompanionDroneController::ABXECompanionDroneController(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->ElevatorClass = nullptr;
    this->ArtifactResource = nullptr;
    this->PotentExpeniteResource = nullptr;
    this->Behaviour = nullptr;
    this->DroneCallCooldown = 5.00f;
    this->LandingDistance = 1000.00f;
    this->MinUpdateTargetInterval = 0.00f;
    this->MaxUpdateTargetInterval = 0.00f;
    this->ArtifactProcessingTime = 5.00f;
    this->PotentExpeniteProcessingTime = 5.00f;
    this->SaluteDelay = 0.50f;
    this->TakeoffTime = 2.00f;
    this->LandingStuckTimeout = 5.00f;
    this->StoreRewards = true;
    this->ShoutCalling = nullptr;
}

void ABXECompanionDroneController::StartManualNegotiation() {
}

void ABXECompanionDroneController::Salute() {
}

void ABXECompanionDroneController::ReleaseFromMachine() {
}


void ABXECompanionDroneController::PlayerSaluted(APlayerCharacter* ShoutingPlayer) {
}

void ABXECompanionDroneController::PlayerJoined(APlayerCharacter* aPlayerState) {
}

void ABXECompanionDroneController::OnUsed() {
}

void ABXECompanionDroneController::OnStoppedUsing() {
}

void ABXECompanionDroneController::OnResourceDeposited(UResourceData* Resource, float Amount) {
}

void ABXECompanionDroneController::OnNegotiationStarted() {
}

void ABXECompanionDroneController::OnNegotiationComplete() {
}

void ABXECompanionDroneController::OnMessage(FName Name) {
}

void ABXECompanionDroneController::OnMatchStarted() {
}

void ABXECompanionDroneController::OnGameStateCountDownStarted(const FText& countdownText) {
}

void ABXECompanionDroneController::OnGameStateCountDownEnded() {
}

void ABXECompanionDroneController::OnEndDeposit(APlayerCharacter* Player) {
}

void ABXECompanionDroneController::OnDroneLeftState(EBXECompanionDroneState State) {
}

void ABXECompanionDroneController::OnDroneEnterState(EBXECompanionDroneState State) {
}

void ABXECompanionDroneController::OnDroneCalled(FVector Location, APlayerCharacter* Player) {
}

void ABXECompanionDroneController::OnDeposit(APlayerCharacter* Player) {
}

void ABXECompanionDroneController::ForceLandedFallback() {
}

void ABXECompanionDroneController::ElevatorUsed(ATeamElevator* Elevator) {
}

bool ABXECompanionDroneController::CallToMachine(AActor* Target) {
    return false;
}


