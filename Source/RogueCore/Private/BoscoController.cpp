#include "BoscoController.h"

ABoscoController::ABoscoController(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->BehaviourTree = nullptr;
    this->CheckOutOfTheWayInterval = 0.00f;
    this->DistCountAsSameHit = 10.00f;
    this->HearthstoneCrystalMaterial = nullptr;
    this->SearchForEnemiesInterval = 0.00f;
    this->SaluteDelay = 0.00f;
    this->SaluteCooldown = 0.00f;
    this->CheckGraberInterval = 0.00f;
    this->MaxThrowStrength = 800.00f;
    this->MaxThrowRange = 1600.00f;
    this->RepairRange = 100.00f;
    this->DistanceCountedAsClose = 2000.00f;
    this->ReviveHealthPercentage = 0.40f;
    this->ArmorOnRevivePercentage = 0.00f;
    this->CurrentUse = nullptr;
    this->TryingToPickItem = nullptr;
}

void ABoscoController::ReviveTarget() {
}

void ABoscoController::ResetToFollowState() {
}

void ABoscoController::RegisterPlayer(APlayerCharacter* aPlayerCharacter) {
}

void ABoscoController::PlayerChangedState(ECharacterState State) {
}

void ABoscoController::PickupItem() {
}

void ABoscoController::OnUseDone(int32 timesUsed) {
}

void ABoscoController::OnSecondaryLaserPointer(const FLaserPointerTarget& HitInfo) {
}

void ABoscoController::OnPlayerShout(APlayerCharacter* aPlayerCharacter) {
}

void ABoscoController::OnPlayerSalute(APlayerCharacter* aCharacater) {
}

void ABoscoController::OnPlayerLeave(AFSDPlayerState* aPlayerState) {
}

void ABoscoController::OnLaserPointer(const FLaserPointerTarget& HitInfo) {
}

void ABoscoController::OnJobFinished() {
}

void ABoscoController::OnEscortTargetDied(UHealthComponentBase* Health) {
}

void ABoscoController::OnCarriedUsed(APlayerCharacter* UsedBy, EInputKeys Key) {
}

FVector ABoscoController::GetPointNearPlayers() const {
    return FVector{};
}

AActor* ABoscoController::GetFollowTarget() {
    return NULL;
}

void ABoscoController::GenerateRelativeLocation(AActor* aTarget, float aRange, float aHeightRestriction, float aMinRange, bool aTryToStayOutOfTheWay, bool aStayBehind) {
}

void ABoscoController::ConfirmPickup() {
}

void ABoscoController::CarriableDrop() {
}


