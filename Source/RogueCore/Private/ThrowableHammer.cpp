#include "ThrowableHammer.h"

AThrowableHammer::AThrowableHammer(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->ThrownHammer = nullptr;
    this->HoldingUse = false;
}

void AThrowableHammer::SetThrownHammerProjectile(AHammerProjectile* Projectile) {
}

void AThrowableHammer::CollectRecallable(URecallableProjectileComponent* RecallComponent) {
}

void AThrowableHammer::Client_CollectRecallable_Implementation(URecallableProjectileComponent* RecallComponent) {
}


