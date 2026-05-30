#include "FlyingEnemyDeepPathfinderCharacter.h"

AFlyingEnemyDeepPathfinderCharacter::AFlyingEnemyDeepPathfinderCharacter(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->FrozenMaterial = nullptr;
    this->FrozenAsset = nullptr;
    this->FrozenDeathSound = nullptr;
    this->FrozenDeathParticles = nullptr;
}

void AFlyingEnemyDeepPathfinderCharacter::TriggerFrozenRagdoll() {
}

void AFlyingEnemyDeepPathfinderCharacter::OnFreezeImpact(UPrimitiveComponent* HitComponent, AActor* OtherActor, UPrimitiveComponent* OtherComp, FVector NormalImpulse, const FHitResult& Hit) {
}



